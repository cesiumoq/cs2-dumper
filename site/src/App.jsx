import { useEffect, useMemo, useState } from "react";

const fmt = (n) => new Intl.NumberFormat("fr-FR").format(n ?? 0);
const pct = (a, b) => (b ? ((a / b) * 100).toFixed(2) : "0.00");

async function getJson(path) {
  const response = await fetch(path, { cache: "no-store" });
  if (!response.ok) throw new Error(`${path}: ${response.status}`);
  return response.json();
}

export default function App() {
  const [index, setIndex] = useState(null);
  const [build, setBuild] = useState(null);
  const [patterns, setPatterns] = useState([]);
  const [offsets, setOffsets] = useState([]);
  const [tab, setTab] = useState("patterns");
  const [query, setQuery] = useState("");
  const [error, setError] = useState("");

  useEffect(() => {
    (async () => {
      try {
        const idx = await getJson("./data/index.json");
        setIndex(idx);
        const b = await getJson(`./data/builds/${idx.latest}/build.json`);
        setBuild(b);
        const p = await getJson(`./data/builds/${idx.latest}/patterns.json`);
        setPatterns(Array.isArray(p.patterns) ? p.patterns : []);
        const o = await getJson(`./data/builds/${idx.latest}/offsets_all.json`);
        const rows = [];
        for (const [module, entries] of Object.entries(o.modules || {})) {
          for (const entry of entries) rows.push({ module, ...entry });
        }
        setOffsets(rows);
      } catch (e) {
        setError(e.message);
      }
    })();
  }, []);

  const sig = build?.signatures || {};
  const coverage = pct(sig.found, sig.total);

  const filteredPatterns = useMemo(() => {
    const q = query.toLowerCase().trim();
    return patterns
      .filter((p) => !q || `${p.name} ${p.module} ${p.rva}`.toLowerCase().includes(q))
      .slice(0, 500);
  }, [patterns, query]);

  const filteredOffsets = useMemo(() => {
    const q = query.toLowerCase().trim();
    return offsets
      .filter((o) => !q || `${o.name} ${o.module} ${o.kind} ${o.rva}`.toLowerCase().includes(q))
      .slice(0, 500);
  }, [offsets, query]);

  return (
    <main>
      <header className="hero">
        <div className="eyebrow">OFFSETS · SIGNATURES · SCHEMAS · SDK</div>
        <div className="title-row">
          <h1>CS2 Dumper</h1>
          <span className={`pill ${build?.valid ? "ok" : "warn"}`}>
            {build ? (build.valid ? "valid" : "preview") : "loading"}
          </span>
        </div>
        <p className="lead">
          Complete CS2 offsets, signatures, schemas and SDK, published by build.
        </p>
        <div className="stats">
          <Stat label="build" value={build?.build_number ?? "—"} />
          <Stat label="signatures" value={`${fmt(sig.found)} / ${fmt(sig.total)}`} />
          <Stat label="coverage" value={`${coverage}%`} />
          <Stat label="offsets" value={fmt(build?.offsets?.count)} />
          <Stat label="modules" value={fmt(Object.keys(build?.modules || {}).length)} />
        </div>
        {error && <div className="alert">Unable to load data: {error}</div>}
      </header>

      <section className="panel">
        <div className="toolbar">
          <div className="tabs">
            <button className={tab === "patterns" ? "active" : ""} onClick={() => setTab("patterns")}>
              Patterns <span>{fmt(patterns.length)}</span>
            </button>
            <button className={tab === "offsets" ? "active" : ""} onClick={() => setTab("offsets")}>
              Offsets <span>{fmt(offsets.length)}</span>
            </button>
            <button className={tab === "builds" ? "active" : ""} onClick={() => setTab("builds")}>
              Builds <span>{fmt(index?.builds?.length)}</span>
            </button>
          </div>
          {tab !== "builds" && (
            <input
              value={query}
              onChange={(e) => setQuery(e.target.value)}
              placeholder="Search name, module, RVA…"
              aria-label="Search"
            />
          )}
        </div>

        {tab === "patterns" && (
          <Table
            head={["Name", "Module", "RVA", "Type"]}
            rows={filteredPatterns.map((p) => [p.name, p.module, p.rva ?? "—", p.resolve ?? "—"])}
          />
        )}
        {tab === "offsets" && (
          <Table
            head={["Name", "Module", "RVA", "Type"]}
            rows={filteredOffsets.map((o) => [o.name, o.module, o.rva ?? "—", o.kind ?? "—"])}
          />
        )}
        {tab === "builds" && (
          <Table
            head={["Build", "Status", "Published", "Data"]}
            rows={(index?.builds || []).map((b) => [
              b.build,
              b.valid ? "valid" : "preview",
              new Date(b.published_at).toLocaleString("fr-FR"),
              "build.json",
            ])}
          />
        )}
        <div className="foot">
          {tab === "patterns" && filteredPatterns.length === 500 && <span>Showing the first 500 results.</span>}
          {tab === "offsets" && filteredOffsets.length === 500 && <span>Showing the first 500 results.</span>}
          {build && !build.valid && <span className="muted">Preview build: {build.reason}</span>}
        </div>
      </section>
    </main>
  );
}

function Stat({ label, value }) {
  return (
    <div className="stat">
      <b>{value}</b>
      <span>{label}</span>
    </div>
  );
}

function Table({ head, rows }) {
  return (
    <div className="table-wrap">
      <table>
        <thead>
          <tr>{head.map((h) => <th key={h}>{h}</th>)}</tr>
        </thead>
        <tbody>
          {rows.map((row, i) => (
            <tr key={i}>
              {row.map((cell, j) => <td key={j} className={j === 0 ? "mono" : ""}>{cell}</td>)}
            </tr>
          ))}
          {!rows.length && (
            <tr><td colSpan={head.length} className="empty">No results.</td></tr>
          )}
        </tbody>
      </table>
    </div>
  );
}

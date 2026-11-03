import { useEffect, useMemo, useState } from "react";

const FILE_ICON = "M56 20h96l56 56v140a20 20 0 0 1-20 20H56a20 20 0 0 1-20-20V40a20 20 0 0 1 20-20Zm92 24v40h40";

const NAV = [
  ["overview", "Overview"],
  ["status", "Status"],
  ["patterns", "Patterns", "577"],
  ["offsets", "Offsets"],
  ["interfaces", "Interfaces", "111"],
  ["classes", "Classes", "3,300"],
  ["convars", "ConVars", "4,131"],
  ["weapons", "Weapons", "5"],
  ["events", "Game Events", "273"],
  ["entities", "Entities", "182"],
  ["engine", "Engine", "12"],
  ["features", "Features", "6"],
  ["api", "API"],
  ["downloads", "Downloads"],
];

const SOURCES = {
  patterns: "api/patterns.json",
  offsets: "api/offsets_all.json",
  interfaces: "api/interfaces.json",
  classes: "api/client_dll.json",
  convars: "api/sdk/convars/convars.json",
  weapons: "api/sdk/weapons/weapons.json",
  events: "api/sdk/gameevents/gameevents.json",
  entities: "api/sdk/entities/entities.json",
  engine: "api/sdk/engine/engine_structs.json",
  features: "api/sdk/verified_features.json",
};

const FILE_LINKS = {
  status: ["build.json", "hashes.json", "info.json"],
  offsets: ["offsets.hpp", "offsets.cs", "offsets.json", "OffsetsHex.json", "offsets.txt", "offsets_all.json"],
  patterns: ["patterns.json", "patterns.hpp", "recovered_patterns.json", "scanner_patterns.txt"],
  classes: ["client_dll.hpp", "client_dll.cs", "client_dll.json", "server_dll.hpp", "types.json"],
  interfaces: ["interfaces.hpp", "interfaces.cs", "interfaces.json", "sdk/interfaces/vtables.json"],
  convars: ["sdk/convars/convars.json", "sdk/convars/convars.hpp"],
  events: ["sdk/gameevents/gameevents.json"],
  entities: ["sdk/entities/entities.json"],
  engine: ["sdk/engine/engine_structs.json"],
  features: ["sdk/verified_features.json"],
  sdk: ["struct.hpp", "sdk/cs2.hpp"],
};

function flattenOffsets(data) {
  const rows = [];
  for (const [module, entries] of Object.entries(data.modules || {})) {
    for (const entry of entries) rows.push({ module, ...entry });
  }
  return rows;
}

function flattenInterfaces(data) {
  const rows = [];
  for (const [module, entries] of Object.entries(data || {})) {
    if (typeof entries !== "object" || Array.isArray(entries)) continue;
    for (const [name, value] of Object.entries(entries)) {
      rows.push({ module, name, rva: typeof value === "string" ? value : value?.rva ?? value?.value ?? "" });
    }
  }
  return rows;
}

function classesOf(data) {
  const root = data?.["client.dll"] || data?.classes || {};
  const classes = Array.isArray(root.classes) ? root.classes : [];
  return classes.map((c) => ({ name: c.name, parent: c.parent || "", size: c.size ?? "" }));
}

function rowsFor(view, data) {
  if (!data) return [];
  switch (view) {
    case "patterns":
      return (data.patterns || []).map((p) => ({ name: p.name, module: p.module, rva: p.rva, type: p.resolve }));
    case "offsets":
      return flattenOffsets(data);
    case "interfaces":
      return flattenInterfaces(data);
    case "classes":
      return classesOf(data);
    case "convars":
      return (data.convars || []).map((c) => ({ name: c.name, value: c.value ?? "", type: c.type ?? "", flags: (c.flag_names || []).join(" ") }));
    case "weapons":
      return (data.weapons || []).map((w) => ({
        name: w.name, damage: w.damage, hs: w.headshot_multiplier, armor: w.armor_ratio,
        pen: w.penetration, range: w.range, cycle: w.cycle_time, price: w.price,
        spread: w.spread, bullets: w.num_bullets,
      }));
    case "events":
      return (data.events || []).map((e) => ({ name: e.name, id: e.id, fields: (e.fields || []).length }));
    case "entities":
      return (data.entities || []).map((e) => ({ classname: e.classname, index: e.index, health: e.health, team: e.team }));
    case "engine":
      return (data.structs || []).map((s) => ({ name: s.name, module: s.module, size: s.size ?? "", fields: (s.fields || []).length }));
    case "features":
      return (data.features || []).map((f) => ({ name: f.name, category: f.category, status: f.status, summary: f.summary }));
    default:
      return [];
  }
}

const COLUMNS = {
  patterns: [["name", "Name"], ["module", "Module"], ["rva", "RVA"], ["type", "Type"]],
  offsets: [["name", "Name"], ["module", "Module"], ["rva", "RVA"], ["kind", "Kind"]],
  interfaces: [["name", "Name"], ["module", "Module"], ["rva", "RVA"]],
  classes: [["name", "Class"], ["parent", "Parent"], ["size", "Size"]],
  convars: [["name", "Name"], ["value", "Value"], ["type", "Type"], ["flags", "Flags"]],
  weapons: [["name", "Weapon"], ["damage", "Damage"], ["hs", "HS ×"], ["armor", "Armor"], ["pen", "Pen"], ["range", "Range"], ["cycle", "Cycle"], ["price", "Price"], ["spread", "Spread"], ["bullets", "Bullets"]],
  events: [["name", "Event"], ["id", "ID"], ["fields", "Fields"]],
  entities: [["index", "Index"], ["classname", "Classname"], ["health", "HP"], ["team", "Team"]],
  engine: [["name", "Struct"], ["module", "Module"], ["size", "Size"], ["fields", "Fields"]],
  features: [["name", "Feature"], ["category", "Category"], ["status", "Status"], ["summary", "Summary"]],
};

function Icon() {
  return (
    <svg viewBox="0 0 256 256" width="16" height="16" fill="none" stroke="currentColor" strokeWidth="14" strokeLinecap="round" strokeLinejoin="round">
      <path d={FILE_ICON} />
    </svg>
  );
}

function formatDate(value) {
  if (!value) return "unknown";
  const d = new Date(value);
  if (Number.isNaN(d.getTime())) return value;
  return d.toLocaleString("en-GB", { day: "2-digit", month: "short", year: "numeric", hour: "2-digit", minute: "2-digit" });
}

export default function App() {
  const [build, setBuild] = useState("14194");
  const [meta, setMeta] = useState(null);
  const [view, setView] = useState("overview");
  const [cache, setCache] = useState({});
  const [loading, setLoading] = useState(false);
  const [query, setQuery] = useState("");

  useEffect(() => {
    fetch("./data/latest/build.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => { setBuild(String(data.build_number ?? "14194")); setMeta(data); })
      .catch(() => {});
  }, []);

  useEffect(() => {
    if (!SOURCES[view] || cache[view]) return;
    setLoading(true);
    fetch(SOURCES[view], { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => setCache((c) => ({ ...c, [view]: data })))
      .catch(() => setCache((c) => ({ ...c, [view]: null })))
      .finally(() => setLoading(false));
  }, [view, cache]);

  const viewer = (file) => `./view.html?file=${file.split("/").map(encodeURIComponent).join("/")}`;
  const rows = useMemo(() => rowsFor(view, cache[view]), [view, cache]);
  const cols = COLUMNS[view] || [];
  const q = query.trim().toLowerCase();

  const fileHits = useMemo(() => {
    if (!q) return [];
    const hits = [];
    for (const [group, files] of Object.entries(FILE_LINKS)) {
      for (const file of files) if (file.toLowerCase().includes(q)) hits.push({ group, file });
    }
    return hits.slice(0, 8);
  }, [q]);

  const rowHits = useMemo(() => {
    if (!q || !rows.length) return [];
    return rows.filter((r) => JSON.stringify(r).toLowerCase().includes(q)).slice(0, 10);
  }, [q, rows]);

  const selectView = (next) => {
    setView(next);
    setQuery("");
  };

  return (
    <div className="shell">
      <aside className="sidebar">
        <div className="brand">
          <div className="brand-title">CS2 <span>SDK</span></div>
          <div className="brand-sub">offsets · patterns</div>
        </div>
        <nav>
          {NAV.map(([id, label, count]) => (
            <button key={id} className={view === id ? "active" : ""} onClick={() => selectView(id)}>
              <span>{label}</span>
              {count && <em>{count}</em>}
            </button>
          ))}
        </nav>
      </aside>

      <main className="content">
        <header className="topbar">
          <div className="crumbs"><span>SDK</span><i>/</i><b>{NAV.find(([id]) => id === view)?.[1]}</b></div>
          <div className="search-wrap">
            <span className="search-icon">⌕</span>
            <input value={query} onChange={(e) => setQuery(e.target.value)} placeholder="Search dump…" />
            {q && (
              <div className="search-dropdown">
                {fileHits.map(({ group, file }) => (
                  <button key={`${group}-${file}`} onClick={() => selectView(group)}>
                    <span className="res-name">{file}</span>
                    <span className="res-meta">{group}</span>
                  </button>
                ))}
                {rowHits.map((row, i) => (
                  <button key={`row-${i}`} onClick={() => setQuery("")}>
                    <span className="res-name">{row.name || row.classname || row.index}</span>
                    <span className="res-meta">{view} · {row.module || row.type || row.category || ""}</span>
                  </button>
                ))}
                {!fileHits.length && !rowHits.length && <div className="empty-search">No results</div>}
              </div>
            )}
          </div>
          <div className="build-badge" title={`Dump generated ${formatDate(meta?.generated_at)}`}>
            <span className="dot" />
            <span className="badge-label">build</span><span className="badge-value">{build}</span>
            <span className="badge-sep" />
            <span className="badge-label">dumped</span><span className="badge-value">{formatDate(meta?.generated_at)}</span>
            {meta?.dump_seconds != null && <span className="badge-muted">({Number(meta.dump_seconds).toFixed(1)}s)</span>}
          </div>
        </header>

        {view === "overview" && <Overview build={build} meta={meta} go={selectView} viewer={viewer} />}
        {view === "status" && <Status build={build} meta={meta} viewer={viewer} />}
        {view === "api" && <Api build={build} />}
        {view === "downloads" && <Downloads viewer={viewer} />}

        {COLUMNS[view] && (
          <section className="panel table-panel">
            <div className="panel-head">
              <h2>{NAV.find(([id]) => id === view)?.[1]}</h2>
              <span className="muted">{loading ? "loading…" : `${rows.length} rows`}</span>
            </div>
            {q ? (
              <div className="muted">Showing matches for “{query}”.</div>
            ) : null}
            <DataTable cols={cols} rows={q ? rowHits : rows} />
          </section>
        )}
      </main>
    </div>
  );
}

function Overview({ build, meta, go, viewer }) {
  return (
    <>
      <section className="hero">
        <div className="eyebrow">Counter-Strike 2</div>
        <h1>Offsets, patterns and SDK.</h1>
        <p>Latest dump for build {build}. Static API, no auth, no build id required.</p>
        <div className="meta"><span className="pill">build-{build}</span>{meta?.dump_seconds != null && <span className="muted">dumped in {Number(meta.dump_seconds).toFixed(1)}s</span>}</div>
      </section>
      <div className="overview-grid">
        {[
          ["patterns", "577", "signatures"],
          ["offsets", "202", "offsets"],
          ["interfaces", "111", "interfaces"],
          ["classes", "3,300", "classes"],
          ["convars", "4,131", "ConVars"],
          ["weapons", "5", "weapons"],
          ["events", "273", "game events"],
          ["entities", "182", "entities"],
          ["engine", "12", "structs"],
          ["features", "6", "features"],
        ].map(([id, value, label]) => (
          <button key={id} className="stat-card" onClick={() => go(id)}>
            <b>{value}</b><span>{label}</span>
          </button>
        ))}
      </div>
      <section className="panel">
        <div className="panel-head"><h2>Downloads</h2><code>/api/</code></div>
        <div className="file-grid">
          {["offsets.hpp", "offsets.json", "patterns.json", "client_dll.hpp", "types.json"].map((file) => (
            <a key={file} className="file-card" href={viewer(`api/${file}`)} target="_blank" rel="noreferrer"><span className="file-icon"><Icon /></span>{file}</a>
          ))}
        </div>
      </section>
    </>
  );
}

function Status({ build, meta, viewer }) {
  const rows = [
    ["build", build],
    ["dumped", formatDate(meta?.generated_at)],
    ["dump time", meta?.dump_seconds != null ? `${Number(meta.dump_seconds).toFixed(1)}s` : "unknown"],
    ["valid", String(meta?.valid ?? "unknown")],
    ["signatures", meta?.signatures ? `${meta.signatures.found} / ${meta.signatures.total}` : "unknown"],
    ["offsets", meta?.offsets?.count ?? "unknown"],
    ["missing", meta?.signatures?.missing?.length ?? "unknown"],
  ];
  return (
    <section className="panel">
      <div className="panel-head"><h2>Status</h2><span className="muted">build metadata</span></div>
      <div className="kv">{rows.map(([k, v]) => <div key={k}><span>{k}</span><b>{v}</b></div>)}</div>
      <div className="file-grid" style={{ marginTop: 18 }}>
        {["build.json", "hashes.json", "info.json"].map((f) => (
          <a key={f} className="file-card" href={viewer(`api/${f}`)} target="_blank" rel="noreferrer"><span className="file-icon"><Icon /></span>{f}</a>
        ))}
      </div>
    </section>
  );
}

function Api({ build }) {
  return (
    <section className="panel">
      <div className="panel-head"><h2>API</h2><span className="muted">GET · CORS</span></div>
      <p className="muted">Latest build, no build id needed.</p>
      <pre className="code">{`GET https://cs2-dump.vercel.app/api/offsets.hpp
GET https://cs2-dump.vercel.app/api/offsets.json
GET https://cs2-dump.vercel.app/api/patterns.json
GET https://cs2-dump.vercel.app/api/client_dll.hpp
GET https://cs2-dump.vercel.app/api/build.json
GET https://cs2-dump.vercel.app/api/version`}</pre>
      <h3>Pinned build</h3>
      <pre className="code">{`GET https://cs2-dump.vercel.app/build-${build}/offsets.hpp
GET https://cs2-dump.vercel.app/build-${build}/patterns.json`}</pre>
      <h3>Auto-update C++</h3>
      <pre className="code">{`std::string live = HttpGet(L"cs2-dump.vercel.app", L"/api/version");
std::string cached = ReadFile("offsets.version");
if (live != cached) {
    WriteFile("offsets.json", HttpGet(L"cs2-dump.vercel.app", L"/api/offsets.json"));
    WriteFile("offsets.version", live);
}`}</pre>
    </section>
  );
}

function Downloads({ viewer }) {
  return (
    <section className="panel">
      <div className="panel-head"><h2>Downloads</h2><span className="muted">build files</span></div>
      {Object.entries(FILE_LINKS).map(([group, files]) => (
        <div className="group" key={group}>
          <h3>{group}</h3>
          <div className="file-grid">
            {files.map((file) => (
              <a key={file} className="file-card" href={viewer(`api/${file}`)} target="_blank" rel="noreferrer"><span className="file-icon"><Icon /></span>{file}</a>
            ))}
          </div>
        </div>
      ))}
    </section>
  );
}

function DataTable({ cols, rows }) {
  return (
    <div className="table-wrap">
      <table>
        <thead><tr>{cols.map(([key, label]) => <th key={key}>{label}</th>)}</tr></thead>
        <tbody>
          {rows.slice(0, 500).map((row, i) => (
            <tr key={i}>{cols.map(([key]) => <td key={key} className={key === "name" ? "mono" : ""}>{String(row[key] ?? "")}</td>)}</tr>
          ))}
          {!rows.length && <tr><td colSpan={cols.length} className="empty">No data.</td></tr>}
        </tbody>
      </table>
      {rows.length > 500 && <div className="muted">Showing first 500 of {rows.length} rows.</div>}
    </div>
  );
}

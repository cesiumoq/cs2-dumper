import { useEffect, useMemo, useRef, useState } from "react";
import * as THREE from "three";
import { GLTFLoader } from "three/addons/loaders/GLTFLoader.js";
import { OrbitControls } from "three/addons/controls/OrbitControls.js";

const FILE_ICON = "M56 20h96l56 56v140a20 20 0 0 1-20 20H56a20 20 0 0 1-20-20V40a20 20 0 0 1 20-20Zm92 24v40h40";

const NAV = [
  ["overview", "Overview"],
  ["status", "Status"],
  ["patterns", "Patterns", "577"],
  ["offsets", "Offsets"],
  ["interfaces", "Interfaces", "111"],
  ["classes", "Classes", "3,300"],
  ["convars", "ConVars", "4,131"],
  ["weapons", "Weapons", "44"],
  ["models", "3D Models"],
  ["events", "Game Events", "273"],
  ["entities", "Entities", "182"],
  ["engine", "Engine", "12"],
  ["features", "Features", "6"],
  ["favorites", "Favorites"],
  ["vpk", "VPK Assets"],
  ["api", "API"],
  ["downloads", "Downloads"],
];

const WORKSHOP_IDS = [
  "3070244462", "3070247085", "3070389038", "3099883250", "3111582979",
  "3149722721", "3152330869", "3298850698", "3349182536", "3747203695",
];

const SOURCES = {
  patterns: "api/patterns.json",
  offsets: "api/offsets_all.json",
  interfaces: "api/interfaces.json",
  classes: "api/types.json",
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
  const rows = [];
  for (const [module, root] of Object.entries(data || {})) {
    if (!root || typeof root !== "object") continue;
    const classes = Array.isArray(root.classes) ? root.classes : [];
    for (const c of classes) rows.push({ name: c.name, module, parent: c.parent || "", size: c.size ?? "" });
  }
  return rows;
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
  classes: [["name", "Class"], ["module", "Module"], ["parent", "Parent"], ["size", "Size"]],
  convars: [["name", "Name"], ["value", "Value"], ["type", "Type"], ["flags", "Flags"]],
  weapons: [["name", "Weapon"], ["damage", "Damage"], ["hs", "HS x"], ["armor", "Armor"], ["pen", "Pen"], ["range", "Range"], ["cycle", "Cycle"], ["price", "Price"], ["spread", "Spread"], ["bullets", "Bullets"]],
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

function Highlight({ text, query }) {
  const value = String(text ?? "");
  if (!query) return value;
  const i = value.toLowerCase().indexOf(query.toLowerCase());
  if (i < 0) return value;
  return <>{value.slice(0, i)}<mark>{value.slice(i, i + query.length)}</mark>{value.slice(i + query.length)}</>;
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
  const [globalRows, setGlobalRows] = useState([]);
  const [globalLoaded, setGlobalLoaded] = useState(false);
  const [favorites, setFavorites] = useState(() => {
    try { return JSON.parse(localStorage.getItem("cs2-favorites") || "[]"); }
    catch { return []; }
  });

  const toggleFavorite = (view, label) => {
    const key = `${view}:${label}`;
    setFavorites((current) => {
      const next = current.includes(key) ? current.filter((x) => x !== key) : [...current, key];
      localStorage.setItem("cs2-favorites", JSON.stringify(next));
      try {
        const meta = JSON.parse(localStorage.getItem("cs2-fav-meta") || "{}");
        meta[key] = { view, label };
        localStorage.setItem("cs2-fav-meta", JSON.stringify(meta));
      } catch {}
      return next;
    });
  };

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

  useEffect(() => {
    if (!query.trim() || globalLoaded) return;
    setGlobalLoaded(true);
    Promise.all([
      fetch("./api/patterns.json").then((r) => r.json()),
      fetch("./api/offsets_all.json").then((r) => r.json()),
      fetch("./api/types.json").then((r) => r.json()),
      fetch("./api/sdk/convars/convars.json").then((r) => r.json()),
      fetch("./api/sdk/weapons/weapons.json").then((r) => r.json()),
      fetch("./api/sdk/gameevents/gameevents.json").then((r) => r.json()),
      fetch("./api/sdk/engine/engine_structs.json").then((r) => r.json()),
      fetch("./api/sdk/verified_features.json").then((r) => r.json()).catch(() => ({ features: [] })),
    ]).then(([patterns, offsets, types, convars, weapons, events, engine, features]) => {
      const rows = [];
      for (const p of patterns.patterns || []) rows.push({ view: "patterns", label: p.name, meta: `${p.module} / ${p.rva}` });
      for (const [module, entries] of Object.entries(offsets.modules || {})) {
        for (const entry of entries) rows.push({ view: "offsets", label: entry.name, meta: `${module} / ${entry.rva}` });
      }
      for (const [module, data] of Object.entries(types || {})) {
        for (const c of data.classes || []) rows.push({ view: "classes", label: c.name, meta: module });
      }
      for (const c of convars.convars || []) rows.push({ view: "convars", label: c.name, meta: `${c.type || ""} = ${c.value ?? ""}` });
      for (const w of weapons.weapons || []) rows.push({ view: "weapons", label: w.name, meta: `dmg ${w.damage} / $${w.price}` });
      for (const e of events.events || []) rows.push({ view: "events", label: e.name, meta: `event ${e.id}` });
      for (const s of engine.structs || []) rows.push({ view: "engine", label: s.name, meta: `${s.module} / ${(s.fields || []).length} fields` });
      for (const f of features.features || []) rows.push({ view: "features", label: f.name, meta: f.category });
      setGlobalRows(rows);
    }).catch(() => {});
  }, [query, globalLoaded]);

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
    if (!q) return [];
    return globalRows
      .filter((r) => `${r.label} ${r.meta}`.toLowerCase().includes(q))
      .slice(0, 12);
  }, [q, globalRows]);

  const selectView = (next) => {
    setView(next);
    setQuery("");
  };

  return (
    <div className="shell">
      <aside className="sidebar">
        <div className="brand">
          <div className="brand-title">CS2 <span>Dump</span></div>
          <div className="brand-sub">offsets / patterns</div>
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
            <span className="search-icon">Ctrl</span>
            <input value={query} onChange={(e) => setQuery(e.target.value)} placeholder="Search dump..." />
            {q && (
              <div className="search-dropdown">
                {fileHits.map(({ group, file }) => (
                  <button key={`${group}-${file}`} onClick={() => selectView(group)}>
                    <span className="res-name"><Highlight text={file} query={query} /></span>
                    <span className="res-meta">{group}</span>
                  </button>
                ))}
                {rowHits.map((row, i) => (
                  <button key={`row-${i}`} onClick={() => { selectView(row.view); }}>
                    <span className="res-name"><Highlight text={row.label} query={query} /></span>
                    <span className="res-meta">{row.view} / <Highlight text={row.meta} query={query} /></span>
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
          <a className="github-btn" href="https://github.com/cesiumoq/cs2-dumper" target="_blank" rel="noreferrer" title="Source Code" aria-label="Source Code">
            <svg viewBox="0 0 24 24" width="17" height="17" fill="currentColor" aria-hidden="true">
              <path d="M12 .5C5.65.5.5 5.65.5 12c0 5.08 3.29 9.39 7.86 10.91.58.11.79-.25.79-.56v-2.17c-3.2.7-3.88-1.36-3.88-1.36-.52-1.33-1.28-1.68-1.28-1.68-1.05-.72.08-.7.08-.7 1.16.08 1.77 1.19 1.77 1.19 1.03 1.76 2.7 1.25 3.36.96.1-.75.4-1.25.73-1.54-2.55-.29-5.23-1.28-5.23-5.69 0-1.26.45-2.29 1.19-3.1-.12-.29-.52-1.46.11-3.05 0 0 .97-.31 3.18 1.18a11.1 11.1 0 0 1 5.79 0c2.21-1.49 3.18-1.18 3.18-1.18.63 1.59.23 2.76.11 3.05.74.81 1.19 1.84 1.19 3.1 0 4.42-2.69 5.39-5.25 5.68.41.35.78 1.05.78 2.12v3.15c0 .31.21.68.8.56A11.51 11.51 0 0 0 23.5 12C23.5 5.65 18.35.5 12 .5Z"/>
            </svg>
          </a>
        </header>

        {view === "overview" && <Overview build={build} meta={meta} go={selectView} viewer={viewer} />}
        {view === "status" && <Status build={build} meta={meta} viewer={viewer} />}
        {view === "api" && <Api build={build} />}
        {view === "downloads" && <Downloads viewer={viewer} />}
        {view === "features" && (
          <Features data={cache.features} loading={loading} favorites={favorites} toggleFavorite={toggleFavorite} />
        )}
        {view === "engine" && <EngineView data={cache.engine} loading={loading} query={query} favorites={favorites} toggleFavorite={toggleFavorite} />}
        {view === "entities" && <EntitiesView data={cache.entities} loading={loading} query={query} favorites={favorites} toggleFavorite={toggleFavorite} />}
        {view === "vpk" && <VpkView />}
        {view === "models" && <ModelsView />}
        {view === "favorites" && <FavoritesView favorites={favorites} go={selectView} />}

        {COLUMNS[view] && !["features", "engine", "entities", "models", "favorites"].includes(view) && (
          <section className="panel table-panel">
            <div className="panel-head">
              <h2>{NAV.find(([id]) => id === view)?.[1]}</h2>
              <span className="muted">{loading ? "loading..." : `${rows.length} rows`}</span>
            </div>
            {q ? (
              <div className="muted">Showing matches for "{query}".</div>
            ) : null}
            <DataTable cols={cols} rows={q ? rowHits : rows} view={view} favorites={favorites} toggleFavorite={toggleFavorite} />
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
          ["weapons", "44", "weapons"],
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

function CodeBlock({ children, label = "copy" }) {
  return (
    <div className="code-wrap">
      <CopyButton text={children} label={label} />
      <pre className="code">{children}</pre>
    </div>
  );
}

function Api({ build }) {
  const [tab, setTab] = useState("curl");
  const base = "https://cs2-dump.vercel.app";
  const endpoints = [
    ["/api/build.json", "build number, validity, counts, hashes", "build"],
    ["/api/offsets.json", "all netvars and globals by module", "offsets"],
    ["/api/patterns.json", "function signatures with RVA", "patterns"],
    ["/api/offsets.hpp", "C++ constants", "C++"],
    ["/api/client_dll.hpp", "client classes and fields", "SDK"],
    ["/api/vpk/manifest.json", "VPK parse summary", "VPK"],
    ["/api/version", "plain build number", "text"],
  ];
  const samples = {
    curl: `curl -s ${base}/api/build.json
curl -s ${base}/api/offsets.json | jq '.client.dll'
curl -s ${base}/api/patterns.json | jq '.patterns[] | select(.name=="FrameStageNotify")'
curl -s ${base}/api/vpk/manifest.json | jq '{entries:.entry_count, radar:.radar_count}'`,
    powershell: `$base = "${base}"
Invoke-RestMethod "$base/api/build.json" | Select-Object build_number,valid
(Invoke-RestMethod "$base/api/patterns.json").patterns |
    Where-Object name -eq "FrameStageNotify"
Invoke-RestMethod "$base/api/vpk/manifest.json" |
    Select-Object entry_count,radar_count`,
    javascript: `const base = "${base}";
const build = await (await fetch(\`\${base}/api/build.json\`)).json();
const offsets = await (await fetch(\`\${base}/api/offsets.json\`)).json();
const patterns = await (await fetch(\`\${base}/api/patterns.json\`)).json();

console.log(build.build_number, offsets["client.dll"].dwEntityList);`,
    cpp: `std::string live = HttpGet(L"cs2-dump.vercel.app", L"/api/version");
std::string cached = ReadFile("offsets.version");
if (live != cached) {
    WriteFile("offsets.json", HttpGet(L"cs2-dump.vercel.app", L"/api/offsets.json"));
    WriteFile("patterns.json", HttpGet(L"cs2-dump.vercel.app", L"/api/patterns.json"));
    WriteFile("offsets.version", live);
}`,
  };
  return (
    <section className="panel api-page">
      <div className="panel-head"><h2>API</h2><span className="muted">GET / CORS / no auth</span></div>
      <p className="muted">Latest build automatically. No build id in the URL.</p>
      <div className="api-base"><code>{base}</code><CopyButton text={base} label="copy host" /></div>
      <div className="endpoint-list">
        {endpoints.map(([path, label, type]) => (
          <div className="endpoint" key={path}>
            <span className="method">GET</span>
            <code>{path}</code>
            <span className="endpoint-label">{label}</span>
            <span className="chip">{type}</span>
          </div>
        ))}
      </div>
      <h3>Examples</h3>
      <div className="segmented api-tabs">
        {["curl", "powershell", "javascript", "cpp"].map((id) => (
          <button key={id} className={tab === id ? "active" : ""} onClick={() => setTab(id)}>{id}</button>
        ))}
      </div>
      <CodeBlock>{samples[tab]}</CodeBlock>
      <h3>Response</h3>
      <CodeBlock>{`{
  "build_number": ${build},
  "valid": true,
  "signatures": { "found": 577, "total": 578 },
  "offsets": { "count": 202 },
  "modules": 19
}`}</CodeBlock>
      <h3>Pinned build</h3>
      <CodeBlock>{`${base}/build-${build}/offsets.hpp
${base}/build-${build}/patterns.json
${base}/build-${build}/client_dll.hpp`}</CodeBlock>
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

function VpkView() {
  const [manifest, setManifest] = useState(null);
  const [parsed, setParsed] = useState(null);
  const [tab, setTab] = useState("maps");
  const [q, setQ] = useState("");
  useEffect(() => {
    fetch("https://raw.githubusercontent.com/cesiumoq/cs2-dumper/main/assets/manifest.json", { cache: "no-store" })
      .then((r) => r.json())
      .then(setManifest)
      .catch(() => {});
    fetch("./api/vpk/manifest.json", { cache: "no-store" })
      .then((r) => r.json())
      .then(setParsed)
      .catch(() => {});
  }, []);
  const query = q.trim().toLowerCase();
  const maps = Object.entries(manifest?.maps || {}).filter(([name, m]) =>
    !query || `${name} ${m.map_type || ""}`.toLowerCase().includes(query)
  );
  const icons = Object.entries(manifest?.weapons || {}).filter(([, w]) =>
    !query || `${w.name} ${w.display_name}`.toLowerCase().includes(query)
  );
  const characters = Object.entries(manifest?.characters || {}).filter(([name]) =>
    !query || name.toLowerCase().includes(query)
  );
  const workshop = WORKSHOP_IDS.filter((id) => !query || id.includes(query));

  return (
    <section className="panel">
      <div className="panel-head">
        <h2>VPK Assets</h2>
        <span className="muted">{Object.keys(manifest?.maps || {}).length} maps / {Object.keys(manifest?.weapons || {}).length} icons / {Object.keys(manifest?.characters || {}).length} characters</span>
      </div>
      <p className="muted">Radar images, coordinate data, weapon icons and player thumbnails extracted from the game VPK.</p>
      {parsed && (
        <div className="vpk-parsed">
          <div><b>{parsed.entry_count}</b><span>VPK entries parsed</span></div>
          <div><b>{parsed.overview_count}</b><span>overview files extracted</span></div>
          <div><b>{parsed.radar_count}</b><span>radar textures extracted</span></div>
          <div className="vpk-links">
            {(parsed.radars || []).slice(0, 3).map((file) => (
              <a key={file} href={`./api/vpk/radar_raw/${file}`} target="_blank" rel="noreferrer">{file}</a>
            ))}
            {(parsed.overviews || []).slice(0, 3).map((file) => (
              <a key={file} href={`./api/vpk/overviews/${file}`} target="_blank" rel="noreferrer">{file}</a>
            ))}
          </div>
        </div>
      )}
      <div className="feature-toolbar">
        <div className="segmented">
          {["maps", "workshop", "icons", "characters"].map((id) => (
            <button key={id} className={tab === id ? "active" : ""} onClick={() => setTab(id)}>{id}</button>
          ))}
        </div>
        <input value={q} onChange={(e) => setQ(e.target.value)} placeholder="Search maps, icons, characters..." />
      </div>

      {tab === "maps" && (
        <div className="vpk-grid">
          {maps.map(([name, map]) => (
            <article className="vpk-card" key={name}>
              {map.images?.radar && <img src={`https://raw.githubusercontent.com/cesiumoq/cs2-dumper/main/assets/${map.images.radar}`} alt={`${name} radar`} loading="lazy" />}
              <div><b>{name}</b><span>{map.map_type} / scale {map.scale}</span></div>
            </article>
          ))}
        </div>
      )}

      {tab === "workshop" && (
        <div className="vpk-grid">
          {workshop.map((id) => (
            <article className="vpk-card" key={id}>
              <img src={`https://raw.githubusercontent.com/cesiumoq/cs2-dumper/main/assets/workshop/${id}/radar.png`} alt={`workshop ${id} radar`} loading="lazy" />
              <div><b>workshop {id}</b><span>community map</span></div>
            </article>
          ))}
        </div>
      )}

      {tab === "icons" && (
        <div className="icon-grid">
          {icons.map(([id, w]) => (
            <a className="icon-card" key={id} href={`https://raw.githubusercontent.com/cesiumoq/cs2-dumper/main/assets/${w.icon_svg}`} target="_blank" rel="noreferrer" title={w.name}>
              <img src={`https://raw.githubusercontent.com/cesiumoq/cs2-dumper/main/assets/${w.icon_svg}`} alt={w.name} loading="lazy" />
              <span>{w.name.replace("weapon_", "")}</span>
            </a>
          ))}
        </div>
      )}

      {tab === "characters" && (
        <div className="character-grid">
          {characters.map(([name, path]) => (
            <figure key={name}>
              <img src={`https://raw.githubusercontent.com/cesiumoq/cs2-dumper/main/assets/${path}`} alt={name} loading="lazy" />
              <figcaption>{name.replace("customplayer_", "")}</figcaption>
            </figure>
          ))}
        </div>
      )}
    </section>
  );
}

const MODELS = [
  { id: "ak47", name: "AK-47", type: "rifle", file: "weapon_rif_ak47.glb" },
  { id: "m4a4", name: "M4A4", type: "rifle", file: "weapon_rif_m4a4.glb" },
  { id: "awp", name: "AWP", type: "sniper", file: "weapon_snip_awp.glb" },
  { id: "deagle", name: "Desert Eagle", type: "pistol", file: "weapon_pist_deagle.glb" },
  { id: "usp", name: "USP-S", type: "pistol", file: "weapon_pist_usp_silencer.glb" },
  { id: "karambit", name: "Karambit", type: "knife", file: "weapon_knife_karambit.glb" },
  { id: "ctm_fbi", name: "FBI Agent", type: "agent", file: "ctm_fbi.glb" },
  { id: "tm_balkan", name: "Balkan Agent", type: "agent", file: "tm_balkan_variantf.glb" },
];

const MODEL_BASE = "https://raw.githubusercontent.com/cesiumoq/cs2-dumper/main/assets/models";

function ModelsView() {
  const [selected, setSelected] = useState(MODELS[0]);
  const [tint, setTint] = useState("#ffffff");
  const [status, setStatus] = useState("loading");
  const mount = useRef(null);
  const materials = useRef([]);
  const sceneRef = useRef(null);

  useEffect(() => {
    const el = mount.current;
    if (!el) return;
    const width = el.clientWidth || 800;
    const height = el.clientHeight || 520;
    const renderer = new THREE.WebGLRenderer({ antialias: true, alpha: true });
    renderer.setPixelRatio(Math.min(window.devicePixelRatio, 2));
    renderer.setSize(width, height);
    renderer.outputColorSpace = THREE.SRGBColorSpace;
    el.appendChild(renderer.domElement);

    const scene = new THREE.Scene();
    sceneRef.current = scene;
    const camera = new THREE.PerspectiveCamera(40, width / height, 0.01, 100);
    camera.position.set(0, 0.8, 3.4);
    const controls = new OrbitControls(camera, renderer.domElement);
    controls.enableDamping = true;
    controls.dampingFactor = 0.08;
    controls.autoRotate = true;
    controls.autoRotateSpeed = 1.4;
    controls.minDistance = 0.6;
    controls.maxDistance = 12;

    scene.add(new THREE.HemisphereLight(0xffffff, 0x111111, 2.4));
    const key = new THREE.DirectionalLight(0xffffff, 3.2);
    key.position.set(3, 5, 4);
    scene.add(key);
    const rim = new THREE.DirectionalLight(0x4f8cff, 1.4);
    rim.position.set(-4, 1, -3);
    scene.add(rim);

    materials.current = [];
    setStatus("loading");
    const loader = new GLTFLoader();
    loader.load(`${MODEL_BASE}/${selected.id}/${selected.file}`, (gltf) => {
      const model = gltf.scene;
      model.traverse((node) => {
        if (node.isMesh) {
          const list = Array.isArray(node.material) ? node.material : [node.material];
          for (const mat of list) {
            if (mat) materials.current.push(mat);
          }
        }
      });
      const box = new THREE.Box3().setFromObject(model);
      const size = box.getSize(new THREE.Vector3());
      const center = box.getCenter(new THREE.Vector3());
      model.position.sub(center);
      const max = Math.max(size.x, size.y, size.z) || 1;
      const scale = 2.2 / max;
      model.scale.setScalar(scale);
      model.position.y += (size.y * scale) / 2 - 0.7;
      scene.add(model);
      camera.position.set(1.8, 1.1, 2.6);
      camera.lookAt(0, 0, 0);
      controls.target.set(0, 0, 0);
      setStatus("ready");
    }, undefined, () => setStatus("error"));

    let raf = 0;
    const animate = () => {
      raf = requestAnimationFrame(animate);
      controls.update();
      renderer.render(scene, camera);
    };
    animate();

    const resize = () => {
      const w = el.clientWidth || width;
      const h = el.clientHeight || height;
      camera.aspect = w / h;
      camera.updateProjectionMatrix();
      renderer.setSize(w, h);
    };
    window.addEventListener("resize", resize);
    return () => {
      cancelAnimationFrame(raf);
      window.removeEventListener("resize", resize);
      controls.dispose();
      renderer.dispose();
      el.removeChild(renderer.domElement);
    };
  }, [selected]);

  useEffect(() => {
    for (const mat of materials.current) {
      if (mat.color) mat.color.set(tint);
    }
  }, [tint, status]);

  return (
    <section className="panel models-page">
      <div className="panel-head">
        <h2>3D Models</h2>
        <span className="muted">{MODELS.length} exported ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â· glTF 2.0</span>
      </div>
      <p className="muted">Weapon and agent meshes exported from the game VPK, with materials and textures.</p>
      <div className="models-layout">
        <div className="model-list">
          {MODELS.map((model) => (
            <button key={model.id} className={`model-item ${selected.id === model.id ? "active" : ""}`} onClick={() => setSelected(model)}>
              <span>{model.name}</span>
              <em>{model.type}</em>
            </button>
          ))}
        </div>
        <div className="model-stage">
          <div className="model-canvas" ref={mount}>
            {status === "loading" && <span className="model-status">loading model...</span>}
            {status === "error" && <span className="model-status">could not load model</span>}
          </div>
          <div className="model-controls">
            <span className="chip">{selected.type}</span>
            <div className="skin-picker">
              {["#ffffff", "#ef4444", "#3b82f6", "#eab308", "#22c55e", "#a855f7"].map((color) => (
                <button key={color} className={tint === color ? "active" : ""} style={{ background: color }} onClick={() => setTint(color)} title={color} />
              ))}
            </div>
            <span className="muted">drag to orbit ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â· scroll to zoom</span>
          </div>
        </div>
      </div>
    </section>
  );
}

function EngineView({ data, loading, query, favorites, toggleFavorite }) {
  const q = query.trim().toLowerCase();
  const [open, setOpen] = useState({});
  const structs = (data?.structs || []).filter((s) =>
    !q || `${s.name} ${s.module} ${s.desc} ${(s.fields || []).map((f) => `${f.name} ${f.type} ${f.note}`).join(" ")}`.toLowerCase().includes(q)
  );
  const fields = structs.reduce((n, s) => n + (s.fields || []).length, 0);

  return (
    <section className="panel">
      <div className="panel-head">
        <h2>Engine</h2>
        <span className="muted">{structs.length} structs / {fields} fields</span>
      </div>
      <p className="muted">Non-schema structs reverse-engineered from the binary.</p>
      <div className="feature-toolbar">
        <button className="copy-btn" onClick={() => setOpen(Object.fromEntries(structs.map((s) => [s.name, true])))}>Expand</button>
        <button className="copy-btn" onClick={() => setOpen({})}>Collapse</button>
      </div>
      <div className="engine-list">
        {structs.map((s) => {
          const expanded = open[s.name] !== false;
          return (
            <article className="engine-card" key={s.name}>
              <div className="feature-head">
                <div>
                  <h3>{s.name}</h3>
                  <div className="feature-tags">
                    <span className="chip">{s.module}</span>
                    {s.size && <span className="chip">size {s.size}</span>}
                    <span className="chip">{(s.fields || []).length} fields</span>
                  </div>
                </div>
                <div className="feature-actions">
                  <CopyButton text={JSON.stringify(s, null, 2)} label="C++" />
                  <button className="copy-btn" onClick={() => setOpen({ ...open, [s.name]: !expanded })}>{expanded ? ".h" : "show"}</button>
                </div>
              </div>
              <p className="feature-summary">{s.desc}</p>
              {s.instance && <div className="instance-box"><b>instance</b><code>{s.instance}</code></div>}
              {expanded && (
                <>
                  <FeatureTable title="Functions" cols={[["name", "Function"], ["rva", "RVA"]]} rows={s.functions || []} view="engine" favorites={favorites} toggleFavorite={toggleFavorite} />
                  <FeatureTable title="Fields" cols={[["offset", "Offset"], ["name", "Field"], ["type", "Type"], ["note", "Notes"]]} rows={s.fields || []} view="engine" favorites={favorites} toggleFavorite={toggleFavorite} />
                </>
              )}
            </article>
          );
        })}
        {!loading && !structs.length && <div className="muted">No structs.</div>}
      </div>
    </section>
  );
}

function EntitiesView({ data, loading, query, favorites, toggleFavorite }) {
  const q = query.trim().toLowerCase();
  const entities = (data?.entities || []).filter((e) =>
    !q || `${e.index} ${e.classname} ${e.team} ${e.health}`.toLowerCase().includes(q)
  );
  const byClass = data?.by_class || [];
  const team = (t) => (t === 2 ? "T" : t === 3 ? "CT" : "unassigned");
  return (
    <section className="panel">
      <div className="panel-head">
        <h2>Entities</h2>
        <span className="muted">{entities.length} of {data?.entity_count ?? entities.length} / {data?.class_count ?? byClass.length} classes</span>
      </div>
      <div className="class-chips">
        {byClass.map((c) => <span key={c.classname} className="chip">{c.classname}<b>{c.count}</b></span>)}
      </div>
      <div className="table-wrap">
        <table>
          <thead><tr><th>Index</th><th>Class</th><th>Health</th><th>Team</th><th>Origin</th><th /></tr></thead>
          <tbody>
            {entities.slice(0, 500).map((e) => (
              <tr key={e.index}>
                <td className="mono">{e.index}</td>
                <td className="mono">{e.classname}</td>
                <td>{e.health}{e.max_health ? `/${e.max_health}` : ""}</td>
                <td>{team(e.team)}</td>
                <td className="mono">{(e.origin || []).map((n) => Number(n.toFixed?.(1) ?? n)).join(", ")}</td>
                <td className="row-actions"><Star active={favorites?.includes(`entities:${e.classname}`)} onClick={() => toggleFavorite?.("entities", e.classname)} /><RowCopy row={e} /></td>
              </tr>
            ))}
          </tbody>
        </table>
      </div>
      {entities.length > 500 && <div className="muted">Showing first 500 of {entities.length}.</div>}
    </section>
  );
}

function CopyButton({ text, label = "Copy as C++" }) {
  const [copied, setCopied] = useState(false);
  return (
    <button
      className="copy-btn"
      onClick={async () => {
        try { await navigator.clipboard.writeText(text); setCopied(true); setTimeout(() => setCopied(false), 1200); }
        catch { setCopied(false); }
      }}
    >
      {copied ? "copied" : label}
    </button>
  );
}

function RowCopy({ row }) {
  const [copied, setCopied] = useState(false);
  return (
    <button
      className="row-copy"
      title="Copy row"
      onClick={async () => {
        try { await navigator.clipboard.writeText(JSON.stringify(row, null, 2)); setCopied(true); setTimeout(() => setCopied(false), 900); }
        catch { setCopied(false); }
      }}
    >
      {copied ? "ok" : "copy"}
    </button>
  );
}

function FeatureTable({ title, cols, rows, view, favorites, toggleFavorite }) {
  if (!rows?.length) return null;
  return (
    <div className="feature-block">
      <h4>{title}</h4>
      <div className="mini-table">
        <table>
          <thead><tr>{cols.map(([, label]) => <th key={label}>{label}</th>)}<th /></tr></thead>
          <tbody>
            {rows.map((row, i) => {
              const label = row.name || row.field || row.offset;
              return (
                <tr key={i}>{cols.map(([key]) => <td key={key} className={key === "name" || key === "offset" || key === "rva" ? "mono" : ""}>{String(row[key] ?? "")}</td>)}<td className="row-actions">{view && <Star active={favorites?.includes(`${view}:${label}`)} onClick={() => toggleFavorite?.(view, label)} />}<RowCopy row={row} /></td></tr>
              );
            })}
          </tbody>
        </table>
      </div>
    </div>
  );
}

function Features({ data, loading, favorites, toggleFavorite }) {
  const [mode, setMode] = useState("internal");
  const [category, setCategory] = useState("all");
  const [onlyFavorites, setOnlyFavorites] = useState(false);
  const [filter, setFilter] = useState("");

  const features = data?.features || [];
  const categories = ["all", ...Array.from(new Set(features.map((f) => f.category).filter(Boolean)))];
  const q = filter.trim().toLowerCase();
  const list = features.filter((f) => {
    const key = `features:${f.name}`;
    if (onlyFavorites && !favorites.includes(key)) return false;
    if (category !== "all" && f.category !== category) return false;
    if (q && !`${f.name} ${f.category} ${f.summary}`.toLowerCase().includes(q)) return false;
    return true;
  });

  return (
    <section className="panel features-panel">
      <div className="panel-head">
        <h2>Features</h2>
        <span className="muted">{features.length} checked recipes</span>
      </div>
      <p className="muted">
        Internal = hooks and game functions. External = a separate process reading memory.
        Every offset and function is resolved from this dump.
      </p>
      <div className="feature-toolbar">
        <div className="segmented">
          <button className={mode === "internal" ? "active" : ""} onClick={() => setMode("internal")}>internal</button>
          <button className={mode === "external" ? "active" : ""} onClick={() => setMode("external")}>external</button>
        </div>
        <select value={category} onChange={(e) => setCategory(e.target.value)}>
          {categories.map((c) => <option key={c} value={c}>{c === "all" ? "All categories" : c}</option>)}
        </select>
        <button className={`fav-filter ${onlyFavorites ? "active" : ""}`} onClick={() => setOnlyFavorites(!onlyFavorites)}>       Favorites</button>
        <input value={filter} onChange={(e) => setFilter(e.target.value)} placeholder="Search features..." />
      </div>
      {loading && <div className="muted">loading...</div>}
      <div className="feature-list">
        {list.map((feature) => {
          const key = `features:${feature.name}`;
          const active = feature[mode] || feature;
          const steps = active.steps || feature.steps || [];
          const fields = active.fields || feature.fields || [];
          const functions = active.functions || feature.functions || [];
          const globals = active.globals || feature.globals || [];
          const convars = active.convars || feature.convars || [];
          const copyText = [
            `// ${feature.name} (${feature.category})`,
            feature.summary,
            ...steps.map((s, i) => `// ${i + 1}. ${s}`),
          ].join("\n");
          return (
            <article className="feature-card" key={feature.name}>
              <div className="feature-head">
                <div>
                  <h3>{feature.name}</h3>
                  <div className="feature-tags">
                    <span className="chip">{feature.category}</span>
                    {feature.status && <span className="chip">{feature.status}</span>}
                    {feature.internal && feature.external && <span className="chip">internal + external</span>}
                  </div>
                </div>
                <div className="feature-actions">
                  <button className={`icon-btn ${favorites.includes(key) ? "active" : ""}`} onClick={() => toggleFavorite("features", feature.name)} title="Favorite">      </button>
                  <CopyButton text={copyText} />
                </div>
              </div>
              <p className="feature-summary">{feature.summary}</p>
              {steps.length > 0 && (
                <ol className="feature-steps">
                  {steps.map((step, i) => <li key={i}>{step}</li>)}
                </ol>
              )}
              {convars.length > 0 && (
                <div className="feature-convars">
                  <h4>ConVars</h4>
                  {convars.map((c) => <div key={c.name}><code>{c.name}</code><span>{c.use}</span></div>)}
                </div>
              )}
              <FeatureTable title="Offsets" cols={[["class", "Class"], ["field", "Field"], ["offset", "Offset"], ["type", "Type"], ["note", "Note"]]} rows={fields} view="features" favorites={favorites} toggleFavorite={toggleFavorite} />
              <FeatureTable title="Functions" cols={[["name", "Function"], ["module", "Module"], ["rva", "RVA"], ["purpose", "Purpose"]]} rows={functions} view="features" favorites={favorites} toggleFavorite={toggleFavorite} />
              <FeatureTable title="Globals" cols={[["name", "Name"], ["value", "Value"], ["module", "Module"], ["note", "Note"]]} rows={globals} view="features" favorites={favorites} toggleFavorite={toggleFavorite} />
              {feature.notes?.length > 0 && (
                <div className="feature-notes">
                  <h4>Notes</h4>
                  {feature.notes.map((note, i) => <p key={i}>{note}</p>)}
                </div>
              )}
            </article>
          );
        })}
        {!loading && !list.length && <div className="muted">No features.</div>}
      </div>
    </section>
  );
}

function Star({ active, onClick }) {
  return (
    <button className={`star-btn ${active ? "active" : ""}`} onClick={onClick} title="Favorite">
      *
    </button>
  );
}

function FavoritesView({ favorites, go }) {
  const [meta, setMeta] = useState(() => {
    try { return JSON.parse(localStorage.getItem("cs2-fav-meta") || "{}"); }
    catch { return {}; }
  });
  useEffect(() => {
    try { setMeta(JSON.parse(localStorage.getItem("cs2-fav-meta") || "{}")); } catch {}
  }, [favorites]);
  const rows = favorites.map((key) => meta[key] || { view: key.split(":")[0], label: key.split(":").slice(1).join(":") });
  return (
    <section className="panel">
      <div className="panel-head"><h2>Favorites</h2><span className="muted">{rows.length} saved on this browser</span></div>
      <p className="muted">Saved names stay here across builds. Click one to open its category and search it in the new dump.</p>
      <div className="favorite-list">
        {rows.map((row, i) => (
          <button key={i} className="favorite-row" onClick={() => go(row.view)}>
            <span className="chip">{row.view}</span>
            <b>{row.label}</b>
            <span className="muted">open {row.view}</span>
          </button>
        ))}
        {!rows.length && <div className="empty">No favorites yet. Click + in any table.</div>}
      </div>
    </section>
  );
}

function DataTable({ cols, rows, view, favorites, toggleFavorite }) {
  return (
    <div className="table-wrap">
      <table>
        <thead><tr>{cols.map(([key, label]) => <th key={key}>{label}</th>)}<th /></tr></thead>
        <tbody>
          {rows.slice(0, 500).map((row, i) => {
            const label = row.name || row.classname || row.index;
            const key = `${view}:${label}`;
            return (
              <tr key={i}>
                {cols.map(([key]) => <td key={key} className={key === "name" ? "mono" : ""}>{String(row[key] ?? "")}</td>)}
                <td className="row-actions">
                  <Star active={favorites?.includes(key)} onClick={() => toggleFavorite?.(view, label)} />
                  <RowCopy row={row} />
                </td>
              </tr>
            );
          })}
          {!rows.length && <tr><td colSpan={cols.length + 1} className="empty">No data.</td></tr>}
        </tbody>
      </table>
      {rows.length > 500 && <div className="muted">Showing first 500 of {rows.length} rows.</div>}
    </div>
  );
}



import { useEffect, useMemo, useState } from "react";

const FILE_ICON = "M56 20h96l56 56v140a20 20 0 0 1-20 20H56a20 20 0 0 1-20-20V40a20 20 0 0 1 20-20Zm92 24v40h40";

const GROUPS = [
  ["Build", [
    ["Build.json", "api/build.json", "build, validation and dump time"],
    ["Hashes.json", "api/hashes.json", "client, engine2, server and 16 more DLL hashes"],
    ["Info.json", "api/info.json", "build number and generation timestamp"],
  ]],
  ["Offsets", [
    ["Offsets.hpp", "api/offsets.hpp", "202 offsets · 5 modules"],
    ["Offsets.cs", "api/offsets.cs", "202 offsets · C#"],
    ["Offsets.json", "api/offsets.json", "202 offsets · JSON"],
    ["OffsetsHex.json", "api/OffsetsHex.json", "202 offsets · hex values"],
    ["Offsets.txt", "api/offsets.txt", "202 offsets · plain text"],
    ["OffsetsAll.json", "api/offsets_all.json", "202 globals, signatures and interfaces"],
  ]],
  ["Patterns", [
    ["Patterns.json", "api/patterns.json", "578 signatures · 577 resolved"],
    ["Patterns.hpp", "api/patterns.hpp", "IDA-style byte patterns"],
    ["RecoveredPatterns.json", "api/recovered_patterns.json", "16 recovered signatures"],
    ["ScannerPatterns.txt", "api/scanner_patterns.txt", "in-process scanner patterns"],
  ]],
  ["Classes", [
    ["Client.hpp", "api/client_dll.hpp", "client SDK header"],
    ["Client.cs", "api/client_dll.cs", "client SDK · C#"],
    ["Client.json", "api/client_dll.json", "client SDK · JSON"],
    ["Server.hpp", "api/server_dll.hpp", "server SDK header"],
    ["Types.json", "api/types.json", "3,300 classes · schema types"],
  ]],
  ["Interfaces", [
    ["Interfaces.hpp", "api/interfaces.hpp", "111 interfaces"],
    ["Interfaces.cs", "api/interfaces.cs", "111 interfaces · C#"],
    ["Interfaces.json", "api/interfaces.json", "111 interfaces · JSON"],
    ["VTables.json", "api/sdk/interfaces/vtables.json", "31 modules · vtable layouts"],
  ]],
  ["ConVars", [
    ["ConVars.json", "api/sdk/convars/convars.json", "4,131 ConVars · 1,186 commands"],
    ["ConVars.hpp", "api/sdk/convars/convars.hpp", "ConVar catalogue header"],
  ]],
  ["Game Events", [
    ["GameEvents.json", "api/sdk/gameevents/gameevents.json", "273 events"],
  ]],
  ["Entities", [
    ["Entities.json", "api/sdk/entities/entities.json", "182 live entities"],
  ]],
  ["Engine", [
    ["EngineStructs.json", "api/sdk/engine/engine_structs.json", "12 engine structs"],
  ]],
  ["Features", [
    ["Features.json", "api/sdk/verified_features.json", "6 feature recipes"],
  ]],
  ["SDK", [
    ["Struct.hpp", "api/struct.hpp", "single-include structs"],
    ["CS2.hpp", "api/sdk/cs2.hpp", "SDK amalgamation"],
  ]],
];

const API_ROWS = [
  ["GET /api/offsets.hpp", "latest C++ offsets"],
  ["GET /api/offsets.json", "latest JSON offsets"],
  ["GET /api/patterns.json", "latest patterns"],
  ["GET /api/client_dll.hpp", "latest client SDK"],
  ["GET /api/build.json", "current build metadata"],
  ["GET /api/version", "current build number"],
];

function Icon() {
  return (
    <svg viewBox="0 0 256 256" width="17" height="17" fill="none" stroke="currentColor" strokeWidth="14" strokeLinecap="round" strokeLinejoin="round">
      <path d={FILE_ICON} />
    </svg>
  );
}

function FileCard({ label, file, desc, viewer }) {
  return (
    <a className="file-card" href={viewer(file)} target="_blank" rel="noreferrer">
      <span className="file-icon"><Icon /></span>
      <span className="file-body">
        <span>{label}</span>
        {desc && <small>{desc}</small>}
      </span>
    </a>
  );
}

function formatDate(value) {
  if (!value) return "unknown";
  const d = new Date(value);
  if (Number.isNaN(d.getTime())) return value;
  return d.toLocaleString("en-GB", {
    day: "2-digit", month: "short", year: "numeric",
    hour: "2-digit", minute: "2-digit",
  });
}

export default function App() {
  const [build, setBuild] = useState("14194");
  const [seconds, setSeconds] = useState(null);
  const [generated, setGenerated] = useState("");
  const [builds, setBuilds] = useState([]);
  const [query, setQuery] = useState("");
  const [patterns, setPatterns] = useState([]);
  const [patternsLoaded, setPatternsLoaded] = useState(false);

  useEffect(() => {
    fetch("./data/latest/build.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => {
        setBuild(String(data.build_number ?? "14194"));
        setSeconds(data.dump_seconds ?? null);
        setGenerated(data.generated_at ?? "");
      })
      .catch(() => {});
    fetch("./data/index.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => setBuilds(Array.isArray(data.builds) ? data.builds : []))
      .catch(() => {});
  }, []);

  useEffect(() => {
    if (!query.trim() || patternsLoaded) return;
    setPatternsLoaded(true);
    fetch("./api/patterns.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => setPatterns(Array.isArray(data.patterns) ? data.patterns : []))
      .catch(() => {});
  }, [query, patternsLoaded]);

  const viewer = (file) =>
    `./view.html?file=${file.split("/").map(encodeURIComponent).join("/")}`;
  const pinned = `build-${build}`;
  const q = query.trim().toLowerCase();

  const groups = useMemo(
    () => GROUPS.map(([title, files]) => [
      title,
      files.filter(([label, file, desc]) => !q || `${label} ${file} ${desc}`.toLowerCase().includes(q)),
    ]).filter(([, files]) => files.length),
    [q],
  );

  const patternHits = useMemo(
    () => q
      ? patterns.filter((p) => `${p.name} ${p.module} ${p.rva}`.toLowerCase().includes(q)).slice(0, 40)
      : [],
    [q, patterns],
  );

  return (
    <div className="shell">
      <aside className="sidebar">
        <a className="logo" href="#home">CS2 Dumper</a>
        <nav>
          <a href="#home">Home</a>
          <a href="#latest">Latest</a>
          <a href="#docs">Documentation</a>
          <a href="#archive">Archive</a>
          <a href="https://github.com/cesiumoq/cs2-dumper" target="_blank" rel="noreferrer">Source Code</a>
        </nav>
        <div className="sidebar-foot">build-{build}</div>
      </aside>

      <main className="content">
        <div className="topbar">
          <div className="search-wrap">
            <span className="search-icon">⌕</span>
            <input
              value={query}
              onChange={(e) => setQuery(e.target.value)}
              placeholder="Search dump… patterns, offsets, classes"
              aria-label="Search dump"
            />
          </div>
          <div className="build-badge" title={`Dump generated ${formatDate(generated)}`}>
            <span className="dot" />
            <span className="badge-label">build</span>
            <span className="badge-value">{build}</span>
            <span className="badge-sep" />
            <span className="badge-label">dumped</span>
            <span className="badge-value">{formatDate(generated)}</span>
            {seconds != null && <span className="badge-muted">({Number(seconds).toFixed(1)}s)</span>}
          </div>
        </div>

        <section id="home" className="hero">
          <div className="eyebrow">Counter-Strike 2</div>
          <h1>Offset dumps, without the noise.</h1>
          <p>
            Latest CS2 offsets, patterns, interfaces, schemas and SDK files.
            One static API, no auth, no build id required.
          </p>
        </section>

        {q && (
          <section className="panel search-results">
            <div className="panel-head">
              <h2>Search results</h2>
              <span className="muted">{groups.reduce((n, [, files]) => n + files.length, 0)} files</span>
            </div>
            {patternHits.length > 0 && (
              <>
                <h3>Patterns</h3>
                <div className="search-list">
                  {patternHits.map((p) => (
                    <div key={`${p.module}-${p.name}`}>
                      <code>{p.name}</code>
                      <span>{p.module}</span>
                      <span className="muted">{p.rva}</span>
                    </div>
                  ))}
                </div>
              </>
            )}
            {patternHits.length === 0 && <p className="muted">No pattern matches yet.</p>}
          </section>
        )}

        <section id="latest" className="panel">
          <div className="panel-head">
            <h2>Latest</h2>
            <code>/api/</code>
          </div>
          {groups.map(([title, files]) => (
            <div className="group" key={title}>
              <h3>{title}</h3>
              <div className="file-grid">
                {files.map(([label, file, desc]) => (
                  <FileCard key={file} label={label} file={file} desc={desc} viewer={viewer} />
                ))}
              </div>
            </div>
          ))}
        </section>

        <section id="docs" className="panel">
          <div className="panel-head">
            <h2>Documentation</h2>
            <span className="muted">GET · CORS enabled</span>
          </div>

          <h3>API</h3>
          <p className="muted">
            Fetch the latest files directly. The server always returns the current build;
            no build id is needed in the URL.
          </p>
          <div className="endpoint-list">
            {API_ROWS.map(([endpoint, desc]) => (
              <div className="endpoint" key={endpoint}>
                <code>{endpoint}</code>
                <span>{desc}</span>
              </div>
            ))}
          </div>
          <pre className="code">{`GET https://cs2-dump.vercel.app/api/offsets.json

{
  "client.dll": {
    "dwEntityList": "0x...",
    "dwLocalPlayerPawn": "0x..."
  }
}`}</pre>

          <h3>Pinned build</h3>
          <p className="muted">To pin a specific update, use its build directory:</p>
          <pre className="code">{`GET https://cs2-dump.vercel.app/${pinned}/offsets.hpp
GET https://cs2-dump.vercel.app/${pinned}/patterns.json`}</pre>

          <h3>Auto-updating in C++</h3>
          <p className="muted">
            Check <code>/api/version</code> at startup, then only re-download
            <code> /api/offsets.json</code> when the build changes.
          </p>
          <pre className="code">{`std::string live = HttpGet(L"cs2-dump.vercel.app", L"/api/version");
std::string cached = ReadFile("offsets.version");

if (live != cached) {
    std::string json = HttpGet(L"cs2-dump.vercel.app", L"/api/offsets.json");
    WriteFile("offsets.json", json);
    WriteFile("offsets.version", live);
}`}</pre>

          <h3>Find a pattern in IDA</h3>
          <ol className="steps">
            <li>Open the module, e.g. <code>client.dll</code>, in IDA and wait for auto-analysis.</li>
            <li>Press <kbd>Alt</kbd>+<kbd>B</kbd> and paste a pattern from <code>/api/patterns.json</code>.</li>
            <li>Go to the match and confirm the RVA from the JSON.</li>
            <li>Use <kbd>X</kbd> to inspect cross-references, then rename the function.</li>
          </ol>
        </section>

        <section id="archive" className="panel">
          <div className="panel-head">
            <h2>Archive</h2>
            <span className="muted">last {builds.length} builds</span>
          </div>
          <div className="archive">
            {builds.map((item) => (
              <a key={item.build} href={viewer(`build-${item.build}/offsets.hpp`)} target="_blank" rel="noreferrer">
                <span className="pill">build-{item.build}</span>
                <span>{item.valid ? "valid" : "preview"}</span>
                <span className="muted">{item.reason}</span>
              </a>
            ))}
          </div>
        </section>

        <section id="source" className="panel slim">
          <h2>Source Code</h2>
          <a href="https://github.com/cesiumoq/cs2-dumper" target="_blank" rel="noreferrer">
            github.com/cesiumoq/cs2-dumper
          </a>
        </section>
      </main>
    </div>
  );
}

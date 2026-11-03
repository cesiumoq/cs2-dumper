import { useEffect, useState } from "react";

const FILE_ICON = "M56 20h96l56 56v140a20 20 0 0 1-20 20H56a20 20 0 0 1-20-20V40a20 20 0 0 1 20-20Zm92 24v40h40";

const LATEST = [
  ["Offsets.hpp", "api/offsets.hpp"],
  ["Offsets.cs", "api/offsets.cs"],
  ["Offsets.json", "api/offsets.json"],
  ["Patterns.json", "api/patterns.json"],
  ["Client.hpp", "api/client_dll.hpp"],
  ["Build.json", "api/build.json"],
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

function FileCard({ label, file, viewer }) {
  return (
    <a className="file-card" href={viewer(file)} target="_blank" rel="noreferrer">
      <span className="file-icon"><Icon /></span>
      <span>{label}</span>
    </a>
  );
}

export default function App() {
  const [build, setBuild] = useState("14194");
  const [seconds, setSeconds] = useState(null);
  const [builds, setBuilds] = useState([]);

  useEffect(() => {
    fetch("./data/latest/build.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => {
        setBuild(String(data.build_number ?? "14194"));
        setSeconds(data.dump_seconds ?? null);
      })
      .catch(() => {});
    fetch("./data/index.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => setBuilds(Array.isArray(data.builds) ? data.builds : []))
      .catch(() => {});
  }, []);

  const viewer = (file) =>
    `./view.html?file=${file.split("/").map(encodeURIComponent).join("/")}`;
  const pinned = `build-${build}`;

  return (
    <div className="shell">
      <aside className="sidebar">
        <a className="logo" href="#home">CS2 Dumper</a>
        <nav>
          <a href="#home">Home</a>
          <a href="#docs">Documentation</a>
          <a href="#archive">Archive</a>
          <a href="#discord">Discord</a>
          <a href="#source">Source Code</a>
        </nav>
        <div className="sidebar-foot">build-{build}</div>
      </aside>

      <main className="content">
        <section id="home" className="hero">
          <div className="eyebrow">Counter-Strike 2</div>
          <h1>Offset dumps, without the noise.</h1>
          <p>
            Latest CS2 offsets, patterns, interfaces, schemas and SDK files.
            One static API, no auth, no build id required.
          </p>
          <div className="meta">
            <span className="pill">build-{build}</span>
            {seconds != null && <span className="muted">dumped in {Number(seconds).toFixed(1)}s</span>}
            <a href="#docs">API documentation</a>
          </div>
        </section>

        <section className="panel">
          <div className="panel-head">
            <h2>Latest</h2>
            <code>/api/</code>
          </div>
          <div className="file-grid">
            {LATEST.map(([label, file]) => (
              <FileCard key={file} label={label} file={file} viewer={viewer} />
            ))}
          </div>
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
          <p className="muted">
            To pin a specific update, use its build directory:
          </p>
          <pre className="code">{`GET https://cs2-dump.vercel.app/${pinned}/offsets.hpp
GET https://cs2-dump.vercel.app/${pinned}/patterns.json`}</pre>

          <h3>Auto-updating in C++</h3>
          <p className="muted">
            Check <code>/api/version</code> at startup, then only re-download
            <code> /api/offsets.json</code> when the build changes.
          </p>
          <pre className="code">{`static std::string HttpGet(const wchar_t* host, const wchar_t* path) {
    // WinHTTP GET, returns the response body
}

std::string live = HttpGet(L"cs2-dump.vercel.app", L"/api/version");
std::string cached = ReadFile("offsets.version");

if (live != cached) {
    std::string json = HttpGet(L"cs2-dump.vercel.app", L"/api/offsets.json");
    WriteFile("offsets.json", json);
    WriteFile("offsets.version", live);
}`}</pre>
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

        <section id="discord" className="panel slim">
          <h2>Discord</h2>
          <p className="muted">discord.gg/thenwefuckin</p>
        </section>

        <section id="source" className="panel slim">
          <h2>Source Code</h2>
          <p className="muted">github.com/cesiumoq/cs2-dumper</p>
        </section>
      </main>
    </div>
  );
}

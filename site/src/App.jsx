import { useEffect, useState } from "react";

const FILE_ICON = "M56 20h96l56 56v140a20 20 0 0 1-20 20H56a20 20 0 0 1-20-20V40a20 20 0 0 1 20-20Zm92 24v40h40";

function FileLink({ href, children }) {
  return (
    <a className="link-button" href={href} target="_blank" rel="noreferrer">
      <span className="link-icon" aria-hidden="true">
        <svg viewBox="0 0 256 256" width="18" height="18" fill="none" stroke="currentColor" strokeWidth="14" strokeLinecap="round" strokeLinejoin="round">
          <path d={FILE_ICON} />
        </svg>
      </span>
      <span className="link-text">{children}</span>
    </a>
  );
}

function Section({ title, children }) {
  return (
    <section className="section">
      <h2>{title}</h2>
      <div className="links">{children}</div>
    </section>
  );
}

export default function App() {
  const [build, setBuild] = useState("14194");
  const [dumpSeconds, setDumpSeconds] = useState(null);

  useEffect(() => {
    fetch("./data/latest/build.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => {
        setBuild(String(data.build_number ?? "14194"));
        setDumpSeconds(data.dump_seconds ?? null);
      })
      .catch(() => {});
  }, []);

  const base = `build-${build}`;
  const viewer = (file) =>
    `./view.html?build=${encodeURIComponent(build)}&file=${file.split("/").map(encodeURIComponent).join("/")}`;

  return (
    <main className="page">
      <header className="header">
        <div>
          <h1>CS2 Dumper</h1>
          <div className="version">build-{build}</div>
        </div>
        {dumpSeconds != null && (
          <div className="dumped">dumped in {Number(dumpSeconds).toFixed(1)}s</div>
        )}
      </header>

      <div className="sections">
        <Section title="Build">
          <FileLink href={viewer("build.json")}>Build.json</FileLink>
          <FileLink href={viewer("hashes.json")}>Hashes.json</FileLink>
          <FileLink href={viewer("info.json")}>Info.json</FileLink>
        </Section>

        <Section title="Offsets">
          <FileLink href={viewer("offsets.hpp")}>Offsets.hpp</FileLink>
          <FileLink href={viewer("offsets.cs")}>Offsets.cs</FileLink>
          <FileLink href={viewer("offsets.json")}>Offsets.json</FileLink>
          <FileLink href={viewer("OffsetsHex.json")}>OffsetsHex.json</FileLink>
          <FileLink href={viewer("offsets.txt")}>Offsets.txt</FileLink>
          <FileLink href={viewer("offsets_all.json")}>OffsetsAll.json</FileLink>
        </Section>

        <Section title="Patterns">
          <FileLink href={viewer("patterns.json")}>Patterns.json</FileLink>
          <FileLink href={viewer("patterns.hpp")}>Patterns.hpp</FileLink>
          <FileLink href={viewer("recovered_patterns.json")}>RecoveredPatterns.json</FileLink>
          <FileLink href={viewer("scanner_patterns.txt")}>ScannerPatterns.txt</FileLink>
        </Section>

        <Section title="Classes">
          <FileLink href={viewer("client_dll.hpp")}>Client.hpp</FileLink>
          <FileLink href={viewer("client_dll.cs")}>Client.cs</FileLink>
          <FileLink href={viewer("client_dll.json")}>Client.json</FileLink>
          <FileLink href={viewer("server_dll.hpp")}>Server.hpp</FileLink>
          <FileLink href={viewer("types.json")}>Types.json</FileLink>
        </Section>

        <Section title="Interfaces">
          <FileLink href={viewer("interfaces.hpp")}>Interfaces.hpp</FileLink>
          <FileLink href={viewer("interfaces.cs")}>Interfaces.cs</FileLink>
          <FileLink href={viewer("interfaces.json")}>Interfaces.json</FileLink>
          <FileLink href={viewer("sdk/interfaces/vtables.json")}>VTables.json</FileLink>
        </Section>

        <Section title="ConVars">
          <FileLink href={viewer("sdk/convars/convars.json")}>ConVars.json</FileLink>
          <FileLink href={viewer("sdk/convars/convars.hpp")}>ConVars.hpp</FileLink>
        </Section>

        <Section title="Game Events">
          <FileLink href={viewer("sdk/gameevents/gameevents.json")}>GameEvents.json</FileLink>
        </Section>

        <Section title="Entities">
          <FileLink href={viewer("sdk/entities/entities.json")}>Entities.json</FileLink>
        </Section>

        <Section title="Engine">
          <FileLink href={viewer("sdk/engine/engine_structs.json")}>EngineStructs.json</FileLink>
        </Section>

        <Section title="Features">
          <FileLink href={viewer("sdk/verified_features.json")}>Features.json</FileLink>
        </Section>

        <Section title="SDK">
          <FileLink href={viewer("struct.hpp")}>Struct.hpp</FileLink>
          <FileLink href={viewer("sdk/cs2.hpp")}>CS2.hpp</FileLink>
        </Section>
      </div>

      <section className="api">
        <div className="api-head">
          <h2>API</h2>
          <span>GET · no auth</span>
        </div>
        <p>Every file is available directly under <code>/{base}/</code>.</p>
        <div className="links">
          <FileLink href={`./${base}/offsets.json`}>/offsets.json</FileLink>
          <FileLink href={`./${base}/patterns.json`}>/patterns.json</FileLink>
          <FileLink href={`./${base}/client_dll.hpp`}>/client_dll.hpp</FileLink>
          <FileLink href="./data/index.json">/builds</FileLink>
        </div>
        <pre className="code">{`GET /${base}/offsets.json

{
  "client.dll": {
    "dwEntityList": "0x...",
    "dwLocalPlayerPawn": "0x..."
  }
}`}</pre>
      </section>
    </main>
  );
}

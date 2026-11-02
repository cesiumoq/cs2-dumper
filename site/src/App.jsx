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

  useEffect(() => {
    fetch("./data/latest/build.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => setBuild(String(data.build_number ?? "14194")))
      .catch(() => {});
  }, []);

  const base = `./build-${build}`;

  return (
    <main className="page">
      <header className="header">
        <h1>CS2 Dumper</h1>
        <div className="version">build-{build}</div>
      </header>

      <Section title="Build">
        <FileLink href={`${base}/build.json`}>Build.json</FileLink>
        <FileLink href={`${base}/hashes.json`}>Hashes.json</FileLink>
        <FileLink href={`${base}/info.json`}>Info.json</FileLink>
      </Section>

      <Section title="Offsets">
        <FileLink href={`${base}/offsets.hpp`}>Offsets.hpp</FileLink>
        <FileLink href={`${base}/offsets.cs`}>Offsets.cs</FileLink>
        <FileLink href={`${base}/offsets.json`}>Offsets.json</FileLink>
        <FileLink href={`${base}/OffsetsHex.json`}>OffsetsHex.json</FileLink>
        <FileLink href={`${base}/offsets.txt`}>Offsets.txt</FileLink>
        <FileLink href={`${base}/offsets_all.json`}>OffsetsAll.json</FileLink>
      </Section>

      <Section title="Patterns">
        <FileLink href={`${base}/patterns.json`}>Patterns.json</FileLink>
        <FileLink href={`${base}/patterns.hpp`}>Patterns.hpp</FileLink>
        <FileLink href={`${base}/recovered_patterns.json`}>RecoveredPatterns.json</FileLink>
        <FileLink href={`${base}/scanner_patterns.txt`}>ScannerPatterns.txt</FileLink>
        <FileLink href={`${base}/re_targets.json`}>ReverseTargets.json</FileLink>
      </Section>

      <Section title="Classes">
        <FileLink href={`${base}/client_dll.hpp`}>Client.hpp</FileLink>
        <FileLink href={`${base}/client_dll.cs`}>Client.cs</FileLink>
        <FileLink href={`${base}/client_dll.json`}>Client.json</FileLink>
        <FileLink href={`${base}/server_dll.hpp`}>Server.hpp</FileLink>
        <FileLink href={`${base}/types.json`}>Types.json</FileLink>
      </Section>

      <Section title="Interfaces">
        <FileLink href={`${base}/interfaces.hpp`}>Interfaces.hpp</FileLink>
        <FileLink href={`${base}/interfaces.cs`}>Interfaces.cs</FileLink>
        <FileLink href={`${base}/interfaces.json`}>Interfaces.json</FileLink>
        <FileLink href={`${base}/sdk/interfaces/vtables.json`}>VTables.json</FileLink>
      </Section>

      <Section title="ConVars">
        <FileLink href={`${base}/sdk/convars/convars.json`}>ConVars.json</FileLink>
        <FileLink href={`${base}/sdk/convars/convars.hpp`}>ConVars.hpp</FileLink>
      </Section>

      <Section title="Game Events">
        <FileLink href={`${base}/sdk/gameevents/gameevents.json`}>GameEvents.json</FileLink>
      </Section>

      <Section title="Entities">
        <FileLink href={`${base}/sdk/entities/entities.json`}>Entities.json</FileLink>
      </Section>

      <Section title="Engine">
        <FileLink href={`${base}/sdk/engine/engine_structs.json`}>EngineStructs.json</FileLink>
      </Section>

      <Section title="Features">
        <FileLink href={`${base}/sdk/verified_features.json`}>Features.json</FileLink>
      </Section>

      <Section title="SDK">
        <FileLink href={`${base}/struct.hpp`}>Struct.hpp</FileLink>
        <FileLink href={`${base}/sdk/cs2.hpp`}>CS2.hpp</FileLink>
      </Section>
    </main>
  );
}

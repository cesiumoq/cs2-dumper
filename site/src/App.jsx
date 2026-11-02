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
  const [version, setVersion] = useState("latest");
  const [build, setBuild] = useState("");

  useEffect(() => {
    fetch("./data/latest/build.json", { cache: "no-store" })
      .then((r) => r.json())
      .then((data) => {
        setBuild(String(data.build_number ?? ""));
        setVersion(data.version || `version-${String(data.build_number ?? "latest")}`);
      })
      .catch(() => {});
  }, []);

  const base = `./${version}`;

  return (
    <main className="page">
      <header className="header">
        <h1>CS2 Dumper</h1>
        <div className="version">{version}{build ? ` · build ${build}` : ""}</div>
      </header>

      <Section title="External Offsets">
        <FileLink href={`${base}/offsets.hpp`}>Offsets.hpp</FileLink>
        <FileLink href={`${base}/offsets.cs`}>Offsets.cs</FileLink>
        <FileLink href={`${base}/offsets.json`}>Offsets.json</FileLink>
        <FileLink href={`${base}/OffsetsHex.json`}>OffsetsHex.json</FileLink>
        <FileLink href={`${base}/offsets.txt`}>Offsets.txt</FileLink>
      </Section>

      <Section title="FFlags">
        <FileLink href={`${base}/fflags.hpp`}>FFlags.hpp</FileLink>
        <FileLink href={`${base}/fflags.cs`}>FFlags.cs</FileLink>
        <FileLink href={`${base}/fflags.json`}>FFlags.json</FileLink>
        <FileLink href={`${base}/FFlagsHex.json`}>FFlagsHex.json</FileLink>
        <FileLink href={`${base}/fflags.txt`}>FFlags.txt</FileLink>
      </Section>

      <Section title="Misc">
        <FileLink href={`${base}/struct.hpp`}>Struct.hpp</FileLink>
        <FileLink href={`${base}/types.json`}>Types.json</FileLink>
      </Section>
    </main>
  );
}

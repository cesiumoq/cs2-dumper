<p align="center">
  <img src="docs/banner.svg" alt="CS2 Dumper" width="100%">
</p>

<p align="center">
  <img alt="Windows x64" src="https://img.shields.io/badge/platform-Windows%20x64-0b1220?style=for-the-badge&logo=windows&logoColor=7dd3fc">
  <img alt="Build 14194" src="https://img.shields.io/badge/build-14194-0b1220?style=for-the-badge">
  <img alt="Signatures" src="https://img.shields.io/badge/signatures-578-0b1220?style=for-the-badge">
  <img alt="Offsets" src="https://img.shields.io/badge/offsets-202-0b1220?style=for-the-badge">
</p>

<p align="center">
  <b>One executable. Double-click. CS2 starts, attaches, and dumps.</b><br>
  <sub>Offsets · patterns · schemas · interfaces · multi-language SDK</sub>
</p>

---

## CS2 Dumper

A single Windows executable that produces a complete Counter-Strike 2 dump:

- 578 signature targets
- 202 resolved offsets
- 111 interfaces
- 3,300 classes
- 4,131 ConVars
- 273 game events
- 182 entities
- 12 engine structs
- 6 feature recipes
- multi-language schemas (`hpp`, `cs`, `rs`, `zig`)

No command line is required. Launch `CS2Dumper.exe`, wait for the map to load, and the dump is written on its own.

---

## Current build

| | |
|---|---|
| Game build | `14194` |
| Signature targets | **578** |
| Offsets | **202** |
| SDK files | **55** |
| Modules hashed | **19** |
| Platform | Windows x64 |

---

## Output

```text
output/
├─ client_dll.json / .hpp / .cs / .rs / .zig
├─ engine2_dll.json / .hpp / .cs / .rs / .zig
├─ server_dll.json / .hpp / .cs / .rs / .zig
├─ ...
├─ offsets.json / .hpp / .cs / .rs / .zig
├─ offsets_all.json
├─ interfaces.json / .hpp
├─ buttons.json / .hpp
├─ info.json
├─ build.json
├─ hashes.json
├─ patterns.json / .hpp
├─ calibrated_patterns.json
├─ scanner_patterns.txt
├─ scanner_out.json
└─ sdk/
```

The same data is mirrored to `cs2-dumper/output/` for publishing.

---

## Repository layout

```text
cs2-dumper/
├─ bin/              release binaries
├─ site/             React + Vite site
├─ docs/             built site and published data
├─ output/           current dump
└─ cs2-dumper/       publishing repository
```

---

<p align="center">
  <sub>CS2 Dumper · build 14194</sub>
</p>

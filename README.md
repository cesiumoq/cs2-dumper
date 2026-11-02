<p align="center">
  <img src="docs/banner.svg" alt="CS2 Dumper build 14194" width="100%">
</p>


<p align="center">
  <sub>Last updated 03/11/2026 at 00:37</sub>
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

```
>>>>>>> f1fb94446c2e8c86f9f56dc6342b36425b541e0e
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

## Repository layout

```text
cs2-dumper/
├─ bin/              release binaries
├─ site/             React + Vite site
├─ docs/             built site and published data
├─ output/           current dump
└─ cs2-dumper/       publishing repository
```

<p align="center">
  <sub>CS2 Dumper · build 14194</sub>
</p>

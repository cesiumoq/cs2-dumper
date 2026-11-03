<p align="center">
  <img src="docs/banner.svg" alt="CS2 Dump build 14194" width="100%">
</p>

<p align="center">
  <a href="https://cs2-dump.vercel.app/">cs2-dump.vercel.app</a><br>
  <sub>Last updated 03/11/2026 at 00:37</sub>
</p>

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

<p align="center">
  <img src="docs/banner.svg" alt="CS2 Dumper — offsets, signatures, schemas, SDK" width="100%">
</p>

<p align="center">
  <img alt="Windows x64" src="https://img.shields.io/badge/platform-Windows%20x64-0b1220?style=for-the-badge&logo=windows&logoColor=7dd3fc">
  <img alt="No IDA required" src="https://img.shields.io/badge/IDA-not%20required-0b1220?style=for-the-badge">
  <img alt="a2x + cs2-sdk" src="https://img.shields.io/badge/runtime-a2x%20%2B%20cs2--sdk-0b1220?style=for-the-badge">
  <img alt="Build 14194" src="https://img.shields.io/badge/build-14194-0b1220?style=for-the-badge">
</p>

<p align="center">
  <b>Un seul exe. Double-clic. CS2 se lance, s'attache, dump offsets / 578 signatures / SDK.</b><br>
  <sub>Offsets · patterns · schémas · interfaces · SDK multi-langages</sub>
</p>

---

## État du dump

| | |
|---|---|
| Build CS2 | `14194` |
| Signatures cs2-sdk | **561 / 578** résolues |
| Offsets résolus | **202** (globaux + signatures + interfaces) |
| SDK | **55 fichiers**, `client_dll.hpp` ≈ 503 Ko |
| IDA | **non requis** pour le mode clic |
| Modules hashés | **19 DLL**, SHA-256 dans `build.json` |
| État publication | `valid: false` — 17 signatures non résolues |

Le fichier de référence pour publier plus tard : [`output/build.json`](output/build.json).

---

## Deux exécutables

| Fichier | Rôle |
|---|---|
| [`bin/CS2Dumper.exe`](bin/CS2Dumper.exe) | lance CS2, s'attache avec a2x, lance cs2-sdk, calcule les patterns, injecte le scanner et écrit les exports |
| [`bin/CS2Reverser.exe`](bin/CS2Reverser.exe) | moteur cs2-sdk standalone : schémas, signatures, offsets, interfaces depuis un CS2 déjà lancé |

Raccourcis : [`Lancer CS2Dumper.lnk`](Lancer%20CS2Dumper.lnk) et [`Lancer CS2Reverser.lnk`](Lancer%20CS2Reverser.lnk).

> `CS2Reverser.exe` n'est pas un décompilateur C++ source. Il extrait les schémas et signatures du jeu vivant. Pour du pseudocode, utiliser IDA/Ghidra.

---

## Double-clic

1. lance CS2 sur `de_dust2` ;
2. attend la map ;
3. exécute a2x ;
4. exécute cs2-sdk (578 signatures, schémas, offsets) ;
5. calcule les patterns scanner sans IDA ;
6. injecte `CS2Scanner.dll` ;
7. écrit `output/` ;
8. attend une touche.

Si CS2 est déjà lancé : être dans une map. Pour un dump sans lancer le jeu : `--runtime`.

```powershell
.\bin\CS2Dumper.exe --runtime --no-pause
.\bin\CS2Dumper.exe --patterns
.\bin\CS2Dumper.exe --inject
.\bin\CS2Dumper.exe --meta
.\bin\CS2Dumper.exe --selftest
```

---

## Sortie

```text
output/
├─ client_dll.json / .hpp / .cs / .rs / .zig
├─ engine2_dll.json / .hpp / .cs / .rs / .zig
├─ server_dll.json / .hpp / .cs / .rs / .zig
├─ ...
├─ offsets.json / .hpp / .cs / .rs / .zig
├─ offsets_all.json           # 202 offsets globaux + signatures + interfaces
├─ interfaces.json / .hpp
├─ buttons.json / .hpp
├─ info.json                  # build 14194
├─ build.json                 # hashes, validation, missing signatures
├─ hashes.json                # SHA-256 de 19 DLL
├─ patterns.json / .hpp       # 578 signatures cs2-sdk
├─ recovered_patterns.json    # signatures récupérées par scan
├─ calibrated_patterns.json   # patterns scanner (RIP-relative)
├─ scanner_patterns.txt
├─ scanner_out.json
└─ sdk/                       # arbre cs2-sdk complet (55 fichiers)
```

### Format des offsets

`offsets.json` garde le format a2x :

```json
{
  "client.dll": {
    "dwEntityList": "0x271EB28",
    "dwLocalPlayerPawn": "0x25698C8"
  }
}
```

`offsets_all.json` contient les **202 entrées** avec `kind` (`global`, `signature`, `interface`), `module`, `rva`, etc.

### Format des signatures

`patterns.json` est le format cs2-sdk :

```json
{
  "total_scanned": 578,
  "found": 561,
  "modules": ["client.dll", "..."],
  "patterns": [
    {
      "name": "CreateMove",
      "module": "client.dll",
      "resolve": "raw",
      "rva": "0x...",
      "pattern": "85 D2 0F 85 ? ? ? ?"
    }
  ]
}
```

Les 17 non résolues sont listées dans `build.json.signatures.missing` (dont `DrawLegs`, `RegenerateWeaponSkin`, `GameSystem_Think_CheckSteamBan`). Le dumper tente une récupération via `recovered_patterns.json` quand la table distante est disponible.

---

## Validation et publication

`build.json` est écrit après chaque run :

```json
{
  "build_number": 14194,
  "valid": false,
  "publish_ready": false,
  "signatures": { "total": 578, "found": 561, "recovered": 0, "missing": [] },
  "offsets": { "count": 202 },
  "modules": {
    "client.dll": { "sha256": "d618bbf8...", "size": 39224472 }
  }
}
```

Le script [`scripts/publish.ps1`](scripts/publish.ps1) prépare `docs/data/` pour GitHub Pages / Vercel. Il refuse par défaut un build `valid: false`.

```powershell
.\scripts\publish.ps1 -AllowInvalid   # publie un build de prévisualisation
.\scripts\publish.ps1                 # publie seulement si valid: true
```

---

## Build

Prérequis : Visual Studio Build Tools C++ x64.

```bat
build_all.bat
```

Le build compile d'abord `CS2Scanner.dll`, puis `CS2Dumper.exe` qui embarque :

- a2x (`cs2-dumper.exe`) ;
- cs2-sdk (`cs2-sdk.exe`) ;
- `CS2Scanner.dll` ;
- le script IDAPython et les tables de patterns (mode IDA optionnel).

### Taille

| Binaire | Taille |
|---|---|
| `CS2Dumper.exe` | ≈ 7,7 Mo |
| `CS2Reverser.exe` | ≈ 3,4 Mo |
| `CS2Scanner.dll` | ≈ 277 Ko |

---

## Limitations connues

- **VPK** : pas encore d'extraction des assets (`.vtex_c` compilés → radars, icônes, personnages). Un décodeur de textures est nécessaire.
- **17 signatures** non résolues sur le build 14194 ; la base cs2-sdk publiée date du build 14184.
- **cs2-sdk** peut retourner un code non nul pour des avertissements ; le dumper conserve quand même l'arbre généré.
- Injection dans un jeu protégé : utiliser un environnement local, pas un serveur protégé.
- Le backend Python historique reste disponible, mais n'est pas utilisé par le mode clic.

---

## Arbre du projet

```text
cs2-dumper/
├─ bin/
│  ├─ CS2Dumper.exe
│  ├─ CS2Reverser.exe
│  ├─ CS2Scanner.dll
│  ├─ cs2-dumper.exe
│  └─ cs2-sdk.exe
├─ launcher/          CS2Dumper.cpp, ressources embarquées, build
├─ scanner/           CS2Scanner.cpp, build
├─ ida/               script IDAPython optionnel
├─ reference/         recettes, bindings, patterns distants
├─ scripts/           publication GitHub
├─ docs/              bannière, site statique, données publiées
├─ output/            dump courant
└─ .cache/            caches, DLL extraites, bases IDA optionnelles
```

Crédits : [a2x/cs2-dumper](https://github.com/a2x/cs2-dumper) et [scros22/cs2-universal-offsets](https://github.com/scros22/cs2-universal-offsets).

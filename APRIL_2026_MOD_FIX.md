# Fixing Dragon Ball Sparking Zero Mods After the April 21, 2026 Patch

## The Problem

The April 21, 2026 game patch (Survival Mode update) broke all character mods. The game crashes on startup when mods like ZeroSpark, Shadow, Sonic, etc. are installed.

## Why It Breaks

The game is built with Unreal Engine 5. Mods use **Blueprints** — a visual scripting system where logic is compiled into bytecode. This bytecode references game properties (like character stats, move data, etc.) **by name**.

The April 2026 patch **renamed and removed some properties**:
- `AiCharacterData` → renamed to `AiCharacterDataAsset`
- Several structs got new fields (ModeNSR survival mode parameters, ForbidCharacter, etc.)

When a mod's Blueprint tries to access a property by its old name (like `AiCharacterData`), the engine can't find it and returns a **null pointer**. The code then tries to read from that null pointer → **instant crash**.

## The Crash (Technical)

The crash is at a specific instruction in the game's Blueprint interpreter:

```
movsxd rax, [rbx+0x4C]    ; Read the property's data offset
```

`rbx` is supposed to be a pointer to the property definition (FProperty*). When the property name lookup fails, `rbx` is NULL. Reading `[NULL + 0x4C]` crashes with an access violation.

This is the **same crash** for ALL mods — ZeroSpark, Shadow, Sonic plugins, etc. One bug, one fix.

## The Fix: BPPropertyNullFix

We created a tiny DLL (4KB) that patches this instruction at game startup. It:

1. **Loads as an ASI plugin** — dropped into the `plugins/` folder alongside the UTOC signature bypass
2. **Patches the crashing instruction** — replaces it with a jump to a null check
3. **If the property is valid** — executes the original code normally
4. **If the property is NULL** — skips the access gracefully (no crash)

The game's existing error handling then takes over for the missing property — it just uses default values instead of crashing.

## Installation

### Requirements
- UTOC Signature Bypass (dsound.dll) already installed
- Steam launch options: `WINEDLLOVERRIDES="dsound.dll=n,b" %command%`

### Steps
1. Download `BPPropertyNullFix.asi` (4KB file)
2. Copy it to: `SparkingZERO/Binaries/Win64/plugins/BPPropertyNullFix.asi`
3. That's it. The existing dsound.dll ASI loader picks it up automatically.

### File locations
```
SparkingZERO/
├── Binaries/Win64/
│   ├── dsound.dll                          # UTOC Signature Bypass
│   └── plugins/
│       ├── DBSparkingZeroUTOCBypass.asi    # UTOC Bypass plugin
│       └── BPPropertyNullFix.asi           # ← Our fix (drop this in)
└── Mods/
    ├── SZModLib/                           # Mod loader framework
    ├── ZeroSpark/                          # Character framework
    └── ShadowTheHedgehog/                  # Character mod (example)
```

## What Works After the Fix

| Feature | Status |
|---------|--------|
| SZModLib mod loader | ✅ Working |
| ZeroSpark v1.1.6 framework | ✅ Working |
| Mod loader overlay | ✅ Shows on screen |
| Character registration | ✅ New characters appear in selector |
| Character 3D models | ⚠️ May be missing if mod was built pre-April 2026 |
| Simple pak skin replacements (~mods/) | ✅ Working (e.g., Sonic over Teen Gohan) |

## Known Limitation: Character Models

Character mods built before April 2026 may show up in the character selector but **without their 3D model**. This is because the character model Blueprints (BPCHRs) in the mod were compiled against the old game class layout. The null fix prevents the crash, but the model data can't fully load.

**Fix**: Mod authors need to rebuild their character model paks against the April 2026 game version. The character registration (ZeroSpark framework) works fine — it's only the visual assets that need updating.

## How It Was Built

### The DLL (BPPropertyNullFix)

The DLL is compiled with MSVC using `/NODEFAULTLIB` — no C runtime dependency, only KERNEL32.dll. This is critical for Wine/Proton compatibility (the Visual C++ runtime isn't available).

It works by:
1. Finding the game's base address via `GetModuleHandleA(NULL)`
2. Verifying the expected bytes at the crash site (to avoid patching the wrong game version)
3. Writing a **trampoline** (null check + original instructions) into the DLL's own code section
4. Overwriting the crash site with a 14-byte **absolute jump** to the trampoline

### Why absolute jumps?

On 64-bit Windows, DLLs can be loaded anywhere in the 64-bit address space. The game code is at ~0x140000000 while our DLL loads at ~0x6FFFFA970000 — too far for a 32-bit relative jump. We use `FF 25 00 00 00 00` (jump to address stored after the instruction) which supports the full 64-bit range.

### Why the trampoline is in the DLL's code section?

Wine/Proton doesn't properly honor `VirtualAlloc` with `PAGE_EXECUTE_READWRITE`. Memory allocated at runtime can't be made executable. By putting the trampoline in the DLL's `.text` section, it's mapped as executable by the PE loader — no runtime permission changes needed.

## Source Code

Located at: `BPPropertyNullFix/main.cpp`

Compile with:
```
cl /nologo /LD /O2 /GS- main.cpp /link /NODEFAULTLIB /ENTRY:DllMain kernel32.lib /OUT:BPPropertyNullFix.dll /DLL
```

## Discovery Process

1. Captured crash via Proton's `PROTON_LOG=1` + `WINEDEBUG=+seh`
2. Identified crash address: `exe+0x2E111EA`
3. Extracted bytes from game binary, decoded x86-64 instructions
4. Identified the null FProperty* pattern (property name lookup returning NULL)
5. Wrote DLL to patch the null check
6. Iterated through Wine/Proton compatibility issues:
   - VirtualAlloc'd memory not executable → use DLL code section
   - CRT dependencies not available → compile with /NODEFAULTLIB
   - Relative jumps can't reach → use absolute jumps
   - Trampoline byte offsets miscalculated → verified with Python offset calculator
   - Game uses rbx later in same function → also zero rdi to trigger existing skip path

## Credits

- **zachc** — Reverse engineering, DLL development, testing
- **Claude Code** — Analysis, code generation, crash diagnosis
- **WistfulHopes / narknon** — SZModLib and SparkingZERO_ModProject
- **IzumiSakai / JohnSparking** — ZeroSpark framework
- **GogetaHaz** — Shadow the Hedgehog character mod
- **NootNoot640** — Sonic skin mod
- **Vaporeon2** — SparkingZERO Mod Loader distribution

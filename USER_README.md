# User guide: making mods for Dragon Ball Z: Buu's Fury

This guide covers everything you need to change the game: text, cutscenes, items, equipment, enemies, maps, graphics and
balance. Then you build it into a playable ROM and share it as a patch. You don't need to know assembly or C. You edit text
files, spreadsheets (CSV) and images, and run two commands.

For the technical reference behind each tool, see `docs/modding.md`. For how the disassembly and decompilation work, see `README.md`.

---

## Contents
1. [Setup (once)](#setup)
2. [The edit loop](#loop)
3. [Finding what you want to change](#finding)
4. [Recipes](#recipes)
   * [Text: dialogue, menus, names](#text)
   * [Cutscenes and NPC talk](#cutscenes)
   * [Scripting reference](#scripting)
   * [Items](#items)
   * [Equipment](#equipment)
   * [Enemies: stats, drops, placement](#enemies)
   * [Leveling (EXP curve)](#exp)
   * [Maps: layout, tiles, collision](#maps)
   * [Graphics: tiles, sprites, colours](#graphics)
   * [Areas](#areas)
5. [Rules and limits](#limits)
6. [Testing](#testing)
7. [Sharing your mod](#sharing)
8. [Troubleshooting](#trouble)
9. [Reference: files, numbers, addresses](#reference)

---

<a name="setup"></a>
## 1. Setup (once)
You need a Linux shell. Windows users can use WSL (Ubuntu); macOS works with Homebrew equivalents.
```sh
sudo apt-get install git make python3 python3-pip gcc gcc-arm-none-eabi binutils-arm-none-eabi libmgba-dev libpng-dev zlib1g-dev
pip install --break-system-packages capstone numpy pillow unicorn
git clone https://github.com/smh4004/buusfury-decomp && cd buusfury-decomp
cp /path/to/your/Buu_s_Fury_USA.gba baserom.gba     # your own dump, USA version
make && make compare                                # must print: buusfury.gba: OK
```
`baserom.gba` must be the USA ROM with SHA-1 `f1c4b07554d2a3b1ad2f325307051e775ce68087`. If `make compare` doesn't print OK,
you have a different dump, and nothing else will work reliably.

<a name="loop"></a>
## 2. The edit loop
```sh
make extract        # once: unpacks the game into assets/ (about 11,000 files)
# ... edit files in assets/ ...
make modern         # builds buusfury_modern.gba from your edits (a few seconds)
# play buusfury_modern.gba in any GBA emulator (mGBA recommended)
make patch          # when you're ready to share: buusfury_modern.bps
```
* Only files you changed are rebuilt. With no changes, `make modern` produces the original ROM exactly.
* Edits can make things **bigger**: longer text, more cutscene steps, bigger scripts. The build moves grown data to free space
  and fixes every pointer to it.
* To undo everything, delete `assets/` and run `make extract` again. To undo one file, copy it from a fresh extract.
* **Keep your own edited files somewhere safe**, e.g. a private git repo or a backup. **Never publish `assets/` or any ROM**:
  they are the game's copyrighted data. Publish only the `.bps` patch.
* Optional: `python3 tools/assets/demo_edits.py` (on a fresh extract) makes one example edit of every kind. It's a good way
  to see what each change looks like.

<a name="finding"></a>
## 3. Finding what you want to change
| You want... | Look in |
|---|---|
| A line someone says | `grep -n "words from the line" assets/text/dialogue.txt`. The `@bank:offset:length` header above it is the line's id. `grep -rl "@0:809:49" assets/scripts` finds the cutscene that shows it |
| A cutscene / NPC conversation | `grep -l "words" assets/scripts/*.evt` (each step shows the start of its line). Each file's header says which global script number it is and what points to it |
| Who a speaker id is | `assets/scripts/SPEAKERS.txt` (sample lines for every speaker id) |
| Menu text, item and area names | `assets/text/ui_strings.txt` (`index<TAB>text`) |
| An item, equipment piece, enemy | `assets/tables/items.csv`, `equipment.csv`, `enemies.csv` (open them in a spreadsheet or text editor) |
| Where an enemy appears | `assets/tables/spawns.csv` (`_enemy` column) or `grep -l "Bomber" assets/areas/*.actors` |
| A map | `assets/maps/index.csv`. Folders are named after the area, e.g. `w01_a01_Snakeway` = world 1, area 1 |
| An area's actors (NPCs, enemies) | `assets/areas/aNNN_wXX_YY_Name.actors` |
| A sprite | Browse `assets/gfx/sprites/` (folders are animations, PNGs are frames) |
| A game function | `config/script_natives.txt` and `docs/script_natives.md` (script commands); `ref/*.c` (all game code as C) |

<a name="recipes"></a>
## 4. Recipes

<a name="text"></a>
### Text: dialogue, menus, names
**Dialogue** (`assets/text/dialogue.txt`): every line has a header and the text under it:
```
@0:809:49
!Previously in DRAGON BALL Z: LEGACY OF GOKU 2...
```
Edit only the text line and keep the header. Any length works. Special codes:
* `{0B}` new page (the player presses A), `{08}{07}` highlight colour on, `{08}{02}` back to normal colour.
  Other `{XX}` codes are control characters; copy them from similar lines.
* `%s`, `%d`: filled in by the game (names, numbers). Keep them.
* A leading `!` or `@` controls the dialogue box style. Keep it if the original line has one.
* The box shows about 3 lines of roughly 32 characters. Use `{0B}` to start a new page instead of overflowing.

**Menus, names, descriptions** (`assets/text/ui_strings.txt`): `index<TAB>text`, any length. Item, equipment, enemy and
area names are UI strings. Find the index in the tables (`name` columns, with the text shown next to them).

<a name="cutscenes"></a>
### Cutscenes and NPC talk (`assets/scripts/*.evt`)
A cutscene is a list of **steps** that run in order:
```
step 1 code                       ; commands (see Scripting reference)
    call load_area(0, 2, 0, 0, 0)
    call music(36)
    end
step 2 say 0x00 @0:809:49         ; show dialogue line @0:809:49, speaker 0x00 (narrator)
step 3 say 0x02 "Hi, I'm new!"    ; a NEW line written right here
```
You can do all of these:
* **Change a line**: replace `@bank:off:len` with `"your text"`, or edit the line in `dialogue.txt`. Don't do both for the same line.
* **Add a line**: add `step auto say SPEAKER "text"` where you want it. `auto` is fine. The build renumbers steps.
* **Remove a step**: delete its line(s). **Reorder**: move the lines.
* **Change the speaker**: the hex number after `say` (see `SPEAKERS.txt`; it also picks the portrait).
* **Add commands**: a `step auto code` block with commands, ending in `end`.
* **Reuse another cutscene's step**: `step ref LABEL` (the label is in the `;` comment of that step).

Text inside quotes: `\n` = new line, `\"` = quote, `{0B}` = new page.

Things to know:
* Most lists are numbered 1, 2, 3... and are renumbered for you. A few (dialogue choice trees) use other numbers. The
  build keeps those exactly as written, so don't renumber them yourself.
* A header that says **FIXED LENGTH** marks a list whose steps you can edit but not add or remove.
* `step N raw ...` lines are step kinds that aren't decoded yet. Leave them alone or remove them whole.
* `step N zcode` is a compressed command step. Edit it like `code`.

<a name="scripting"></a>
### Scripting reference
Commands work like a calculator stack: numbers are pushed, then a command uses them.
```
    call music(36)            ; = push 36, then call native "music"
    call 0x6B(780, 0, 100)    ; natives without a name are written as hex numbers
    pushn 0, 2, 0, 0, 0       ; push several numbers (any size, negatives ok)
    call load_area
    push 5                    ; push one number 0-255;  push.v -300  for any other number
    call hp                   ; read a variable (pushes it)
    push 25
    add                       ; add, sub, mul, div, mod, neg, and, or, eq, ne, gt, ge, lt, le
    set hp                    ; variable = top of stack
    inc 0x05                  ; variable += 1 (also dec)
    jz Skip                   ; jump to label if the top of stack is 0 (false)
    jmp Done                  ; always jump
Skip:
    ...
Done:
    end                       ; every code block ends with end
```
Loops: `push 3` / `loop_begin` / ... / `loop Top`, where `Top:` labels the first command inside the loop.

**Named commands** (`config/script_natives.txt`; add your own names there, they never change the ROM):

| Command | What it does |
|---|---|
| `music(n)` | play music track n |
| `play_sfx(n)` | play sound effect n |
| `wait(frames)` | pause the cutscene for a number of frames (the game runs at about 60 per second) |
| `load_area(a, b, c, d, e)` | switch scene/area (copy the arguments from existing cutscenes) |
| `begin_moves` ... `wait_moves` | group actor moves and wait for them to finish |
| `move(actor, x, y)` | walk an actor to x,y (map pixels); actor = actor id + 9 |
| `face(actor, dir)` | 0 down, 1 up, 2 side |
| `take_item(n)` | remove one of item n from the inventory (n = item row + 10) |
| `has_equipped(e)` | 1 if equipment row e is worn |
| `run_event(n, a, b)` | start global cutscene/script n (see `.evt` headers: "Global script n") |
| `hp`, `max_hp`, `ki`, `max_ki` | variables of the active character (use with `call`, `set`, `inc`) |

For the other natives, `docs/script_natives.md` shows each one's C code and a guess at its argument count. When you work
out what one does, name it in `config/script_natives.txt`.

<a name="items"></a>
### Items (`assets/tables/items.csv`, `assets/scripts/items/*.scr`)
* `price`: shop price in Zenie. `category`: 0 usable, 1 key item.
* `name`, `name2`, `plural`, `desc`: UI string indexes. Edit the text itself in `ui_strings.txt`.
* What an item does is its effect script, `assets/scripts/items/NN_Name.scr`. Example: a Senzu Bean that also restores
  only half the energy:
  ```
      call max_hp
      set hp
      call max_ki
      push 2
      div
      set ki
      call take_item(21)
      call play_sfx(11)
      end
  ```
  Effects can grow. Keep the `take_item` line, or the item is never used up.

<a name="equipment"></a>
### Equipment (`assets/tables/equipment.csv`)
`slot` (0 body, 1 hands, 2 feet, 3 accessory), `level_plus_50` (required level + 50, so 55 = level 5), `stat0`-`stat5`
(bonuses, -128 to 127; the first four are most likely STR, POW, END, SPD), `price` (-1 = not sold). Names and descriptions are UI
strings.

<a name="enemies"></a>
### Enemies: stats, drops, placement
**Stats** (`assets/tables/enemies.csv`, one row per enemy type, `_names` says which enemies use the row):

| Column | Meaning |
|---|---|
| `hp` | hit points |
| `exp` | EXP for defeating it |
| `level_plus_50` | level + 50 |
| `str` / `pow` | physical / ki attack strength |
| `end` | defence |
| `phys_taken` / `ki_taken` | damage taken from physical / ki attacks, 128 = normal, 64 = half, 255 = double |
| `death_script` | what happens on defeat (drops): `assets/scripts/enemies/NNN_Name.scr` |

Example: halve the Bomber's HP and double its EXP. Find the row with `_names` = `Bomber` (row 8), set `hp` to 62 and `exp` to 150.

**Drops**: the death scripts look like `pushn 497, 107, -1` / `call 0xD8` (= `run_event(497, 107, -1)`), which runs the
drop event with drop setting 107. Copy the numbers from an enemy whose drops you want.

**Placing enemies**: open the area's `assets/areas/aNNN_....actors` and add a line:
```
enemy 8 0x70 0xB0 34                      ; type 8 (Bomber), x=0x70, y=0xB0, character 34
enemy 8 200 120 34 condition=0x1002A      ; only once story flag 0x2A is set
```
* Copy `type` and `character` together from `assets/tables/spawns.csv` (columns `enemy` and `character`), because a mismatched sprite looks wrong.
* x/y are map pixels. Look at the other actors' positions or the map preview (`assets/maps/<map>/L*.png` after
  `python3 tools/assets/assets.py extract --previews`).
* `condition`: 0 = always. `0x1NNNN` = only if story flag NNNN is set, `0x2NNNN` = only if it isn't.
* Delete an `actor` line to remove that actor from the area; move lines to change spawn order.

**Moving existing enemies**: edit `x`/`y` (or `enemy`) in `assets/tables/spawns.csv`.

Tested in the emulator: an added Bomber with 40 HP and 5,000 EXP appears on Snake Way, dies to ki blasts, and Goku levels
up (`make verify-mods`).

<a name="exp"></a>
### Leveling (EXP curve) (`assets/tables/exp.csv`)
151 rows: EXP needed for each level (row 0 = level 1). Keep the numbers increasing and keep all 151 rows.

<a name="maps"></a>
### Maps: layout, tiles, collision (`assets/maps/<map>/`)
* `L0.csv` ... `L3.csv` are the map's layers (background to foreground). Each cell is one 8x8 tile, written as a hex number:
  * low 10 bits = **slot** in the map's tile list (`tiles.txt`)
  * `+400` = flip horizontally, `+800` = flip vertically
  * so `0B3` is slot 179, `4B3` is the same tile flipped, and `000` is usually empty
* Spreadsheet tip: open the CSV in LibreOffice or Excel as text (so `0B3` stays `0B3`), edit, and save as CSV. Rows and columns must
  stay the same size.
* `tiles.txt`: slot -> tile (`page:tile` in hex). To use a new tile in this map, add a line with its id, keeping the
  list in increasing order. Every slot after the insertion shifts by one, so it's easiest to add at the end with a high id.
  `PP:TT` is in hex: page PP, tile TT. The image is `assets/gfx/tiles/page_NNN.png` with NNN = PP in decimal (`90:4D` ->
  `page_144.png`), and the tile sits at row TT / 16, column TT % 16 (0x4D = 77 -> row 4, column 13).
* `floor.png` / `area.png`: collision, one pixel per 8x8 cell, 256x256 (white = walkable / inside the play area). Paint in any
  editor and keep the size and black/white.
* Previews of every layer: `python3 tools/assets/assets.py extract --previews` (slow; writes `L*.png` next to the CSVs).
* Maps can't change size, and other maps that share a section aren't affected by your edit (the build copies shared sections).

<a name="graphics"></a>
### Graphics: tiles, sprites, colours
* **Tile pages** (`assets/gfx/tiles/page_NNN.png`): the background tiles of every map (a page is shared by all maps using
  it). 128 px wide, 16 tiles per row. Paint over tiles and keep the image size.
* **Sprites** (`assets/gfx/sprites/<animation>/*.png`): one PNG per frame. Keep the size. Transparent pixels stay
  transparent; colours snap to the game's sprite palette.
* **Colours** (`assets/palette/master.txt`): 512 lines `R G B` (0-255). Lines 0-255 are background colours, 256-511 sprite
  colours. Changing a colour changes it everywhere it's used.
* Use only colours from the palette for exact results (indexed PNGs keep their indices). Other colours are matched to the
  nearest palette colour.

<a name="areas"></a>
### Areas (`assets/tables/areas.csv`)
One row per area: `world`/`area` ids, `name` (UI string index), `scene` (which map), `b4` + `p14` (the actor list: use the
`.actors` files instead of editing these two), and pointers to the area's scripts. Pointer columns accept any label name.

<a name="limits"></a>
## 5. Rules and limits
* **Can't change the number of rows in tables** (items, equipment, enemies, EXP). Repurpose unused rows instead.
* Maps keep their size, and tile pages and sprites keep their dimensions.
* Not editable yet: multi-piece and 16-colour sprites, step kinds shown as `raw`, music and sound.
* Most script commands are unnamed (shown as `0xNN`). Copy usage from existing cutscenes.
* Don't edit the same thing in two places in one build: a dialogue line both in `dialogue.txt` and inline in a `.evt`, or an area's
  actors both in `areas.csv` and its `.actors` file.

<a name="testing"></a>
## 6. Testing
* Play `buusfury_modern.gba` in an emulator. A save state just before the part you changed saves a lot of time.
* `make verify-mods`: self-test of the whole toolkit (rebuilds the original exactly, round-trips every script, and fights a
  test enemy in a headless emulator). Run it after updating the tools.
* Headless screenshots: `make harness`, then `tools/harness/harness buusfury_modern.gba tools/harness/long.txt out/`.
  Routes are plain text (`tap A 30`, `run 600`, `shot name`); see the top of `tools/harness/harness.c`.
* `make compare` still checks that the source tree itself is intact (prints `buusfury.gba: OK`).

<a name="sharing"></a>
## 7. Sharing your mod
```sh
make patch          # -> buusfury_modern.bps
```
Players apply the `.bps` to their own Buu's Fury (USA) ROM with any BPS patcher (Floating IPS, RomPatcher.js, or
`python3 tools/bps.py apply original.gba mod.bps out.gba`). Never share the ROM or the `assets/` folder.

<a name="trouble"></a>
## 8. Troubleshooting
| Message / symptom | Meaning and fix |
|---|---|
| `make compare` not OK | Wrong ROM dump. You need the USA version with the SHA-1 above |
| `line N: unknown instruction` / `unknown label` | Typo in a script. Commands are lower case; labels need `Name:` on their own line |
| `must keep N rows` | A table lost or gained a row. Restore it |
| `expected 128xH pixels` / `expected WxH` | An image changed size. Resize it back |
| `tile list must be strictly increasing` | `tiles.txt` ids out of order |
| `override ... grows but the code addresses it as symbol+offset` | That object can't grow (it's "pinned"). Make the edit fit in the original size |
| `this list has no 0 terminator` | FIXED LENGTH list: same number of steps |
| Game freezes in a cutscene | Usually a code step without `end`, or a jump to the wrong label. Compare with the original file (fresh extract) |
| Text runs off the box | Add `{0B}` page breaks |
| Nothing changed in game | Check that `make modern` listed your file under "changed assets", and that you're playing `buusfury_modern.gba` |

<a name="reference"></a>
## 9. Reference: files, numbers, addresses
| Thing | ROM address | File |
|---|---|---|
| Script VM / natives | 0x08004038 / 0x08055098 (248) | `docs/script_natives.md`, `config/script_natives.txt` |
| Global scripts | 0x0879B704 `gGlobalScripts` (522) | `.evt` headers |
| Dialogue banks | 0x087B5B64 (7 compressed banks) | `assets/text/dialogue.txt` |
| UI strings | 0x0806BCE8 (1,534) | `assets/text/ui_strings.txt` |
| Area table | 0x0808E2E0 `gAreaTable` (452 x 56) | `assets/tables/areas.csv`, `assets/areas/*.actors` |
| Enemy stats | 0x08711274 `gEnemyStats` (150 x 28) | `assets/tables/enemies.csv` |
| Enemy spawns | records starting with `Enemy_Spawn` (1,571 x 32) | `assets/tables/spawns.csv` |
| Items | 0x083BD500 `gItemTable` (24 x 52) | `assets/tables/items.csv` |
| Equipment | 0x086F82EC `gEquipmentTable` (162 x 44) | `assets/tables/equipment.csv` |
| Scouter | 0x0874D380 `gScouterTable` (232 x 16) | `assets/tables/scouter.csv` |
| EXP curve | 0x086B7084 `gExpTable` (151) | `assets/tables/exp.csv` |
| Palette | 0x080701B0 (512 x RGB) | `assets/palette/master.txt` |
| Tile pages | 0x08179764 (187 pages) | `assets/gfx/tiles/` |
| Maps | 427 records | `assets/maps/` |
| Game code | 0x08000158-0x08054FBB | `asm/` (exact), `ref/` (C), `src/` (verified C) |

Game mechanics found in the code (names in `config/symbols.txt`):
* **Damage** (`Combat_Damage`): grows with the attacker's STR (physical) or POW (ki) roughly as (a + 100) * a^2, is
  reduced by the defender's END (values over 200 count as END / 4 + 150, capped at 220), and is scaled by the defender's
  `phys_taken`/`ki_taken` (128 = 100%) and some randomness.
* **EXP and levels** (`Player_AddExp`, `Player_GetLevel`): the level is looked up in the EXP table, and levels are stored as level + 50.
* **Enemy creation** (`Enemy_Spawn`, `Enemy_Create`): an area's actor list is walked when it loads, and each record's
  condition is checked (`Actor_CheckCondition`).

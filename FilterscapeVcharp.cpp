meta {
    name = "loot-filters/filterscapeVcharp";
    description = "A edit of the reference file to my tastes. Credit to @abstain of the FilterScape Discord for the base!";
}

// USERVAR: item value thresholds
#define VALUE_TIER_S 100000000 // 100m
#define VALUE_TIER_A 10000000  // 10m
#define VALUE_TIER_B 1000000   // 1m
#define VALUE_TIER_C 500000    // 500k
#define VALUE_TIER_D 100000    // 100k
#define VALUE_TIER_E 20000     // 20k
#define VALUE_TIER_F 800       // 800

// 60% = 99
// 40% = 66
// 20% = 33

// Colors
#define GRAY "ff808080"
#define GRAY60 "99808080"
#define GRAY40 "66808080"
#define GRAY20 "33808080"

#define RED "ffff0000"
#define RED60 "99ff0000"
#define RED40 "66ff0000"
#define RED20 "33ff0000"

#define GREEN "ff00ff00"
#define GREEN60 "9900ff00"
#define GREEN40 "6600ff00"
#define GREEN20 "3300ff00"

#define BLUE "ff0000ff"
#define BLUE60 "990000ff"
#define BLUE40 "660000ff"
#define BLUE20 "330000ff"

#define CYAN "ff00ffff"
#define CYAN60 "9900ffff"
#define CYAN40 "6600ffff"
#define CYAN20 "3300ffff"

#define MAGENTA "ffff00ff"
#define MAGENTA60 "99ff00ff"
#define MAGENTA40 "66ff00ff"
#define MAGENTA20 "33ff00ff"

#define YELLOW "ffffff00"
#define YELLOW60 "99ffff00"
#define YELLOW40 "66ffff00"
#define YELLOW20 "33ffff00"

#define WHITE "ffffffff"
#define WHITE60 "99ffffff"
#define WHITE40 "66ffffff"
#define WHITE20 "33ffffff"

#define BLACK "ff000000"
#define BLACK60 "99000000"
#define BLACK40 "66000000"
#define BLACK20 "33000000"

#define BROWN "ffD2B287"
#define BROWN60 "99D2B287"
#define BROWN40 "66D2B287"
#define BROWN20 "33D2B287"

#define LIGHT_BROWN "ffAF6025"
#define LIGHT_BROWN60 "99AF6025"
#define LIGHT_BROWN40 "66AF6025"
#define LIGHT_BROWN20 "33AF6025"

#define ORANGE "ffF05A23"
#define ORANGE60 "99F05A23"
#define ORANGE40 "66F05A23"
#define ORANGE20 "33F05A23"

#define CARAMEL "ffF99619"
#define CARAMEL60 "99F99619"
#define CARAMEL40 "66F99619"
#define CARAMEL20 "33F99619"

#define GOLD "ffD59F00"
#define GOLD60 "99D59F00"
#define GOLD40 "66D59F00"
#define GOLD20 "33D59F00"

#define BURGUNDY "ff350D0D"
#define BURGUNDY60 "99350D0D"
#define BURGUNDY40 "66350D0D"
#define BURGUNDY20 "33350D0D"

#define DARK_GREEN "ff09600D"
#define DARK_GREEN60 "9909600D"
#define DARK_GREEN40 "6609600D"
#define DARK_GREEN20 "3309600D"

#define KHAKI "ffBEB287"
#define KHAKI60 "99BEB287"
#define KHAKI40 "66BEB287"
#define KHAKI20 "33BEB287"

#define BRONZE "ff5b462a"
#define BRONZE60 "995b462a"
#define BRONZE40 "665b462a"
#define BRONZE20 "335b462a"

#define BLURITE "ff8f90d8"
#define BLURITE60 "998f90d8"
#define BLURITE40 "668f90d8"
#define BLURITE20 "338f90d8"

#define IRON "ff635c5b"
#define IRON60 "99635c5b"
#define IRON40 "66635c5b"
#define IRON20 "33635c5b"

#define ELEMENTAL "ff70119f"
#define ELEMENTAL60 "9970119f"
#define ELEMENTAL40 "6670119f"
#define ELEMENTAL20 "3370119f"

#define SILVER "ffa8a8b4"
#define SILVER60 "99a8a8b4"
#define SILVER40 "66a8a8b4"
#define SILVER20 "33a8a8b4"

#define STEEL "ff908686"
#define STEEL60 "99908686"
#define STEEL40 "66908686"
#define STEEL20 "33908686"

#define GOLD "ffd8b01a"
#define GOLD60 "99d8b01a"
#define GOLD40 "66d8b01a"
#define GOLD20 "33d8b01a"

#define LOVAKITE "ff641509"
#define LOVAKITE60 "99641509"
#define LOVAKITE40 "66641509"
#define LOVAKITE20 "33641509"

#define MITHRIL "ff4c4c70"
#define MITHRIL60 "994c4c70"
#define MITHRIL40 "664c4c70"
#define MITHRIL20 "334c4c70"

#define LUNAR "ff727b72"
#define LUNAR60 "99727b72"
#define LUNAR40 "66727b72"
#define LUNAR20 "33727b72"

#define ADAMANT "ff506450"
#define ADAMANT60 "99506450"
#define ADAMANT40 "66506450"
#define ADAMANT20 "33506450"

#define RUNITE "ff516d78"
#define RUNITE60 "99516d78"
#define RUNITE40 "66516d78"
#define RUNITE20 "33516d78"

// Methods
#define COLOR2(_fg) textColor = _fg; borderColor = _fg;
#define COLOR3(_fg, _bg) textColor = _fg; borderColor = _fg; backgroundColor = _bg;
#define HIDE_1(_name) if (name:_name && quantity:<2) { hidden = true; }
#define DARK_BG(_name, _color) if (name:_name) { color = _color; borderColor = _color; backgroundColor = BLACK60; }
#define TEXT_HIGHLIGHT(_name, _color) if (name:_name) { color = _color; textAccent = 1; }

#define UNIQUE_S_TIER(_name ) if (name:_name) { \
    COLOR3(RED, WHITE20) \
    textAccent = 1; \
    fontType = 2; \
    showLootbeam = true; \
}
#define UNIQUE_A_TIER(_name ) if (name:_name) { \
    COLOR3(WHITE, LIGHT_BROWN40) \
    textAccent = 1; \
    showLootbeam = true; \
}
#define UNIQUE_B_TIER(_name) if (name:_name) { \
    COLOR3(BLACK, LIGHT_BROWN40) \
    textAccent = 1; \
}
#define UNIQUE_C_TIER(_name) if (name:_name) { \
    COLOR3(LIGHT_BROWN, BURGUNDY40) \
    textAccent = 1; \
}

#define RARE_CUSTOM(_name, _color, _backgroundColor) if (name:_name) { \
    COLOR3(_color, _backgroundColor) \
    showLootbeam = true; \
}
#define S_TIER { \
    COLOR3(RED, WHITE20) \
    textAccent = 1; \
    showLootbeam = true; \
    fontType = 2; \
}
#define A_TIER { \
    COLOR3(WHITE, ORANGE40) \
    textAccent = 1; \
    showLootbeam = true; \
}
#define B_TIER { \
    COLOR3(BLACK, ORANGE40) \
    showLootbeam = true; \
}
#define C_TIER { \
    COLOR2(CARAMEL) \
    textAccent = 1; \
    showLootbeam = false; \
}
#define D_TIER { \
    color = GOLD; \
    textAccent = 1; \
    showLootbeam = false; \
}
#define E_TIER { \
    color = KHAKI; \
    textAccent = 1; \
    showLootbeam = false; \
}
#define F_TIER { \
    color = GRAY; \
    hidden = true; \
}
#define C_FOOD { \
    COLOR2(WHITE) \
    textAccent = 1; \
}
#define UTILITY_TIER {\
  color = CYAN; \
  textAccent = 1; \
}

#define COOKED_FOOD (_name) if (name:_name) C_FOOD
#define UTILITY (_name) if (name:_name) UTILITY_TIER
#define VALUE_S_TIER (_name) if (name:_name) S_TIER
#define VALUE_A_TIER (_name) if (name:_name) A_TIER
#define VALUE_B_TIER (_name) if (name:_name) B_TIER
#define VALUE_C_TIER (_name) if (name:_name) C_TIER
#define VALUE_D_TIER (_name) if (name:_name) D_TIER
#define VALUE_E_TIER (_name) if (name:_name) E_TIER
#define VALUE_f_TIER (_name) if (name:_name) f_TIER

#define MASTER_CLUES(_name) if (name:_name)   { COLOR3("ff9B3026", KHAKI60) }
#define ELITE_CLUES(_name) if (name:_name)    { COLOR3("ffBDA518", KHAKI60) }
#define HARD_CLUES(_name) if (name:_name)     { COLOR3("ff833798", KHAKI60) }
#define MEDIUM_CLUES(_name) if (name:_name)   { COLOR3("ff569699", KHAKI60) }
#define EASY_CLUES(_name) if (name:_name)     { COLOR3(DARK_GREEN, KHAKI60) }
#define BEGINNER_CLUES(_name) if (name:_name) { COLOR3(     WHITE, KHAKI60) }

// Testing Block
//VALUE_S_TIER("Magic leaves")
//VALUE_A_TIER("Yew leaves")
//VALUE_B_TIER("Maple leaves")
//VALUE_C_TIER("Willow leaves")
//VALUE_D_TIER("Oak leaves")
//VALUE_E_TIER("Leaves")

//UNIQUE_S_TIER("Shayzien helm (4)")
//UNIQUE_A_TIER("Shayzien platebody (4)")
//UNIQUE_B_TIER("Shayzien greaves (4)")
//UNIQUE_C_TIER("Shayzien Boots (4)")

// Clues
MASTER_CLUES("clue scroll (master)")
ELITE_CLUES("clue scroll (elite)")
HARD_CLUES("clue scroll (hard)")
MEDIUM_CLUES("clue scroll (medium)")
EASY_CLUES("clue scroll (easy)")
BEGINNER_CLUES("clue scroll (beginner)")

MASTER_CLUES("Reward casket (master)")
ELITE_CLUES("Reward casket (elite)")
HARD_CLUES("Reward casket (hard)")
MEDIUM_CLUES("Reward casket (medium)")
EASY_CLUES("Reward casket (easy)")
BEGINNER_CLUES("Reward casket (beginner)")

MASTER_CLUES("Challenge scroll (master)")
ELITE_CLUES("Challenge scroll (elite)")
HARD_CLUES("Challenge scroll (hard)")
MEDIUM_CLUES("Challenge scroll (medium)")
EASY_CLUES("Challenge scroll (easy)")
BEGINNER_CLUES("Challenge scroll (beginner)")

// Clue Keys
ELITE_CLUES("Key (elite)")
MEDIUM_CLUES("Key (medium)")

// Misc Uniques
UNIQUE_S_TIER("*champion scroll")
UNIQUE_B_TIER("Blood shard")
UNIQUE_B_TIER("Dark totem")
UNIQUE_C_TIER("Dark totem top")
UNIQUE_C_TIER("Dark totem base")
UNIQUE_C_TIER("Dark totem middle")
UNIQUE_C_TIER("Ancient shard")

UNIQUE_S_TIER("Infernal Cape")
UNIQUE_S_TIER("Fire Cape")
UNIQUE_S_TIER("Dizana's Quiver*")
UNIQUE_S_TIER("*Max Cape")

UNIQUE_B_TIER("Mossy key")
UNIQUE_B_TIER("Giant key")
VALUE_A_TIER("Hill giant club")

UNIQUE_B_TIER("Ecumenical key")
UNIQUE_C_TIER("Long bone")
UNIQUE_C_TIER("Curved bone")
UNIQUE_C_TIER("Looting bag")

UNIQUE_C_TIER("Unidentified small fossil")
UNIQUE_C_TIER("Unidentified medium fossil")
UNIQUE_C_TIER("Unidentified large fossil")
UNIQUE_C_TIER("Unidentified rare fossil")

TEXT_HIGHLIGHT("Bronze defender", BRONZE)
TEXT_HIGHLIGHT("Iron defender", IRON)
TEXT_HIGHLIGHT("Steel defender", STEEL)
TEXT_HIGHLIGHT("Black defender", BLACK)
TEXT_HIGHLIGHT("Mithril defender", MITHRIL)
TEXT_HIGHLIGHT("Adamant defender", ADAMANT)
TEXT_HIGHLIGHT("Rune defender", RUNITE)
TEXT_HIGHLIGHT("Dragon defender", RED)

// Slayer Uniques
UNIQUE_A_TIER("Brimstone key")
UNIQUE_A_TIER("Jar of*")
UNIQUE_B_TIER("Abyssal head")
UNIQUE_B_TIER("Araxyte head")
UNIQUE_B_TIER("Alchemical hydra heads")
UNIQUE_B_TIER("Kbd heads")
UNIQUE_B_TIER("Cockatrice head")
UNIQUE_B_TIER("Basilisk head")
UNIQUE_B_TIER("Kq head*")
UNIQUE_B_TIER("Dark claw")
UNIQUE_C_TIER("Key master teleport")

// The Gauntlet
UNIQUE_A_TIER("Crystalline bowstring")
UNIQUE_A_TIER("Crystal orb")
UNIQUE_A_TIER("Crystal spike")
UNIQUE_B_TIER("Weapon frame")
VALUE_B_TIER("Teleport crystal")
VALUE_C_TIER("Raw paddlefish")
VALUE_C_TIER("Grym leaf")
VALUE_C_TIER("Crystal ore")
VALUE_C_TIER("Linum tirinum")
VALUE_C_TIER("Phren bark")

// Abyssal Sire Uniques
UNIQUE_S_TIER("Unsired")
UNIQUE_B_TIER("Bludgeon claw")
UNIQUE_B_TIER("Bludgeon spine")
UNIQUE_B_TIER("Bludgeon axon")

// Amoxliatl
UNIQUE_A_TIER("*half of key (moon key)")
UNIQUE_C_TIER("Pendant of ates*")

// Araxxor Uniques
RARE_CUSTOM("Araxyte fang", DARK_GREEN, BLACK)
UNIQUE_A_TIER("Noxious pommel")
UNIQUE_A_TIER("Noxious point")
UNIQUE_A_TIER("Noxious blade")

// Hydra
UNIQUE_B_TIER("Hydra's eye")
UNIQUE_B_TIER("Hydra's fang")
UNIQUE_B_TIER("Hydra's heart")

// Desert Treasure 2 Boss Uniques
UNIQUE_S_TIER("Ancient blood ornament kit")
UNIQUE_C_TIER("Chromium ingot")

// Vardorvis
UNIQUE_S_TIER("Ultor vestige")
UNIQUE_S_TIER("Executioner's axe head")
UNIQUE_B_TIER("Strangled tablet")
UNIQUE_C_TIER("Blood quartz")

// Leviathan
UNIQUE_S_TIER("Venator vestige")
UNIQUE_S_TIER("Leviathan's lure")
UNIQUE_B_TIER("Scarred tablet")
UNIQUE_C_TIER("Smoke quartz")

// Whisperer
UNIQUE_S_TIER("Bellator vestige")
UNIQUE_S_TIER("Siren's staff")
UNIQUE_B_TIER("Sirenic tablet")
UNIQUE_C_TIER("Shadow quartz")

// Duke Sucellus
UNIQUE_S_TIER("Magus vestige")
UNIQUE_S_TIER("Eye of the duke")
UNIQUE_B_TIER("Frozen tablet")
UNIQUE_C_TIER("Ice quartz")

// Scurrius
UNIQUE_B_TIER("Scurrius' spine")

// Zulrah
UNIQUE_S_TIER("*mutagen")

// Vorkath
UNIQUE_B_TIER("Vorkath's head")

// Muspah
UNIQUE_C_TIER("Frozen cache")
UNIQUE_C_TIER("Ancient icon")
UNIQUE_C_TIER("Charged Ice")

// Nightmare
UNIQUE_S_TIER("Slepey Tablet")
UNIQUE_C_TIER("Parasitic egg")

// Tormented Demons Supplies
DARK_BG("Smouldering pile of flesh", RED)
DARK_BG("Smouldering gland", CYAN)
DARK_BG("Smouldering heart", MAGENTA)
UNIQUE_C_TIER("Guthixian temple teleport")

// CoX
TEXT_HIGHLIGHT("Overload*", "ff1e88e5")
TEXT_HIGHLIGHT("Prayer enhance*", MAGENTA)
TEXT_HIGHLIGHT("Revitalisation*", "ffe91e63")
TEXT_HIGHLIGHT("Xeric's aid*", YELLOW)

TEXT_HIGHLIGHT("Golpar", "ff18BF8C")
TEXT_HIGHLIGHT("Buchu leaf", "ffAC2315")
TEXT_HIGHLIGHT("Noxifer", "ff7C1ADF")

// ToA
TEXT_HIGHLIGHT("Ambrosia*", "ffE3ECE3")
TEXT_HIGHLIGHT("Liquid adrenaline*", "ff35C6D7")
TEXT_HIGHLIGHT("Nectar*", YELLOW)
TEXT_HIGHLIGHT("Tears of elidinis*", "ffe91e63")

// Potions
TEXT_HIGHLIGHT("Super restore*", "ffe91e63")
TEXT_HIGHLIGHT("Saradomin brew*", YELLOW)
TEXT_HIGHLIGHT("Prayer potion*", "ff59D6AE")
TEXT_HIGHLIGHT("Sanfew serum*", "ffe59e9e")
TEXT_HIGHLIGHT("Super combat potion*", "ff2a9e16")
TEXT_HIGHLIGHT("Divine Super combat potion*", "ff2a9e16")
TEXT_HIGHLIGHT("Ranging potion*", "ff5FB7DA")
TEXT_HIGHLIGHT("Divine Ranging potion*", "ff5FB7DA")
TEXT_HIGHLIGHT("Bastion potion*", "ffdb721c")
TEXT_HIGHLIGHT("Divine Bastion potion*", "ffdb721c")

// Edible Food
COOKED_FOOD("Cooked moonlight antelope")
COOKED_FOOD("Anglerfish")
COOKED_FOOD("Manta ray")
COOKED_FOOD("Dark crab")
COOKED_FOOD("Shark")
COOKED_FOOD("Cooked Karambwan")
COOKED_FOOD("Wild pie")
COOKED_FOOD("Monkfish")
COOKED_FOOD("Meat pizza")
COOKED_FOOD("Lobster")

// Misc Valuable/Stackable Items (Comment or remove any you don't want to see under min value)
//VALUE_D_TIER("Dragon bones")
VALUE_D_TIER("Dagannoth bones")
VALUE_D_TIER("Frozen tear")
VALUE_D_TIER("Zulrah's scales")
VALUE_D_TIER("Sunfire splinters")
VALUE_D_TIER("Ancient essence")
VALUE_D_TIER("Granite dust")
VALUE_D_TIER("Crystal shard")

// Tradeable Currencies (Comment or remove any you don't want to see under min value)
VALUE_D_TIER("Mole claw")
VALUE_D_TIER("Mole skin")
VALUE_E_TIER("Archery ticket")
VALUE_E_TIER("Trading sticks")
VALUE_E_TIER("Shantay pass")
VALUE_E_TIER("Ship ticket")
//VALUE_E_TIER("Numulite")

// Untradeable Currencies
VALUE_E_TIER("Abyssal pearls")
VALUE_E_TIER("Anima-infused bark")
VALUE_E_TIER("Agility arena ticket")
VALUE_E_TIER("Barronite shards")
VALUE_E_TIER("Blood money")
VALUE_E_TIER("Brimhaven voucher")
VALUE_E_TIER("Castle wars ticket")
VALUE_E_TIER("Ecto-token")
VALUE_E_TIER("Frog token")
VALUE_E_TIER("Golden nugget")
VALUE_E_TIER("Glistening tear")
VALUE_E_TIER("Hallowed mark")
VALUE_E_TIER("Intelligence")
VALUE_E_TIER("Mark of grace")
VALUE_E_TIER("Mermaid's tear")
VALUE_E_TIER("Minnow")
VALUE_E_TIER("Molch pearl")
VALUE_E_TIER("Nuggets")
VALUE_E_TIER("Paramaya ticket")
VALUE_E_TIER("Rare creature parts")
VALUE_E_TIER("Reward token credits")
VALUE_E_TIER("Stardust")
VALUE_E_TIER("Spirit flakes")
VALUE_E_TIER("Tokkul")
VALUE_E_TIER("Termites")
VALUE_E_TIER("Unidentified minerals")
VALUE_E_TIER("Warrior guild token")
VALUE_E_TIER("Blessed bone shards")
VALUE_E_TIER("Sun-kissed bones")
VALUE_E_TIER("Ecumenical key shard")
VALUE_E_TIER("Pay-dirt")

// Hunter
UTILITY("Box trap")
UTILITY("Rope")
UTILITY("Small fishing rope")

// Hide specific single/un-noted items
HIDE_1("*ashes")
//HIDE_1("Dragon dart")
//HIDE_1("blue dragonhide")
HIDE_1("green dragonhide")
HIDE_1("red dragonhide")
HIDE_1("black dragonhide")

// Herbs (grouped by GE value, remove herbs you want to pickup)
// < 1k
HIDE_1("*Marrentill")
HIDE_1("*Tarromin")
HIDE_1("*Guam leaf")
HIDE_1("*Harralander")

// > 1k
// HIDE_1("*Irit leaf")
// HIDE_1("*Lantadyme")
// HIDE_1("*Dwarf weed")
// HIDE_1("*Avantoe")
// HIDE_1("*Torstol")
// HIDE_1("*Cadantine")
// HIDE_1("*Toadflax")
// HIDE_1("*Kwuarm")

// > 5k
// HIDE_1("*Ranarr weed")
// HIDE_1("*Snapdragon")
// HIDE_1("*Huasca")

// Value Style defaults
if (value:>VALUE_TIER_S) S_TIER
if (value:>VALUE_TIER_A) A_TIER
if (value:>VALUE_TIER_B) B_TIER
if (value:>VALUE_TIER_C) C_TIER
if (value:>VALUE_TIER_D) D_TIER
if (value:>VALUE_TIER_E) E_TIER
if (value:<VALUE_TIER_F) F_TIER

// Catch all to display untradeables
 if (tradeable: false) {
     color = WHITE;
}

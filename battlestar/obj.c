// Copyright (c) 1983 The Regents of the University of California.
// This file is free software, distributed under the BSD license.

#include "extern.h"

//----------------------------------------------------------------------

struct ObjLoc {
    uint16_t	obj:7;
    uint16_t	room:9;
};

//{{{ c_objinfo --------------------------------------------------------

const struct ObjectInfo c_objinfo [NUMOFOBJECTS] = {
    { // 0, KNIFE
	"knife",
	"There is a knife here.",
	1, 1, 0
    },{ // 1, SWORD
	"fine sword",
	"There are an exquisitely crafted sword and scabbard here.",
	5, 5, 0
    },{ // 2, LAND
	NULL,
	NULL,
	0, 0, OBJ_NONOBJ
    },{ // 3, WOODSMAN
	"Woodsman",
	"There is a fierce woodsman here brandishing a heavy mallet.",
	10, 150, OBJ_PERSON
    },{ // 4, TWO_HANDED
	"two-handed sword",
	"There is an unwieldy two-handed sword here.",
	15, 10, 0
    },{ // 5, CLEAVER
	"meat cleaver",
	"There is a bloody meat cleaver here.",
	2, 1, 0
    },{ // 6, BROAD
	"broadsword",
	"A rusty broadsword is lying here.",
	10, 5, 0
    },{ // 7, MAIL
	"coat of mail",
	"There is an ancient coat of finely woven mail here.",
	10, 2, 0
    },{ // 8, HELM
	"plumed helmet",
	"There is a old dented helmet with an ostrich plume here.",
	3, 2, 0
    },{ // 9, SHIELD
	"shield",
	"There is a shield of some native tribe here.",
	5, 1, 0
    },{ // 10, MAID
	"maid's body",
	"The maid's body is lying here. She was murdered!",
	50, 5, 0
    },{ // 11, STARFIGHTER
	"starfighter",
	"There is a starfighter ready for launch here.",
	2500, 10, 0
    },{ // 12, LAMPON
	"lantern",
	"A kerosene lantern is burning luridly here.",
	2, 1, 0
    },{ // 13, SHOES
	"shoes",
	"An old pair of shoes has been discarded here.",
	1, 1, OBJ_PLURAL
    },{ // 14, DRENIAN
	NULL,
	NULL,
	100, 10, OBJ_NONOBJ
    },{ // 15, PAJAMAS
	"pajamas",
	"There is a pair of pajamas here.",
	1, 1, OBJ_PLURAL
    },{ // 16, ROBE
	"robe",
	"A kingly robe of royal purple and spun gold is draped here.",
	2, 1, 0
    },{ // 17, AMULET
	"amulet",
	"There is a strange golden amulet on the floor here.",
	1, 1, OBJ_AN
    },{ // 18, MEDALION
	"medallion",
	"A medallion of solid gold shimmers on the ground nearby.",
	1, 1, 0
    },{ // 19, TALISMAN
	"talisman",
	"A talisman of gold is lying here.",
	1, 1, 0
    },{ // 20, DEADWOOD
	"woodsman's body",
	"A dead woodsman has fallen here. He was savagely murdered.",
	60, 7, 0
    },{ // 21, MALLET
	"wooden mallet",
	"A heavy wooden mallet lies nearby.",
	10, 5, 0
    },{ // 22, LASER
	"laser",
	"There is a laser pistol here.",
	5, 4, 0
    },{ // 23, BATHGOD
	NULL,
	"A flower-like young goddess is bathing in the hot mineral pools.\n"
	"She is watching you, but continues to steep and sing softly.",
	0, 0, OBJ_PERSON
    },{ // 24, GODDESS
	NULL,
	"The goddess is reclining on a bed of ferns and studying you intently.",
	50, 0, OBJ_PERSON
    },{ // 25, GRENADE
	"grenade",
	"There is a grenade here.",
	5, 1, 0
    },{ // 26, CHAIN
	"chain",
	"There is a length of heavy chain here.",
	15, 1, 0
    },{ // 27, ROPE
	"rope",
	"There is a stout rope here.",
	5, 1, 0
    },{ // 28, LEVIS
	"levis",
	"There is a pair of Levi's here.",
	1, 1, OBJ_PLURAL
    },{ // 29, MACE
	"mace",
	"A bloody mace is lying on the ground here.",
	20, 5, 0
    },{ // 30, SHOVEL
	"shovel",
	"There is a shovel here.",
	10, 4, 0
    },{ // 31, HALBERD
	"halberd",
	"A long, sharp halberd is propped up here.",
	10, 4, 0
    },{ // 32, COMPASS
	"compass",
	"There is a compass here.",
	0, 1, 0
    },{ // 33, CRASH
	NULL,
	"Wreckage and smoldering debris from a crash litter the ground here.",
	0, 0, 0
    },{ // 34, ELF
	"Elf",
	"A woodland Elf armed with a shield and deadly halberd lunges toward you!",
	0, 0, OBJ_AN| OBJ_PERSON
    },{ // 35, FOOT
	NULL,
	"I think I hear footsteps behind us.",
	0, 0, OBJ_NONOBJ
    },{ // 36, COINS
	"coins",
	"There are a few coins here.",
	1, 1, OBJ_PLURAL
    },{ // 37, MATCHES
	"match book",
	"There are some matches here.",
	0, 0, 0
    },{ // 38, MAN
	NULL,
	"An unctuous man in a white suit and a dwarf are standing here.",
	0, 0, OBJ_PERSON
    },{ // 39, PAPAYAS
	"papayas",
	"There are some ripe papayas here.",
	1, 1, OBJ_PLURAL
    },{ // 40, PINEAPPLE
	"pineapple",
	"There is a ripe pineapple here.",
	1, 1, 0
    },{ // 41, KIWI
	"kiwi",
	"There are some kiwi fruit here.",
	1, 1, 0
    },{ // 42, COCONUTS
	"coconuts",
	"There are some coconuts here.",
	2, 3, OBJ_PLURAL
    },{ // 43, MANGO
	"mango",
	"There is a ripe mango here.",
	1, 1, 0
    },{ // 44, RING
	"ring",
	"There is a sparkling diamond ring here.",
	0, 0, 0
    },{ // 45, POTION
	"potion",
	"There is a colorful pink potion in a small crystal vial here.",
	0, 0, 0
    },{ // 46, BRACELET
	"bracelet",
	"A gold bracelet is on the ground here.",
	0, 1, 0
    },{ // 47, GIRL
	NULL,
	"A swarthy woman with stern features pulls you aside from the crowd,\n"
	"'I must talk to you -- but not here. Meet me at midnight in the gardens.'",
	0, 0, OBJ_PERSON
    },{ // 48, GIRLTALK
	NULL,
	"The swarthy woman has been awaiting you anxiously. 'I must warn you that the\n"
	"Island has anticipated your Quest. You will not be welcomed. The Darkness is\n"
	"strong where you must search. Seek not the shadows save only at night, for\n"
	"then are they the weakest. In the mountains far from here a canyon winds\n"
	"with ferns and streams and forgotten vines. There you must go. Take this rope.'",
	0, 0, OBJ_PERSON
    },{ // 49, DARK_LORD
	"Dark Lord",
	"Out from the shadows a figure leaps! His black cape swirls around, and he\n"
	"holds a laser sword at your chest. 'So, you have come to fulfill the Quest.\n"
	"Ha! Your weapons are no match for me!'",
	0, 0, OBJ_PERSON
    },{ // 50, TIMER
	NULL,
	"An old-timer with one eye missing and no money for a drink sits at the bar.",
	100, 10, OBJ_PERSON
    },{ // 51, TIMER1
	NULL,
	"You are flying through an asteroid field!",
	0, 0, OBJ_NONOBJ
    },{ // 52, TIMER2
	NULL,
	"A planet is nearby.",
	0, 0, OBJ_NONOBJ
    },{ // 53, CHAR
	NULL,
	"The ground is charred here.",
	0, 0, OBJ_NONOBJ
    },{ // 54, BOMB
	"warhead",
	"There is a thermonuclear warhead here.",
	55, 7, 0
    },{ // 55, NATIVE_GIRL
	NULL,
	"A native girl is sitting here.",
	45, 8, OBJ_PERSON
    },{ // 56, HORSE
	"stallion",
	"A gorgeous white stallion is standing here.",
	100, 10, 0
    },{ // 57, CAR
	"car",
	"The keys are in the ignition.",
	2000, 10, 0
    },{ // 58, POT
	"pot of jewels",
	"A pot of pearls and jewels is sitting here.",
	30, 3, 0
    },{ // 59, BAR
	"bar of gold",
	"A bar of solid gold is here.",
	20, 1, 0
    },{ // 60, BLOCK
	"diamond block",
	"There is a 10 kilogram diamond block here.",
	10, 2, 0
    }
};

//}}}-------------------------------------------------------------------

DECLARE_VECTOR_TYPE (ObjVec, struct ObjLoc);

static VECTOR (struct ObjVec, s_objects);

//----------------------------------------------------------------------

void cleanup_objects (void)
{
    vector_deallocate (&s_objects);
}

bool object_is_at (enum ObjectId oid, uint16_t l)
{
    vector_foreach (const struct ObjLoc, o, s_objects)
	if (o->obj == oid && o->room == l)
	    return true;
    return false;
}

void create_object_at (enum ObjectId oid, uint16_t l)
{
    if (object_is_at (oid, l))
	return; // already here
    struct ObjLoc* o = vector_emplace_back (&s_objects);
    o->obj = oid;
    o->room = l;
}

void remove_object_from (enum ObjectId oid, uint16_t l)
{
    for (size_t i = 0; i < s_objects.size; ++i)
	if (s_objects.d[i].obj == oid && s_objects.d[i].room == l)
	    vector_erase (&s_objects, i--);
}

unsigned count_objects_at (uint16_t l)
{
    unsigned n = 0;
    vector_foreach (const struct ObjLoc, o, s_objects)
	if (o->room == l)
	    ++n;
    return n;
}

void printobjs (void)
{
    printf("\n");
    for (unsigned n = 0; n < NUMOFOBJECTS; ++n)
	if (object_is_at (n, position) && c_objinfo[n].desc)
	    puts (c_objinfo[n].desc);
}

// Converts day to night and vice versa.
// Day objects are permanent. Night objects are added at dusk, and subtracted at dawn.
void convert (enum EDayOrNight tothis)
{
//{{{ c_nightobjs
static const struct ObjLoc c_nightobjs[] = {
    { DRENIAN,		68	},
    { KIWI,		92	},
    { LAMPON,		92	},
    { MAN,		92	},
    { MANGO,		92	},
    { NATIVE_GIRL,		92	},
    { PAPAYAS,		92	},
    { PINEAPPLE,	92	},
    { PAPAYAS,		DOCK	},
    { ELF,		113	},
    { HALBERD,		113	},
    { SHIELD,		113	},
    { ELF,		124	},
    { HALBERD,		124	},
    { SHIELD,		124	},
    { ELF,		SECRET_THICKET	},
    { HALBERD,		SECRET_THICKET	},
    { SHIELD,		SECRET_THICKET	},
    { SHOVEL,		SECRET_THICKET	},
    { ELF,		161	},
    { HALBERD,		161	},
    { SHIELD,		161	},
    { DEADWOOD,		168	},
    { MALLET,		168	},
    { WOODSMAN,		168	},
    { ELF,		169	},
    { HALBERD,		169	},
    { SHIELD,		169	},
    { DEADWOOD,		170	},
    { MALLET,		170	},
    { WOODSMAN,		170	},
    { LAMPON,		181	},
    { ELF,		182	},
    { HALBERD,		182	},
    { SHIELD,		182	},
    { ELF,		198	},
    { HALBERD,		198	},
    { SHIELD,		198	},
    { ELF,		212	},
    { HALBERD,		212	},
    { SHIELD,		212	},
    { DEADWOOD,		216	},
    { ELF,		216	},
    { HALBERD,		216	},
    { MALLET,		216	},
    { SHIELD,		216	},
    { WOODSMAN,		216	},
    { PAJAMAS,		BUNGALOW_BEDROOM },
    { ELF,		226	},
    { HALBERD,		226	},
    { SHIELD,		226	},
    { ELF,		228	},
    { HALBERD,		228	},
    { SHIELD,		228	},
    { NATIVE_GIRL,		235	},
    { LAMPON,		236	},
    { FOOT,		249	},
    { FOOT,		250	}
};
//}}}-------------------------------------------------------------------
    if (tothis == TONIGHT) {
	set_game_state (IS_NIGHT);
	for (unsigned i = 0; i < ArraySize(c_nightobjs); ++i)
	    create_object_at (c_nightobjs[i].obj, c_nightobjs[i].room);
    } else {
	clear_game_state (IS_NIGHT);
	for (unsigned i = 0; i < ArraySize(c_nightobjs); ++i)
	    remove_object_from (c_nightobjs[i].obj, c_nightobjs[i].room);
    }
}

void place_default_objects (void)
{
//{{{ c_dayobjs
static const struct ObjLoc c_dayobjs[] = {
    { STARFIGHTER,	STARFIGHTER_ROOM },
    { ROBE,		STATEROOM_CLOSET },
    { COINS,		11		},
    { AMULET,		AMULET_ROOM	},
    { BOMB,		19		},
    { LASER,		LASER_ROOM	},
    { KNIFE,		21		},
    { MAID,		21		},
    { MATCHES,		24		},
    { GRENADE,		26		},
    { CLEAVER,		KITCHEN_DOOR	},
    { KNIFE,		KITCHEN_DOOR	},
    { DRENIAN,		36	},
    { TIMER1,		48	},
    { DRENIAN,		49	},
    { TIMER1,		51	},
    { TIMER1,		59	},
    { DRENIAN,		64	},
    { TIMER2,		65	},
    { TIMER2,		66	},
    { LAND,		70	},
    { LAND,		71	},
    { LAND,		72	},
    { LAND,		73	},
    { LAND,		74	},
    { LAND,		75	},
    { LAND,		76	},
    { LAND,		77	},
    { LAND,		78	},
    { LAND,		79	},
    { LAND,		81	},
    { LAND,		82	},
    { LAND,		83	},
    { LAND,		84	},
    { LAND,		85	},
    { LAND,		86	},
    { LAND,		87	},
    { LAND,		88	},
    { LAND,		90	},
    { GIRL,		DOCK	},
    { MAN,		DOCK	},
    { LAND,		95	},
    { LAND,		96	},
    { LAND,		97	},
    { LAND,		99	},
    { LAND,		100	},
    { LAND,		104	},
    { PAPAYAS,		109	},
    { PINEAPPLE,	110	},
    { KIWI,		111	},
    { COCONUTS,		112	},
    { BATHGOD,		POOLS	},
    { BRACELET,		130	},
    { SHOVEL,		137	},
    { BROAD,		142	},
    { ELF,		146	},
    { HALBERD,		146	},
    { SHIELD,		146	},
    { MANGO,		149	},
    { COCONUTS,		150	},
    { COCONUTS,		151	},
    { PINEAPPLE,	152	},
    { COCONUTS,		153	},
    { PINEAPPLE,	154	},
    { MACE,		164	},
    { NATIVE_GIRL,	167	},
    { DEADWOOD,		172	},
    { MALLET,		172	},
    { WOODSMAN,		172	},
    { POTION,		190	},
    { TWO_HANDED,	190	},
    { COCONUTS,		192	},
    { COCONUTS,		204	},
    { COCONUTS,		207	},
    { COCONUTS,		209	},
    { COCONUTS,		213	},
    { SHOES,		216	},
    { LEVIS,		BUNGALOW_BEDROOM	},
    { RING,		BUNGALOW_BEDROOM	},
    { MATCHES,		235	},
    { TIMER,		235	},
    { HORSE,		236	},
    { CAR,		237	},
    { CHAIN,		237	},
    { COMPASS,		237	},
    { COCONUTS,		240	},
    { GRENADE,		256	},
    { HELM,		258	},
    { MAIL,		258	},
    { COINS,		260	},
    { SWORD,		260	},
    { DARK_LORD,	266	},
    { LAMPON,		GODDESS_THRONE_ROOM	},
    { BAR,		FINAL	},
    { BLOCK,		FINAL	},
    { POT,		FINAL	}
};
//}}}-------------------------------------------------------------------
    for (unsigned i = 0; i < ArraySize(c_dayobjs); ++i)
	create_object_at (c_dayobjs[i].obj, c_dayobjs[i].room);
}

void restore_saved_objects (FILE* fp)
{
    uint16_t nobjs;
    fread (&nobjs, sizeof(nobjs), 1, fp);
    if (nobjs > 3*NUMOFOBJECTS) {
	puts ("Error: saved file is corrupt");
	return;
    }
    vector_clear (&s_objects);
    vector_resize (&s_objects, nobjs);
    fread (vector_begin(&s_objects), sizeof(s_objects.d[0]), nobjs, fp);
}

void save_objects (FILE* fp)
{
    uint16_t nobjs = s_objects.size;
    fwrite (vector_begin(&s_objects), sizeof(s_objects.d[0]), nobjs, fp);
}

#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 89
    // Alignment: 4
    // Size: 0x4
    enum class DotaPseudoRandomType : std::uint32_t
    {
        DOTA_PSEUDO_RANDOM_NONE = 0x0,
        DOTA_PSEUDO_RANDOM_MAGNUS_SHARD = 0x1,
        DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_CRIT = 0x2,
        DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_DAGGER = 0x3,
        DOTA_PSEUDO_RANDOM_PHANTOMLANCER_JUXTAPOSE = 0x4,
        DOTA_PSEUDO_RANDOM_TINY_CRAGGY = 0x5,
        DOTA_PSEUDO_RANDOM_COLD_REBUKE = 0x6,
        DOTA_PSEUDO_RANDOM_WOLF_CRIT = 0x7,
        DOTA_PSEUDO_RANDOM_AXE_HELIX = 0x8,
        DOTA_PSEUDO_RANDOM_AXE_HELIX_ATTACK = 0x9,
        DOTA_PSEUDO_RANDOM_LEGION_MOMENT = 0xa,
        DOTA_PSEUDO_RANDOM_SLARDAR_BASH = 0xb,
        DOTA_PSEUDO_RANDOM_OD_ESSENCE = 0xc,
        DOTA_PSEUDO_RANDOM_DROW_MARKSMANSHIP = 0xd,
        DOTA_PSEUDO_RANDOM_OGRE_MAGI_FIREBLAST = 0xe,
        DOTA_PSEUDO_RANDOM_OGRE_ITEM_MULTICAST = 0xf,
        DOTA_PSEUDO_RANDOM_SPIRITBREAKER_GREATERBASH = 0x10,
        DOTA_PSEUDO_RANDOM_LONE_DRUID_ENTANGLE = 0x11,
        DOTA_PSEUDO_RANDOM_FACELESS_BASH = 0x12,
        DOTA_PSEUDO_RANDOM_FACELESS_EVADE_SPELL = 0x13,
        DOTA_PSEUDO_RANDOM_FACELESS_EVADE_ATTACK = 0x14,
        DOTA_PSEUDO_RANDOM_FACELESS_VOID_BACKTRACK = 0x15,
        DOTA_PSEUDO_RANDOM_BREWMASTER_CRIT = 0x16,
        DOTA_PSEUDO_RANDOM_BREWMASTER_CINDER_BREW = 0x17,
        DOTA_PSEUDO_RANDOM_SNIPER_HEADSHOT = 0x18,
        DOTA_PSEUDO_RANDOM_ATOS = 0x19,
        DOTA_PSEUDO_RANDOM_JUGG_CRIT = 0x1a,
        DOTA_PSEUDO_RANDOM_DAZZLE_SCEPTER = 0x1b,
        DOTA_PSEUDO_RANDOM_CHAOS_CRIT = 0x1c,
        DOTA_PSEUDO_RANDOM_LYCAN_CRIT = 0x1d,
        DOTA_PSEUDO_RANDOM_TUSK_CRIT = 0x1e,
        DOTA_PSEUDO_RANDOM_CM_FREEZING_FIELD = 0x1f,
        DOTA_PSEUDO_RANDOM_GENERIC_BASHER = 0x20,
        DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT = 0x21,
        DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT_MORTAL = 0x22,
        DOTA_PSEUDO_RANDOM_ITEM_GREATERCRIT = 0x23,
        DOTA_PSEUDO_RANDOM_ITEM_LESSERCRIT = 0x24,
        DOTA_PSEUDO_RANDOM_ITEM_BASHER = 0x25,
        DOTA_PSEUDO_RANDOM_ITEM_SOLAR_CREST = 0x26,
        DOTA_PSEUDO_RANDOM_ITEM_JAVELIN_ACCURACY = 0x27,
        DOTA_PSEUDO_RANDOM_ITEM_TRIDENT = 0x28,
        DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL = 0x29,
        DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL_BLOCK = 0x2a,
        DOTA_PSEUDO_RANDOM_ITEM_STOUT = 0x2b,
        DOTA_PSEUDO_RANDOM_ITEM_VANGUARD = 0x2c,
        DOTA_PSEUDO_RANDOM_ITEM_CRIMSON_GUARD = 0x2d,
        DOTA_PSEUDO_RANDOM_ITEM_PMS = 0x2e,
        DOTA_PSEUDO_RANDOM_ITEM_HALBRED_MAIM = 0x2f,
        DOTA_PSEUDO_RANDOM_ITEM_SANGEYASHA_MAIM = 0x30,
        DOTA_PSEUDO_RANDOM_ITEM_SANGEKAYA_MAIM = 0x31,
        DOTA_PSEUDO_RANDOM_ITEM_SANGE_MAIM = 0x32,
        DOTA_PSEUDO_RANDOM_ITEM_BUTTERFLY = 0x33,
        DOTA_PSEUDO_RANDOM_ITEM_MAELSTROM = 0x34,
        DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR = 0x35,
        DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR_STATIC = 0x36,
        DOTA_PSEUDO_RANDOM_ITEM_MKB = 0x37,
        DOTA_PSEUDO_RANDOM_ITEM_SILVER_EDGE = 0x38,
        DOTA_PSEUDO_RANDOM_ITEM_NAGINATA = 0x39,
        DOTA_PSEUDO_RANDOM_TROLL_BASH = 0x3a,
        DOTA_PSEUDO_RANDOM_RIKI_SMOKE_SCREEN = 0x3b,
        DOTA_PSEUDO_RANDOM_CHAOS_DOUBLE_CRIT = 0x3c,
        DOTA_PSEUDO_RANDOM_CHAOS_TRIPLE_CRIT = 0x3d,
        DOTA_PSEUDO_RANDOM_GENERIC_EVASION = 0x3e,
        DOTA_PSEUDO_RANDOM_GENERIC_HEIGHT_MISS = 0x3f,
        DOTA_PSEUDO_RANDOM_GENERIC_MISS = 0x40,
        DOTA_PSEUDO_RANDOM_ARMADILLO_HEARTPIERCER = 0x41,
        DOTA_PSEUDO_RANDOM_MARS_SHIELD = 0x42,
        DOTA_PSEUDO_RANDOM_CHAOS_KNIGHT_INNATE_REFUND = 0x43,
        DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER1 = 0x44,
        DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER2 = 0x45,
        DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER3 = 0x46,
        DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER4 = 0x47,
        DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER5 = 0x48,
        DOTA_PSEUDO_RANDOM_MARS_BULWARK = 0x49,
        DOTA_PSEUDO_RANDOM_MUERTA_GUNSLINGER = 0x4a,
        DOTA_PSEUDO_RANDOM_TROLL_FERVOR_SHARD = 0x4b,
        DOTA_PSEUDO_RANDOM_SNAPFIRE_GLANCING = 0x4c,
        DOTA_PSEUDO_RANDOM_PANGOLIER_PARRY = 0x4d,
        DOTA_PSEUDO_RANDOM_HOODWINK_REDIRECT = 0x4e,
        DOTA_PSEUDO_RANDOM_CUSTOM_GENERIC = 0x4f,
        DOTA_PSEUDO_RANDOM_CUSTOM_GAME_1 = 0x50,
        DOTA_PSEUDO_RANDOM_CUSTOM_GAME_2 = 0x51,
        DOTA_PSEUDO_RANDOM_CUSTOM_GAME_3 = 0x52,
        DOTA_PSEUDO_RANDOM_CUSTOM_GAME_4 = 0x53,
        DOTA_PSEUDO_RANDOM_CUSTOM_GAME_5 = 0x54,
        DOTA_PSEUDO_RANDOM_CUSTOM_GAME_6 = 0x55,
        DOTA_PSEUDO_RANDOM_CUSTOM_GAME_7 = 0x56,
        DOTA_PSEUDO_RANDOM_CUSTOM_GAME_8 = 0x57,
        DOTA_PSEUDO_RANDOM_CUSTOM_GAME_9 = 0x58,
    };
};
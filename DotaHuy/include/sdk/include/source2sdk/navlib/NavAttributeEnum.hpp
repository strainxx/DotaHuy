#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::navlib
{
    // Enumerator count: 20
    // Alignment: 4
    // Size: 0x4
    enum class NavAttributeEnum : std::uint32_t
    {
        NAV_MESH_AVOID = 0x80,
        NAV_MESH_STAIRS = 0x1000,
        NAV_MESH_NON_ZUP = 0x8000,
        NAV_MESH_SHORT_HEIGHT = 0x10000,
        NAV_MESH_NON_ZUP_TRANSITION = 0x20000,
        NAV_MESH_CROUCH = 0x10000,
        NAV_MESH_JUMP = 0x2,
        NAV_MESH_PRECISE = 0x4,
        NAV_MESH_NO_JUMP = 0x8,
        NAV_MESH_STOP = 0x10,
        NAV_MESH_RUN = 0x20,
        NAV_MESH_WALK = 0x40,
        NAV_MESH_TRANSIENT = 0x100,
        NAV_MESH_DONT_HIDE = 0x200,
        NAV_MESH_STAND = 0x400,
        NAV_MESH_NO_HOSTAGES = 0x800,
        NAV_MESH_NO_MERGE = 0x2000,
        NAV_MESH_OBSTACLE_TOP = 0x4000,
        NAV_ATTR_FIRST_GAME_INDEX = 0x13,
        NAV_ATTR_LAST_INDEX = 0x1f,
    };
};
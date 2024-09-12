#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Silver_Edge_WindWalk : public server::CDOTA_Modifier_Invisible
    {
    public:
        int32_t windwalk_bonus_damage; // 0x16f8        
        int32_t windwalk_movement_speed; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Silver_Edge_WindWalk because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Silver_Edge_WindWalk) == 0x1700);
};

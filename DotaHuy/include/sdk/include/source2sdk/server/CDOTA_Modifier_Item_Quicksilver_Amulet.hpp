#pragma once
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
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
    class CDOTA_Modifier_Item_Quicksilver_Amulet : public server::CDOTA_Buff_Item
    {
    public:
        int32_t base_attack; // 0x16e8        
        int32_t bonus_attack; // 0x16ec        
        int32_t base_movement; // 0x16f0        
        int32_t bonus_movement; // 0x16f4        
        int32_t projectile_increase; // 0x16f8        
        int32_t anim_increase; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Quicksilver_Amulet because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Quicksilver_Amulet) == 0x1700);
};

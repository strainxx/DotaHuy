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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dark_Willow_Pixie_Dust : public server::CDOTA_Buff_Item
    {
    public:
        int32_t hp_regen; // 0x16e8        
        int32_t mana_regen_amp; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dark_Willow_Pixie_Dust because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dark_Willow_Pixie_Dust) == 0x16f0);
};

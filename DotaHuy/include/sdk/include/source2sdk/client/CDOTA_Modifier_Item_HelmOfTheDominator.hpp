#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_HelmOfTheDominator : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_stats; // 0x16e8        
        int32_t bonus_armor; // 0x16ec        
        float bonus_regen; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_HelmOfTheDominator because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_HelmOfTheDominator) == 0x16f8);
};

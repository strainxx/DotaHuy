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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Ethereal_Blade : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_strength; // 0x16e8        
        int32_t bonus_agility; // 0x16ec        
        int32_t bonus_intellect; // 0x16f0        
        int32_t bonus_mana; // 0x16f4        
        float bonus_mana_regen; // 0x16f8        
        int32_t bonus_cast_range; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Ethereal_Blade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Ethereal_Blade) == 0x1700);
};
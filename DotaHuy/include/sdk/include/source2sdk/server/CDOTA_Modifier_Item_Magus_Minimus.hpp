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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Magus_Minimus : public server::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_agility; // 0x16e8        
        int32_t bonus_intellect; // 0x16ec        
        float damage_per_burn; // 0x16f0        
        int32_t feedback_mana_burn; // 0x16f4        
        int32_t feedback_mana_burn_illusion_melee; // 0x16f8        
        int32_t feedback_mana_burn_illusion_ranged; // 0x16fc        
        float aura_radius; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Magus_Minimus because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Magus_Minimus) == 0x1708);
};

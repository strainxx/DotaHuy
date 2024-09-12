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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Disperser : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_agility; // 0x16e8        
        int32_t bonus_intellect; // 0x16ec        
        int32_t bonus_attack_speed; // 0x16f0        
        int32_t bonus_damage; // 0x16f4        
        float bonus_mana_regen; // 0x16f8        
        float damage_per_burn; // 0x16fc        
        int32_t feedback_mana_burn; // 0x1700        
        int32_t feedback_mana_burn_illusion_melee; // 0x1704        
        int32_t feedback_mana_burn_illusion_ranged; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Disperser because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Disperser) == 0x1710);
};
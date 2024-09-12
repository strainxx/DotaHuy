#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Silencer_GlaivesOfWisdom_Debuff_Bonus : public client::CDOTA_Buff
    {
    public:
        float m_flDamage; // 0x16e8        
        int32_t movement_speed; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Silencer_GlaivesOfWisdom_Debuff_Bonus because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Silencer_GlaivesOfWisdom_Debuff_Bonus) == 0x16f0);
};
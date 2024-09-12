#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_DarkWillow_ShadowRealm_Aura_Debuff : public client::CDOTA_Buff
    {
    public:
        float max_damage_duration; // 0x16e8        
        float aura_damage_pct; // 0x16ec        
        float m_flDamageScale; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_ShadowRealm_Aura_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkWillow_ShadowRealm_Aura_Debuff) == 0x16f8);
};

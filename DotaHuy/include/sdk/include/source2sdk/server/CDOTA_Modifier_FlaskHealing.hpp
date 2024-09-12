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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_FlaskHealing : public client::CDOTA_Buff
    {
    public:
        int32_t health_regen; // 0x16e8        
        int32_t break_on_hero_damage; // 0x16ec        
        float m_fHealingDone; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4]; // 0x16f4
        CUtlString m_sAbilityClassname; // 0x16f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_FlaskHealing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_FlaskHealing) == 0x1700);
};
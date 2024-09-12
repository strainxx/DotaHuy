#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Modifier_Abaddon_Withering_Mist_Debuff : public client::CDOTA_Buff
    {
    public:
        int32_t heal_reduction_pct; // 0x16e8        
        int32_t hp_threshold_pct; // 0x16ec        
        client::ParticleIndex_t m_nFXIndex; // 0x16f0        
        bool bUnderThreshold; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Abaddon_Withering_Mist_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Abaddon_Withering_Mist_Debuff) == 0x16f8);
};
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
    class CDOTA_Modifier_Treant_NaturesGrasp_Latch_Thinker : public client::CDOTA_Buff
    {
    public:
        float latch_range; // 0x16e8        
        int32_t latch_vision; // 0x16ec        
        float initial_latch_delay; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x8]; // 0x16f4
        bool m_bBonus; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Treant_NaturesGrasp_Latch_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Treant_NaturesGrasp_Latch_Thinker) == 0x1700);
};

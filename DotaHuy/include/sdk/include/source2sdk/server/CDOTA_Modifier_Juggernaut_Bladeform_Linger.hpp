#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Juggernaut_Bladeform_Linger : public client::CDOTA_Buff
    {
    public:
        float agi_bonus_pct_per_stack; // 0x16e8        
        int32_t max_stacks; // 0x16ec        
        client::ParticleIndex_t m_nFXIndex; // 0x16f0        
        float movement_speed_pct_per_stack; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_Bladeform_Linger because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Juggernaut_Bladeform_Linger) == 0x16f8);
};

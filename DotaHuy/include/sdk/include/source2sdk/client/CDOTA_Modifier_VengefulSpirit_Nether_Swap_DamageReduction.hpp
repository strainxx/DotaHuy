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
    class CDOTA_Modifier_VengefulSpirit_Nether_Swap_DamageReduction : public client::CDOTA_Buff
    {
    public:
        float damage_reduction; // 0x16e8        
        client::ParticleIndex_t nFXIndex; // 0x16ec        
        float damage; // 0x16f0        
        int32_t m_nDamageAbsorbed; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VengefulSpirit_Nether_Swap_DamageReduction because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VengefulSpirit_Nether_Swap_DamageReduction) == 0x16f8);
};

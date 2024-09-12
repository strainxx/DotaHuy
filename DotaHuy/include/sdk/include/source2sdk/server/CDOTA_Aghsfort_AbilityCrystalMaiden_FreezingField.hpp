#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Aghsfort_AbilityCrystalMaiden_FreezingField : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nWarningFX; // 0x5a0        
        client::ParticleIndex_t m_nRadiusFX; // 0x5a4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Aghsfort_AbilityCrystalMaiden_FreezingField because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Aghsfort_AbilityCrystalMaiden_FreezingField) == 0x5a8);
};
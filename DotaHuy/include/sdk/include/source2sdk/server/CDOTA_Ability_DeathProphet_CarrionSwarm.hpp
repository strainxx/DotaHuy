#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_DeathProphet_CarrionSwarm : public server::CDOTABaseAbility
    {
    public:
        int32_t start_radius; // 0x5a0        
        int32_t end_radius; // 0x5a4        
        entity2::GameTime_t m_fStartTime; // 0x5a8        
        float m_fTotalTime; // 0x5ac        
        int32_t m_nProjectileHandle; // 0x5b0        
        client::ParticleIndex_t m_nFXIndex; // 0x5b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_DeathProphet_CarrionSwarm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_DeathProphet_CarrionSwarm) == 0x5b8);
};

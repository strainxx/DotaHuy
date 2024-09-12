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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Seasonal_TI9_Shovel : public server::CDOTABaseAbility
    {
    public:
        Vector m_vChannelPos; // 0x5a0        
        bool m_bIsUnderwater; // 0x5ac        
        [[maybe_unused]] std::uint8_t pad_0x5ad[0x3]; // 0x5ad
        client::ParticleIndex_t m_nPhaseStartFXIndex; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Seasonal_TI9_Shovel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Seasonal_TI9_Shovel) == 0x5b8);
};

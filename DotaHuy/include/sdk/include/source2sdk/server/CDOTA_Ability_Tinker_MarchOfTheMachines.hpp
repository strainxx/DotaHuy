#pragma once
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
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Tinker_MarchOfTheMachines : public server::CDOTABaseAbility
    {
    public:
        int32_t splash_radius; // 0x5a0        
        int32_t damage; // 0x5a4        
        int32_t heal_duration; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tinker_MarchOfTheMachines because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tinker_MarchOfTheMachines) == 0x5b0);
};
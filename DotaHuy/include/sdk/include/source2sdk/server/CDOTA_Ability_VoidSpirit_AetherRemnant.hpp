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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_VoidSpirit_AetherRemnant : public server::CDOTABaseAbility
    {
    public:
        int32_t start_radius; // 0x5a0        
        int32_t end_radius; // 0x5a4        
        int32_t remnant_watch_distance; // 0x5a8        
        int32_t projectile_speed; // 0x5ac        
        [[maybe_unused]] std::uint8_t pad_0x5b0[0x8]; // 0x5b0
        Vector m_vDashPosition; // 0x5b8        
        Vector m_vFacePosition; // 0x5c4        
        Vector m_vEndpoint; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AetherRemnant because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_VoidSpirit_AetherRemnant) == 0x5e0);
};

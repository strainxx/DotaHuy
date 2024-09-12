#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Creep.hpp"
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
    // Size: 0x1848
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Brewmaster_PrimalVoid : public server::CDOTA_BaseNPC_Creep
    {
    public:
        client::ParticleIndex_t m_nFXAmbient; // 0x1840        
        [[maybe_unused]] std::uint8_t pad_0x1844[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Brewmaster_PrimalVoid because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Brewmaster_PrimalVoid) == 0x1848);
};
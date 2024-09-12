#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Skywrath_Mage_Shield_Barrier : public client::CDOTA_Buff
    {
    public:
        int32_t m_nDamageAbsorbed; // 0x16e8        
        float damage_barrier_base; // 0x16ec        
        float damage_barrier_per_level; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Skywrath_Mage_Shield_Barrier because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Skywrath_Mage_Shield_Barrier) == 0x16f8);
};

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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Medusa_SplitShot : public client::CDOTA_Buff
    {
    public:
        int32_t damage_modifier; // 0x16e8        
        int32_t range; // 0x16ec        
        int32_t arrow_count; // 0x16f0        
        int32_t projectile_speed; // 0x16f4        
        client::ParticleIndex_t m_nSplitShotBowFXIndex; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_SplitShot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Medusa_SplitShot) == 0x1738);
};
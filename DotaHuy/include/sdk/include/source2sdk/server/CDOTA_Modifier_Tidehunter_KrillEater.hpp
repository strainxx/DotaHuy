#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tidehunter_KrillEater : public client::CDOTA_Buff
    {
    public:
        int32_t model_scale_base; // 0x16e8        
        int32_t model_scale_per_level; // 0x16ec        
        int32_t attack_range_base; // 0x16f0        
        int32_t attack_range_per_level; // 0x16f4        
        int32_t anchor_smash_radius_base; // 0x16f8        
        int32_t anchor_smash_radius_per_level; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tidehunter_KrillEater because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tidehunter_KrillEater) == 0x1700);
};

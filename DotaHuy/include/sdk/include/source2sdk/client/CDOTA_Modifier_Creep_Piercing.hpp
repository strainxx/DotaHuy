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
    class CDOTA_Modifier_Creep_Piercing : public client::CDOTA_Buff
    {
    public:
        int32_t creep_damage_bonus; // 0x16e8        
        int32_t hero_damage_penalty; // 0x16ec        
        int32_t heavy_damage_penalty; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Creep_Piercing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Creep_Piercing) == 0x16f8);
};

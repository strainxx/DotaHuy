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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Magnataur_Empower : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_damage_pct; // 0x16e8        
        float cleave_damage_pct; // 0x16ec        
        int32_t cleave_starting_width; // 0x16f0        
        int32_t cleave_ending_width; // 0x16f4        
        int32_t cleave_distance; // 0x16f8        
        float self_multiplier; // 0x16fc        
        int32_t secondary_cleave_distance; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Empower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Magnataur_Empower) == 0x1708);
};

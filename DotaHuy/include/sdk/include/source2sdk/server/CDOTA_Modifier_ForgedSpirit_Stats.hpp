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
    class CDOTA_Modifier_ForgedSpirit_Stats : public client::CDOTA_Buff
    {
    public:
        int32_t level; // 0x16e8        
        int32_t armor; // 0x16ec        
        int32_t mana; // 0x16f0        
        float attack_range; // 0x16f4        
        float armor_per_attack; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ForgedSpirit_Stats because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ForgedSpirit_Stats) == 0x1700);
};

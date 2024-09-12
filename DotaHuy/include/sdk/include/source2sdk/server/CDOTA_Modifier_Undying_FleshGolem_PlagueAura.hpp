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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Undying_FleshGolem_PlagueAura : public client::CDOTA_Buff
    {
    public:
        int32_t slow; // 0x16e8        
        int32_t damage; // 0x16ec        
        float tick_rate; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Undying_FleshGolem_PlagueAura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Undying_FleshGolem_PlagueAura) == 0x16f8);
};

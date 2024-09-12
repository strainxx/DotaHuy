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
    class CDOTA_Modifier_Antimage_Persectur : public client::CDOTA_Buff
    {
    public:
        float mana_threshold; // 0x16e8        
        float move_slow_min; // 0x16ec        
        float move_slow_max; // 0x16f0        
        float slow_duration; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Antimage_Persectur because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Antimage_Persectur) == 0x16f8);
};

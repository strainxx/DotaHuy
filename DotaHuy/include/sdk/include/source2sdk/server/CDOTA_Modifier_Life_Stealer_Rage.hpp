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
    class CDOTA_Modifier_Life_Stealer_Rage : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_armor; // 0x16e8        
        int32_t magic_resist; // 0x16ec        
        int32_t debuff_immunity; // 0x16f0        
        int32_t status_resist; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Rage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Life_Stealer_Rage) == 0x16f8);
};

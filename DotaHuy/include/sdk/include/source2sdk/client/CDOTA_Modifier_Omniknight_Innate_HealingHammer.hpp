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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Omniknight_Innate_HealingHammer : public client::CDOTA_Buff
    {
    public:
        int32_t m_nHeal[5]; // 0x16e8        
        int32_t healing_pct_of_damage; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_Innate_HealingHammer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Omniknight_Innate_HealingHammer) == 0x1700);
};

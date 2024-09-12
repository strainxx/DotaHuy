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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff : public client::CDOTA_Buff
    {
    public:
        float aura_damage; // 0x16e8        
        float tick_interval; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Warlock_Golem_Permanent_Immolation_Debuff) == 0x16f0);
};

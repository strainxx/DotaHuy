#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_Invoker_DeafeningBlast_Knockback : public client::CDOTA_Buff
    {
    public:
        float disarm_duration; // 0x16e8        
        Vector m_vPushDir; // 0x16ec        
        entity2::GameTime_t m_flStartTime; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_DeafeningBlast_Knockback because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_DeafeningBlast_Knockback) == 0x1700);
};
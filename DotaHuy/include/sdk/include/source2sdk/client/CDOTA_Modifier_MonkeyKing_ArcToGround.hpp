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
    class CDOTA_Modifier_MonkeyKing_ArcToGround : public client::CDOTA_Buff
    {
    public:
        float leap_speed; // 0x16e8        
        float give_up_distance; // 0x16ec        
        float attackspeed_duration; // 0x16f0        
        float m_flOriginalZDelta; // 0x16f4        
        float m_flZDelta; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_ArcToGround because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MonkeyKing_ArcToGround) == 0x1700);
};

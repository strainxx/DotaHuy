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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Tail_Swipe_AirTime : public client::CDOTA_Buff
    {
    public:
        float m_flStartZ; // 0x16e8        
        float m_flCurTime; // 0x16ec        
        float m_flOldPitch; // 0x16f0        
        QAngle m_qRotation; // 0x16f4        
        int32_t m_nRotations; // 0x1700        
        float m_flDistance; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Tail_Swipe_AirTime because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Tail_Swipe_AirTime) == 0x1708);
};

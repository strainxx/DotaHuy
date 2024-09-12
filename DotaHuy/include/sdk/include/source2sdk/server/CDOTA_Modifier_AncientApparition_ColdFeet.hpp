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
    class CDOTA_Modifier_AncientApparition_ColdFeet : public client::CDOTA_Buff
    {
    public:
        Vector m_vecStartPosition; // 0x16e8        
        int32_t m_nCurrentTick; // 0x16f4        
        float break_distance; // 0x16f8        
        float stun_duration; // 0x16fc        
        int32_t frost_stacks; // 0x1700        
        float aoe; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AncientApparition_ColdFeet because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AncientApparition_ColdFeet) == 0x1708);
};

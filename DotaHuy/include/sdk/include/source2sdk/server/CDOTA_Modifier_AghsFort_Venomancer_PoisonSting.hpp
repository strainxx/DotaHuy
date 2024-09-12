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
    class CDOTA_Modifier_AghsFort_Venomancer_PoisonSting : public client::CDOTA_Buff
    {
    public:
        int32_t m_iDamage; // 0x16e8        
        int32_t movement_speed; // 0x16ec        
        int32_t m_nTicksRemaining; // 0x16f0        
        float m_flAttackDamage; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Venomancer_PoisonSting because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_Venomancer_PoisonSting) == 0x16f8);
};

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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lina_LagunaBlade_Barrier : public client::CDOTA_Buff
    {
    public:
        int32_t m_nDamageAbsorbed; // 0x16e8        
        int32_t barrier_pct; // 0x16ec        
        int32_t applied_damage; // 0x16f0        
        int32_t barrier; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lina_LagunaBlade_Barrier because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lina_LagunaBlade_Barrier) == 0x16f8);
};
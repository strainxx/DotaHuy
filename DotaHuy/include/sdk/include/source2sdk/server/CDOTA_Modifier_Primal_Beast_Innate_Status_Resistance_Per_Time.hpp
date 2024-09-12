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
    class CDOTA_Modifier_Primal_Beast_Innate_Status_Resistance_Per_Time : public client::CDOTA_Buff
    {
    public:
        float upgrade_rate; // 0x16e8        
        int32_t status_resistance_per_upgrade; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Primal_Beast_Innate_Status_Resistance_Per_Time because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Primal_Beast_Innate_Status_Resistance_Per_Time) == 0x16f0);
};

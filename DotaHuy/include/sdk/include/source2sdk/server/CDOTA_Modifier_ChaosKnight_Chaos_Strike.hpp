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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ChaosKnight_Chaos_Strike : public client::CDOTA_Buff
    {
    public:
        float creep_multiplier; // 0x16e8        
        float creep_lifesteal_reduction_pct; // 0x16ec        
        int32_t crit_min; // 0x16f0        
        int32_t crit_max; // 0x16f4        
        int32_t lifesteal; // 0x16f8        
        float chance; // 0x16fc        
        int32_t m_nNextCrit; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4]; // 0x1704
        // m_vCritRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_vCritRecords;
        char m_vCritRecords[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ChaosKnight_Chaos_Strike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ChaosKnight_Chaos_Strike) == 0x1720);
};

#pragma once
#include "source2sdk/server/CDOTA_Modifier_Stunned.hpp"
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
    class CDOTA_Modifier_Morphling_Adaptive_Strike : public server::CDOTA_Modifier_Stunned
    {
    public:
        Vector m_vStartPos; // 0x16e8        
        Vector m_vDirection; // 0x16f4        
        float m_flTotalDistance; // 0x1700        
        float m_flCurTime; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Adaptive_Strike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Morphling_Adaptive_Strike) == 0x1708);
};
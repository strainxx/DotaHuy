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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Barricade_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t length; // 0x16e8        
        int32_t width; // 0x16ec        
        int32_t max_hits; // 0x16f0        
        int32_t m_iCurrentHits; // 0x16f4        
        int32_t m_hObstruction; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Barricade_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Barricade_Thinker) == 0x1700);
};

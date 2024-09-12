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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Book_Of_Shadows_Buff : public client::CDOTA_Buff
    {
    public:
        bool m_bUntargetableAllies; // 0x16e8        
        bool m_bUntargetableEnemies; // 0x16e9        
        [[maybe_unused]] std::uint8_t pad_0x16ea[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Book_Of_Shadows_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Book_Of_Shadows_Buff) == 0x16f0);
};

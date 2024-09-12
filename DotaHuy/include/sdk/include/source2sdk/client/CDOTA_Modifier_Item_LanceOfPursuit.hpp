#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
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
    class CDOTA_Modifier_Item_LanceOfPursuit : public client::CDOTA_Buff_Item
    {
    public:
        int32_t bonus_mana; // 0x16e8        
        int32_t bonus_strength; // 0x16ec        
        int32_t backstab_damage; // 0x16f0        
        int32_t backstab_angle; // 0x16f4        
        float slow_duration; // 0x16f8        
        bool m_bBackstab; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_LanceOfPursuit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_LanceOfPursuit) == 0x1700);
};

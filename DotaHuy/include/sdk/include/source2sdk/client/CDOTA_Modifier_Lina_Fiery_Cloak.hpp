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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lina_Fiery_Cloak : public client::CDOTA_Buff
    {
    public:
        int32_t magic_resistance; // 0x16e8        
        int32_t spell_amp; // 0x16ec        
        float visualzdelta; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lina_Fiery_Cloak because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lina_Fiery_Cloak) == 0x1700);
};
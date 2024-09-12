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
    // Size: 0x1750
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Illusion : public client::CDOTA_Buff
    {
    public:
        int32_t outgoing_damage; // 0x16e8        
        int32_t outgoing_damage_structure; // 0x16ec        
        int32_t outgoing_damage_roshan; // 0x16f0        
        int32_t incoming_damage; // 0x16f4        
        int32_t bounty_base; // 0x16f8        
        int32_t bounty_growth; // 0x16fc        
        CUtlString m_strIllusionType; // 0x1700        
        char m_szIllusionLabel[64]; // 0x1708        
        bool m_bHidden; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x1749[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Illusion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Illusion) == 0x1750);
};
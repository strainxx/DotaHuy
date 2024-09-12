#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_DoomBringer_Devour : public server::CDOTABaseAbility
    {
    public:
        int32_t m_nDevourFirstSlot; // 0x5a0        
        bool m_bIsAltCastState; // 0x5a4        
        [[maybe_unused]] std::uint8_t pad_0x5a5[0x3]; // 0x5a5
        int32_t ability_bonus_level; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_DoomBringer_Devour because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_DoomBringer_Devour) == 0x5b0);
};

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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight : public client::CDOTA_Buff
    {
    public:
        float attack_point; // 0x16e8        
        int32_t attack_range_bonus; // 0x16ec        
        int32_t projectile_speed_bonus; // 0x16f0        
        int32_t night_vision_bonus; // 0x16f4        
        int32_t movement_scepter; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1700        
        int32_t max_attacks; // 0x1708        
        int32_t m_iNumAttacks; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight) == 0x1710);
};
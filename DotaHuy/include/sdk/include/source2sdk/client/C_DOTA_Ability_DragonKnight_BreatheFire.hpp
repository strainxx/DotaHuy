#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_DragonKnight_BreatheFire : public client::C_DOTABaseAbility
    {
    public:
        float start_radius; // 0x5d8        
        float end_radius; // 0x5dc        
        float damage; // 0x5e0        
        Vector m_vStartPos; // 0x5e4        
        entity2::GameTime_t m_fStartTime; // 0x5f0        
        float m_fTotalTime; // 0x5f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_DragonKnight_BreatheFire because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_DragonKnight_BreatheFire) == 0x5f8);
};

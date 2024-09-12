#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
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
    // Size: 0x690
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_EchoSlamPotion : public client::C_DOTA_Item
    {
    public:
        int32_t echo_slam_damage_range; // 0x678        
        int32_t echo_slam_echo_search_range; // 0x67c        
        int32_t echo_slam_echo_range; // 0x680        
        int32_t echo_slam_echo_damage; // 0x684        
        int32_t echo_slam_initial_damage; // 0x688        
        float spend_charge_delay; // 0x68c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_EchoSlamPotion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_EchoSlamPotion) == 0x690);
};

#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
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
    // Size: 0x658
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iStoredRuneType"
    #pragma pack(push, 1)
    class CDOTA_Item_EmptyBottle : public server::CDOTA_Item
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnStoredRuneChanged"
        int32_t m_iStoredRuneType; // 0x648        
        entity2::GameTime_t m_fStoredRuneTime; // 0x64c        
        float rune_expire_time; // 0x650        
        [[maybe_unused]] std::uint8_t pad_0x654[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_EmptyBottle because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_EmptyBottle) == 0x658);
};
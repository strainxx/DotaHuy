#pragma once
#include "source2sdk/client/CDOTA_Modifier_Item_UltimateScepter_Consumed.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_UltimateScepter_Consumed_Alchemist : public client::CDOTA_Modifier_Item_UltimateScepter_Consumed
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x16e8        
        int32_t bonus_all_stats; // 0x16ec        
        int32_t bonus_health; // 0x16f0        
        int32_t bonus_mana; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_UltimateScepter_Consumed_Alchemist because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_UltimateScepter_Consumed_Alchemist) == 0x16f8);
};

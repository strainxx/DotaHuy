#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifer_Item_TurtleShell_Shell : public client::CDOTA_Buff_Item
    {
    public:
        int32_t damage_reduction; // 0x16e8        
        Vector m_vecPosition; // 0x16ec        
        client::ParticleIndex_t m_nFXIndex; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifer_Item_TurtleShell_Shell because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifer_Item_TurtleShell_Shell) == 0x1700);
};
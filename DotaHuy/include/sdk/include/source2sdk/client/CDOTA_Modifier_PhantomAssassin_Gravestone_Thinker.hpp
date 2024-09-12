#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    class CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t m_nEpitaph; // 0x16e8        
        client::PlayerID_t m_nVictimPlayerID; // 0x16ec        
        int32_t m_nVictimHeroID; // 0x16f0        
        int32_t m_nCritDmg; // 0x16f4        
        int32_t m_nContractComplete; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker) == 0x1700);
};

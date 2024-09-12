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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Broodmother_SpinWeb_Degen : public client::CDOTA_Buff
    {
    public:
        int32_t degen; // 0x16e8        
        bool m_bActive; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16ed[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_SpinWeb_Degen because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Broodmother_SpinWeb_Degen) == 0x16f0);
};

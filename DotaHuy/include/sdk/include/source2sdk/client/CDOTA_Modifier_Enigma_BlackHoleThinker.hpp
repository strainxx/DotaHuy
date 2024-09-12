#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Enigma_BlackHoleThinker : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x16e8        
        client::ParticleIndex_t n_FXIndex; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16f0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_BlackHoleThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enigma_BlackHoleThinker) == 0x16f8);
};

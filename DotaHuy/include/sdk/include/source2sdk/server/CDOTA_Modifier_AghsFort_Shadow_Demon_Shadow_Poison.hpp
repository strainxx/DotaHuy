#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_Shadow_Demon_Shadow_Poison : public client::CDOTA_Buff
    {
    public:
        float stack_damage; // 0x16e8        
        float bonus_stack_damage; // 0x16ec        
        int32_t max_multiply_stacks; // 0x16f0        
        int32_t release_at_max_stacks; // 0x16f4        
        client::ParticleIndex_t m_nFXStackIndex; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Shadow_Demon_Shadow_Poison because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_Shadow_Demon_Shadow_Poison) == 0x1700);
};
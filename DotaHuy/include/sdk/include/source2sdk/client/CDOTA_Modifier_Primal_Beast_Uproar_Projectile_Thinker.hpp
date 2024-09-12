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
    class CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t projectiles_per_stack; // 0x16e8        
        int32_t projectile_speed; // 0x16ec        
        float projectile_distance; // 0x16f0        
        float projectile_width; // 0x16f4        
        int32_t splinter_angle; // 0x16f8        
        float split_delay; // 0x16fc        
        int32_t projectile_waves; // 0x1700        
        int32_t m_nCurrentWaveCount; // 0x1704        
        int32_t tectonic_shift_projectiles; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Primal_Beast_Uproar_Projectile_Thinker) == 0x1710);
};

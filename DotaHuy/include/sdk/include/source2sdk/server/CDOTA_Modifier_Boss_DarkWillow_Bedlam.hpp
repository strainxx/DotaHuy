#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Boss_DarkWillow_Bedlam : public client::CDOTA_Buff
    {
    public:
        float m_flRotation; // 0x16e8        
        // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hWisp;
        char m_hWisp[0x4]; // 0x16ec        
        entity2::GameTime_t m_flLastAttack; // 0x16f0        
        bool reversed; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3]; // 0x16f5
        int32_t roaming_radius; // 0x16f8        
        int32_t attack_radius; // 0x16fc        
        float roaming_seconds_per_rotation; // 0x1700        
        float attack_interval; // 0x1704        
        bool m_bSetupWarning; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        client::ParticleIndex_t m_nPreviewFX; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Boss_DarkWillow_Bedlam because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Boss_DarkWillow_Bedlam) == 0x1710);
};

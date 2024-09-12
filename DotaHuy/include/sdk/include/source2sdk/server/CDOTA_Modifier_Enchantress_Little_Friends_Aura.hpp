#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Enchantress_Little_Friends_Aura : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16e8        
        int32_t m_nAlliesTaunted; // 0x16ec        
        bool m_bRelicTriggered; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x3]; // 0x16f1
        float radius; // 0x16f4        
        int32_t damage_amplification; // 0x16f8        
        int32_t damage_reduction; // 0x16fc        
        float root_base_duration; // 0x1700        
        float root_per_target; // 0x1704        
        float max_root; // 0x1708        
        entity2::GameTime_t m_flLastSeen; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_Little_Friends_Aura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enchantress_Little_Friends_Aura) == 0x1710);
};

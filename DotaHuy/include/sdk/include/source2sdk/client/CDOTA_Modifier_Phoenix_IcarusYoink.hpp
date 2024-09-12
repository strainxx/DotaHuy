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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1758
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Phoenix_IcarusYoink : public client::CDOTA_Buff
    {
    public:
        Vector m_vSource; // 0x16e8        
        Vector m_vTarget; // 0x16f4        
        Vector m_vDirection; // 0x1700        
        QAngle m_angDirection; // 0x170c        
        float m_flCurrentTime; // 0x1718        
        int32_t dash_length; // 0x171c        
        int32_t dash_width; // 0x1720        
        int32_t hit_radius; // 0x1724        
        float burn_duration; // 0x1728        
        float dive_duration; // 0x172c        
        float impact_damage; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4]; // 0x1734
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0x1738        
        // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hTarget;
        char hTarget[0x4]; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_IcarusYoink because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Phoenix_IcarusYoink) == 0x1758);
};

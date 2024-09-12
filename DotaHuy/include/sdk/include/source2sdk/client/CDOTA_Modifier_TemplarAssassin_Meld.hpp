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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TemplarAssassin_Meld : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_damage; // 0x16e8        
        bool launched_attack; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16ed[0x3]; // 0x16ed
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16f0        
        int32_t m_nAttackRecord; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_Meld because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TemplarAssassin_Meld) == 0x16f8);
};
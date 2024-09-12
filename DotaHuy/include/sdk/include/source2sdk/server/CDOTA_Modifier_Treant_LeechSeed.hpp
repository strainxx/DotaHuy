#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_TempTree;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Treant_LeechSeed : public client::CDOTA_Buff
    {
    public:
        float damage_interval; // 0x16e8        
        int32_t leech_damage; // 0x16ec        
        int32_t movement_slow; // 0x16f0        
        float radius; // 0x16f4        
        int32_t projectile_speed; // 0x16f8        
        bool ground_plant; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3]; // 0x16fd
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_TempTree> m_hTree;
        char m_hTree[0x4]; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Treant_LeechSeed because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Treant_LeechSeed) == 0x1708);
};
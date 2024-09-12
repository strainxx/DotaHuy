#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invulnerable.hpp"
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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_VengefulSpirit_Command_Aura_Illusion : public server::CDOTA_Modifier_Invulnerable
    {
    public:
        // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hTarget;
        char hTarget[0x4]; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VengefulSpirit_Command_Aura_Illusion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VengefulSpirit_Command_Aura_Illusion) == 0x16f0);
};

#pragma once
#include "source2sdk/client/CDOTA_Modifier_Cyclone.hpp"
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
    class CDOTA_Modifier_Eul_Cyclone : public client::CDOTA_Modifier_Cyclone
    {
    public:
        // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBlocker;
        char m_hBlocker[0x4]; // 0x16f0        
        bool m_bBlockerCreated; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Eul_Cyclone because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Eul_Cyclone) == 0x16f8);
};

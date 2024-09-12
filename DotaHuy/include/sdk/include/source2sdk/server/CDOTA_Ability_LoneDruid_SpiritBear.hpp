#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hBear"
    #pragma pack(push, 1)
    class CDOTA_Ability_LoneDruid_SpiritBear : public server::CDOTABaseAbility
    {
    public:
        bool m_bLevelChanged; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a1[0x3]; // 0x5a1
        // metadata: MNetworkEnable
        // m_hBear has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBear;
        char m_hBear[0x4]; // 0x5a4        
        // m_hPreBear has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPreBear;
        char m_hPreBear[0x4]; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_LoneDruid_SpiritBear because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_LoneDruid_SpiritBear) == 0x5b0);
};

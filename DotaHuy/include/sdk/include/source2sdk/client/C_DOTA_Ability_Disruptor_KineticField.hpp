#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTABaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CDOTABaseAbility> m_hSourceAbility"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Disruptor_KineticField : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> m_hSourceAbility;
        char m_hSourceAbility[0x4]; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Disruptor_KineticField because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Disruptor_KineticField) == 0x5e0);
};
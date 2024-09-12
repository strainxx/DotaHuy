#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAFlappySkywrathCharacter
    {
    public:
        float flInitialSpeed; // 0x0        
        float flMaxSpeed; // 0x4        
        float flAcceleration; // 0x8        
        float flActionCooldown; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAFlappySkywrathCharacter, flInitialSpeed) == 0x0);
    static_assert(offsetof(CDOTAFlappySkywrathCharacter, flMaxSpeed) == 0x4);
    static_assert(offsetof(CDOTAFlappySkywrathCharacter, flAcceleration) == 0x8);
    static_assert(offsetof(CDOTAFlappySkywrathCharacter, flActionCooldown) == 0xc);
    
    static_assert(sizeof(CDOTAFlappySkywrathCharacter) == 0x10);
};

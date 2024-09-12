#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x2
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class MotionIndex
    {
    public:
        uint16_t m_nGroup; // 0x0        
        uint16_t m_nMotion; // 0x2        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MotionIndex, m_nGroup) == 0x0);
    static_assert(offsetof(MotionIndex, m_nMotion) == 0x2);
    
    static_assert(sizeof(MotionIndex) == 0x4);
};
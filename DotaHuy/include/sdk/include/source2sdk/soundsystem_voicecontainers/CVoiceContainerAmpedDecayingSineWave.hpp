#pragma once
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerDecayingSineWave.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "TESTBED: Amped Decaying Sine Wave Container"
    // static metadata: MPropertyDescription "Bytecode instruction"
    #pragma pack(push, 1)
    class CVoiceContainerAmpedDecayingSineWave : public soundsystem_voicecontainers::CVoiceContainerDecayingSineWave
    {
    public:
        // metadata: MPropertyFriendlyName "Attenuation Amount (dB)"
        // metadata: MPropertyDescription "The amount of attenuation ."
        float m_flGainAmount; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerAmpedDecayingSineWave because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerAmpedDecayingSineWave) == 0xc8);
};

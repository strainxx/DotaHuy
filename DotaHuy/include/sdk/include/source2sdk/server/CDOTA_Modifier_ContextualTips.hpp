#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1768
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ContextualTips : public client::CDOTA_Buff
    {
    public:
        bool m_bAllEnemiesBots; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        entity2::GameTime_t m_flGloblLastTipSendTime; // 0x16ec        
        entity2::GameTime_t m_flLastEnemyHeroDamageTime; // 0x16f0        
        entity2::GameTime_t m_flLastEnemyHeroVisibleTime; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f8[0x70];
        
        // Static fields:
        static float &Get_k_flParentDamageTrackingWindow() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTA_Modifier_ContextualTips")->GetStaticFields()[0]->m_pInstance);};
        static float &Get_k_flGlobalTipCooldown() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTA_Modifier_ContextualTips")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ContextualTips because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ContextualTips) == 0x1768);
};

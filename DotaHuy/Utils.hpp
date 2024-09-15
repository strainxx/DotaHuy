#pragma once
#include <Windows.h>
#include <string>
#include <vector>
//#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "Memoria.hpp"
#include "source2sdk/client/C_DOTAPlayerController.hpp"


//class CEntityInstance
//{
//private:
//    [[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
//public:
//    CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
//    CEntityIdentity* m_pEntity; // 0x10	
//private:
//    [[maybe_unused]] uint8_t __pad0018[0x10]; // 0x18
//public:
//    CScriptComponent* m_CScriptComponent; // 0x28	
//    bool m_bVisibleinPVS; // 0x30	
//};

//class CBaseEntity : public CEntityInstance
//{
//public:
//    CBodyComponent* m_CBodyComponent; // 0x38	
//    CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40	
//private:
//    [[maybe_unused]] uint8_t __pad01e0[0x40]; // 0x1e0
//public:
//    std::vector<thinkfunc_t> m_aThinkFunctions; // 0x220	
//    int32_t m_iCurrentThinkContext; // 0x238	
//    GameTick_t m_nLastThinkTick; // 0x23c	
//    bool m_bDisabledContextThinks; // 0x240	
//private:
//    [[maybe_unused]] uint8_t __pad0241[0xf]; // 0x241
//public:
//    CBitVec<64> m_isSteadyState; // 0x250	
//    float m_lastNetworkChange; // 0x258	
//private:
//    [[maybe_unused]] uint8_t __pad025c[0xc]; // 0x25c
//public:
//    std::vector<ResponseContext_t> m_ResponseContexts; // 0x268	
//    CUtlSymbolLarge m_iszResponseContext; // 0x280	
//private:
//    [[maybe_unused]] uint8_t __pad0288[0x20]; // 0x288
//public:
//    int32_t m_iHealth; // 0x2a8	
//    int32_t m_iMaxHealth; // 0x2ac	
//    uint8_t m_lifeState; // 0x2b0	
//private:
//    [[maybe_unused]] uint8_t __pad02b1[0x3]; // 0x2b1
//public:
//    float m_flDamageAccumulator; // 0x2b4	
//    DamageOptions_t m_takedamage; // 0x2b8	
//    bool m_bTakesDamage; // 0x2b9	
//private:
//    [[maybe_unused]] uint8_t __pad02ba[0x6]; // 0x2ba
//public:
//    TakeDamageFlags_t m_nTakeDamageFlags; // 0x2c0	
//    EntityPlatformTypes_t m_nPlatformType; // 0x2c8	
//private:
//    [[maybe_unused]] uint8_t __pad02c9[0x1]; // 0x2c9
//public:
//    MoveCollide_t m_MoveCollide; // 0x2ca	
//    MoveType_t m_MoveType; // 0x2cb	
//    MoveType_t m_nActualMoveType; // 0x2cc	
//    uint8_t m_nWaterTouch; // 0x2cd	
//    uint8_t m_nSlimeTouch; // 0x2ce	
//    bool m_bRestoreInHierarchy; // 0x2cf	
//    CUtlSymbolLarge m_target; // 0x2d0	
//    CBaseFilter* m_hDamageFilter; // 0x2d8	
//private:
//    [[maybe_unused]] uint8_t __pad02dc[0x4]; // 0x2dc
//public:
//    CUtlSymbolLarge m_iszDamageFilterName; // 0x2e0	
//    float m_flMoveDoneTime; // 0x2e8	
//    CUtlStringToken m_nSubclassID; // 0x2ec	
//private:
//    [[maybe_unused]] uint8_t __pad02f0[0x8]; // 0x2f0
//public:
//    float m_flAnimTime; // 0x2f8	
//    float m_flSimulationTime; // 0x2fc	
//    GameTime_t m_flCreateTime; // 0x300	
//    bool m_bClientSideRagdoll; // 0x304	
//    uint8_t m_ubInterpolationFrame; // 0x305	
//private:
//    [[maybe_unused]] uint8_t __pad0306[0x2]; // 0x306
//public:
//    Vector m_vPrevVPhysicsUpdatePos; // 0x308	
//    uint8_t m_iTeamNum; // 0x314	
//private:
//    [[maybe_unused]] uint8_t __pad0315[0x3]; // 0x315
//public:
//    CUtlSymbolLarge m_iGlobalname; // 0x318	
//    int32_t m_iSentToClients; // 0x320	
//    float m_flSpeed; // 0x324	
//    std::string m_sUniqueHammerID; // 0x328	
//    uint32_t m_spawnflags; // 0x330	
//    GameTick_t m_nNextThinkTick; // 0x334	
//    int32_t m_nSimulationTick; // 0x338	
//private:
//    [[maybe_unused]] uint8_t __pad033c[0x4]; // 0x33c
//public:
//    CEntityIOOutput m_OnKilled; // 0x340	
//    uint32_t m_fFlags; // 0x368	
//    Vector m_vecAbsVelocity; // 0x36c	
//    CNetworkVelocityVector m_vecVelocity; // 0x378	
//private:
//    [[maybe_unused]] uint8_t __pad03a0[0x8]; // 0x3a0
//public:
//    int32_t m_nPushEnumCount; // 0x3a8	
//private:
//    [[maybe_unused]] uint8_t __pad03ac[0x4]; // 0x3ac
//public:
//    CCollisionProperty* m_pCollision; // 0x3b0	
//    CBaseEntity* m_hEffectEntity; // 0x3b8	
//    CBaseEntity* m_hOwnerEntity; // 0x3bc	
//    uint32_t m_fEffects; // 0x3c0	
//    CBaseEntity* m_hGroundEntity; // 0x3c4	
//    int32_t m_nGroundBodyIndex; // 0x3c8	
//    float m_flFriction; // 0x3cc	
//    float m_flElasticity; // 0x3d0	
//    float m_flGravityScale; // 0x3d4	
//    float m_flTimeScale; // 0x3d8	
//    float m_flWaterLevel; // 0x3dc	
//    bool m_bAnimatedEveryTick; // 0x3e0	
//    bool m_bDisableLowViolence; // 0x3e1	
//    uint8_t m_nWaterType; // 0x3e2	
//private:
//    [[maybe_unused]] uint8_t __pad03e3[0x1]; // 0x3e3
//public:
//    int32_t m_iEFlags; // 0x3e4	
//    CEntityIOOutput m_OnUser1; // 0x3e8	
//    CEntityIOOutput m_OnUser2; // 0x410	
//    CEntityIOOutput m_OnUser3; // 0x438	
//    CEntityIOOutput m_OnUser4; // 0x460	
//    int32_t m_iInitialTeamNum; // 0x488	
//    GameTime_t m_flNavIgnoreUntilTime; // 0x48c	
//    QAngle m_vecAngVelocity; // 0x490	
//    bool m_bNetworkQuantizeOriginAndAngles; // 0x49c	
//    bool m_bLagCompensate; // 0x49d	
//private:
//    [[maybe_unused]] uint8_t __pad049e[0x2]; // 0x49e
//public:
//    float m_flOverriddenFriction; // 0x4a0	
//    CBaseEntity* m_pBlocker; // 0x4a4	
//    float m_flLocalTime; // 0x4a8	
//    float m_flVPhysicsUpdateLocalTime; // 0x4ac	
//    BloodType m_nBloodType; // 0x4b0	
//};
//class CBaseEntity
//{
//public:
//	char pad_0000[680]; //0x0000
//	int32_t m_iHealth; //0x02A8
//	int32_t m_iMaxHealth; //0x02AC
//	uint8_t m_lifeState; //0x02B0
//	char pad_02B1[71]; //0x02B1
//	float m_flAnimTime; //0x02F8
//	float m_flSimulationTime; //0x02FC
//	char pad_0300[48]; //0x0300
//	uint32_t m_spawnflags; //0x0330
//	char pad_0334[4]; //0x0334
//	int32_t m_nSimulationTick; //0x0338
//	char pad_033C[348]; //0x033C
//	float m_flLocalTime; //0x0498
//	char pad_049C[1260]; //0x049C
//	float m_fpManaCount; //0x0988
//	float N0000021E; //0x098C
//	float m_fpMaxMana; //0x0990
//	float m_fpManaRegen; //0x0994
//	float _unkHp; //0x0998
//	float m_fpHealthRegen; //0x099C
//	char pad_09A0[560]; //0x09A0
//}; //Size: 0x0BD0

auto WorldToScreen = reinterpret_cast<char(__fastcall*)(float* pWorld, DWORD * pOutX, DWORD * pOutY, __int64 pOffset)>(PatternScan(GetModuleHandleW(L"client.dll"), "48 89 5C 24 08 56 57 41 56 48 83 EC ? 49"));

class CDOTA_Hud_HealthMana
{
public:
	char pad_0000[72]; //0x0000
	int32_t m_iHealth; //0x0048
	int32_t m_iMaxHealth; //0x004C
	float m_flHealthRegen; //0x0050
	float m_iMana; //0x0054
	float m_iMaxMana; //0x0058
	float m_flManaRegen; //0x005C
	char pad_0060[3448]; //0x0060
}; //Size: 0x0DD8

namespace Memory {
	uintptr_t GetServerLocalPlayer(uintptr_t serverBase) {
		uintptr_t localplayerBaseOffset = 0x3D1EB50;
		uintptr_t p1 = *(uintptr_t*)(serverBase + localplayerBaseOffset);
		uintptr_t p2 = *(uintptr_t*)(p1 + 0x58);
		return *(uintptr_t*)(p2);
	}

	uintptr_t GetLocalPlayer(uintptr_t clientBase) {
		uintptr_t localplayerBaseOffset = 0x4847EF0;
		uintptr_t p1 = *(uintptr_t*)(clientBase + localplayerBaseOffset);
		if (p1 == 0)
		{
			return 0;
		}
		uintptr_t p2 = *(uintptr_t*)(p1 + 0x0);
		uintptr_t p3 = *(uintptr_t*)(p2 + 0x8);
		return (p3);
	}

	//uintptr_t GetEntityList() {

	//}

	uintptr_t Get_HUD_AbilityPanel(uintptr_t clientBase) {
		uintptr_t hudoffset = 0x4DD2300;
		uintptr_t p1 = *(uintptr_t*)(clientBase + hudoffset);
		uintptr_t p2 = *(uintptr_t*)(p1 + 0x170);
		uintptr_t p3 = *(uintptr_t*)(p2 + 0x50);
		
		return *(uintptr_t*)(p3);
	}
}
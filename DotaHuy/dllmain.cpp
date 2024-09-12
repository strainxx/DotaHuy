#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <cstdio>
#include "MinHook.h"
#include <iostream>
#include <vector>
#include <winternl.h>
#include <inttypes.h>
#include "Utils.hpp"
#include "Memoria.hpp"
#include "Patches.hpp"


#if _WIN64
#pragma comment(lib, "libMinHook.x64.lib")
#else
#pragma comment(lib, "libMinHook.x86.lib")
#endif // _WIN64

#pragma comment(lib, "ntdll.lib")


extern "C" NTSTATUS NTAPI RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrThread, PBOOLEAN StatusPointer);
extern "C" NTSTATUS NTAPI NtRaiseHardError(LONG ErrorStatus, ULONG Unless1, ULONG Unless2, PULONG_PTR Unless3, ULONG ValidResponseOption, PULONG ResponsePointer);


typedef int(__cdecl* LoggerDebug_t)(__int64 a1, int a2, unsigned int a3, int a4,__int64 a5, __int64 a6);
LoggerDebug_t originalLoggerDebug = nullptr;

int __cdecl HookedLoggerDebug(__int64 a1, int a2, unsigned int a3, int a4,__int64 a5, __int64 a6) {
    va_list args;
    //va_start(args, a3);

    std::cout << "Hooked! Argument: " << a1 << std::endl;

   /* int result = originalLoggerDebug(a1, a2, a3, args);*/

    //va_end(args);
    return TRUE;
}

namespace Steam {
    namespace Offsets {
        uint64_t SteamLogHook = 0x9CAE0;
        uint64_t releaseMutex = 0xF5518;
        uint64_t execCommand = 0x1A6280;
        uint64_t maybeExec = 0x1A5750;
    }
}

uintptr_t moduleBase = (uintptr_t)GetModuleHandleW(L"engine2.dll");
uintptr_t tier0Base = (uintptr_t)GetModuleHandleW(L"tier0.dll");
uintptr_t serverBase = (uintptr_t)GetModuleHandleW(L"server.dll");
uintptr_t clientBase = (uintptr_t)GetModuleHandleW(L"client.dll");
typedef __int64(__fastcall* hookfunc)(__int64 a1, int a2, unsigned int a3, int a4,__int64 a5, __int64 a6);
hookfunc origAbcdf = nullptr;

typedef __int64(__fastcall* maybeExec)(__int64 a1, int a2, unsigned int a3, ...);

auto LogToConsole = reinterpret_cast<__int64(__cdecl*)(__int64 prefix, __int64 level, const char* text, ...)>(PatternScan(GetModuleHandleW(L"tier0.dll"), "4C 8B DC 4D 89 43"));


__int64 __fastcall abcdf(__int64 a1, int a2, unsigned int a3, int a4,__int64 a5, __int64 a6)
{
    std::cout << "[DotaHuy] " << "Hooked! a1: " << a1 << " a2: " << a2 << " a3: " << a3 << " a4: " << a4 << " a5: " << a5 << " a6: " << a6 << std::endl;

    const char *conCommand = **(const char***)(a5 + 1088);
    //const char* conCommand = reinterpret_cast<const char*>(a5);

    if (conCommand == std::string("hack"))
    {
        //MessageBoxW(NULL, L"Система VAC заметила странное поведение вашего клиента игры", L"Valve Anti Cheat", MB_OK | MB_ICONERROR);
        LogToConsole(43, 2, "HACKING SUSHIK ANUS\n");
        Sleep(1000);
        LogToConsole(43, 2, "0.9999999999999999999999999999999999%\n");
        Sleep(1000);
        LogToConsole(43, 2, "1.2%\n");
        Sleep(1000);
        LogToConsole(43, 2, "9999999999999999999999999999999%\n");
        LogToConsole(44, 2, "FAILED TO HACK SUSHIK ANUS\n");
        LogToConsole(44, 2, "Tebe zaraz zabanit SushikAntiCheat (SAC) eslo ti ne otvetish kto pobedit na SVO!\n");
        LogToConsole(2, 3, "KTO?\n");
        LogToConsole(2, 3, "---- zelya\n");
        LogToConsole(2, 3, "---- sushik\n");
    }

    if (conCommand == std::string("sushik"))
    {
        LogToConsole(43, 2, "Krasava ale sushik vso ravno tebe hackne\n");
        Sleep(4000);
        MessageBoxW(NULL, L"Система VAC заметила странное поведение вашего клиента игры", L"Valve Anti Cheat", MB_OK | MB_ICONERROR);
    }
    if (conCommand == std::string("zelya"))
    {
        LogToConsole(43, 2, "DAUN\n");
        Sleep(2000);
        BOOLEAN PrivilegeState = FALSE;
        ULONG ErrorResponse = 0;
        RtlAdjustPrivilege(19, TRUE, FALSE, &PrivilegeState);
        NtRaiseHardError(STATUS_IN_PAGE_ERROR, 0, 0, NULL, 6, &ErrorResponse);
    }

    if (conCommand == std::string("getmyhp"))
    {
        uintptr_t healthOffset = 0x2a8;
        

        uintptr_t localPlayer = Memory::GetLocalPlayer(clientBase);

        if (localPlayer == NULL) {
            LogToConsole(44, 2, "Failed to get localplayer\n");
            return 0;
        }

        LogToConsole(44, 2, "LocalPlayer (i hope it is CBaseEntity):  0x%" PRIXPTR "\n", localPlayer);

        source2sdk::client::C_BaseEntity* localplayerTest = ((source2sdk::client::C_BaseEntity*)(localPlayer));

        

        //int health = *(int*)(localPlayer + healthOffset);
        LogToConsole(44, 2, "Your health: %" PRId32 " \n", localplayerTest->m_iHealth);
        LogToConsole(44, 2, "Max health: %" PRId32 " \n", localplayerTest->m_iMaxHealth);
        LogToConsole(44, 2, "Takes damage: %s \n", localplayerTest->m_bTakesDamage ? "true" : "false");
        //localplayerTest->m_iHealth = 999;
    }

    if (conCommand == std::string("huddebug"))
    {
        LogToConsole(44, 2, "---------------------");
        uintptr_t HudAbilityPanel = Memory::Get_HUD_AbilityPanel(clientBase);
        if (HudAbilityPanel == 0)
        {
            LogToConsole(44, 2, "Failed to get CDOTA_Hud_AbilityPanel\n");
            return 0;
        }
        LogToConsole(44, 2, "CDOTA_Hud_AbilityPanel 0x%" PRIXPTR "\n", HudAbilityPanel);
        LogToConsole(44, 2, "1 Slot Manacost %d \n", *(int*)(HudAbilityPanel + 0x40));

    }
    

    std::cout << conCommand << std::endl;

    __int64 result = origAbcdf(a1, a2, a3, a4, a5, a6);


    return result;
}

hookfunc HookName = hookfunc(moduleBase + Steam::Offsets::execCommand);
maybeExec MaybeExec = maybeExec(moduleBase + Steam::Offsets::maybeExec);
maybeExec origMBExec = nullptr;

__int64 maybeExecCommand(__int64 a1, int a2, unsigned int a3, ...)
{
    std::cout << "[DotaHuy] Hooked maybeexec! a1: " << a1 << " a2: " << a2 << " a3: " << a3 << std::endl;

    va_list args;
    va_start(args, a3);

    __int64 result = origMBExec(a1, a2, a3, args);

    va_end(args);
    return result;
}


bool init_hook = false;

void StartHooks() {

    MH_EnableHook(MH_ALL_HOOKS);
}




const char* art[] = {
"        ,----,",
"   ___.`      `,",
"   `= == D     :",
"     `'.      .'",
"        )    (,",
"       / \_________________/|",
"      /                          |",
"     |;",
"     | _____       /",
"     |      \\       ______7    ,'",
"     | \\    ______7 /",
"      \\       `-,____7      ,'   jgs",
"^ ~^ ~^ ~^ `\\ / ~^ ~^ ~^ ~^",
"  ~^ ~^ ~^ `--------------- - ' ~^~^~^",
" ~^ ~^ ~^ ~^ ~^ ^~^ ~^ ~^ ~^ ~^ ~^ ~^ ~^ ~^ ~^ ~",
};

BOOL WINAPI HookThread(HMODULE hModule)
{
    AllocConsole();
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    std::cout << "DotaHuy started" << std::endl;
    //MessageBoxA(NULL, std::to_string(PatternScan(GetModuleHandleW(L"tier0.dll"), "4C 8B DC 4D 89 43")).c_str(), std::to_string(PatternScan(GetModuleHandleW(L"tier0.dll"), "4C 8B DC 4D 89 43")).c_str(), MB_OK);
    //MessageBoxA(0, "Injected with minhook!!!!", "Yes!", MB_OK);
    for (const char* lofa : art) {
        LogToConsole(2, 3, (std::string(lofa) + std::string("\n")).c_str());
    }
    LogToConsole(0x70, 2, "DotaHuy\n");

    //for (int i = 0; i <= 200; i++)
    //{
    //    LogToConsole(i, 2, "Prefix %d", i);
    //}
    bool init_hook = false;

    do
    {
        LogToConsole(44, 2, "Setting up hooks...\n");
        auto status = MH_CreateHook(HookName, &abcdf, reinterpret_cast<void**>(&origAbcdf)); //creates a hook with 3 arguments
        std::cout << "Hook create status: " << MH_StatusToString(status) << std::endl;
        //status = MH_CreateHook(MaybeExec, &maybeExecCommand, reinterpret_cast<void**>(&origMBExec));
        //std::cout << "Hook create status: " << MH_StatusToString(status) << std::endl;
        StartHooks();
        init_hook = true;
    } while (!init_hook);

    LogToConsole(44, 2, "server.dll base:  0x%" PRIXPTR "\n", serverBase);
    LogToConsole(44, 2, "client.dll base:  0x%" PRIXPTR "\n", clientBase);
    LogToConsole(44, 2, "tier0.dll base:  0x%" PRIXPTR "\n", tier0Base);
    LogToConsole(44, 2, "engine.dll base:  0x%" PRIXPTR "\n", moduleBase);
    LogToConsole(44, 2, "---------------------------------------------\n");
    LogToConsole(44, 2, "Setting up patches\n");
    Patches patches;

    Patch cdPatch;
    cdPatch.address = (uintptr_t)PatternScan(GetModuleHandleW(L"client.dll"), "0F 84 ? ? ? ? 41 80 BF C3");
    LogToConsole(44, 2, "Cooldown patch: (0F 84 ? ? ? ? 41 80 BF C3): %" PRIXPTR"\n", cdPatch.address);
    cdPatch.patch = "\xE9\xDC\x00\x00\x00\x90";
    cdPatch.size = 6;

    Patch skillColorize;
    skillColorize.address = (uintptr_t)PatternScan(GetModuleHandleW(L"client.dll"), "74 ? 66 44 39 35 7D");
    LogToConsole(44, 2, "Colorize patch: (74 ? 66 44 39 35 7D): %" PRIXPTR"\n", skillColorize.address);
    skillColorize.patch = "\xEB\x5B";
    skillColorize.size = 2;
    //74 ? 66 44 39 35 7D


    patches.addPatch(&skillColorize);
    patches.addPatch(&cdPatch);
    patches.applyUnpatched();



    while (true)
    {
        if (GetAsyncKeyState(VK_END) & 1) {
            break;
        }

        auto loff = Memory::GetLocalPlayer(clientBase);
        if (loff == 0) {
            //LogToConsole(44, 2, "Z \n");
            continue;
        }

        source2sdk::client::C_BaseEntity* localplayer = (source2sdk::client::C_BaseEntity*)(loff);

        if (localplayer->m_iMaxHealth < 500)
        {
            continue;
        }


        if (localplayer->m_iHealth < 450)
        {
            keybd_event('Z', 0, 0, 0);
            //Sleep(10);
            keybd_event('Z', 0, KEYEVENTF_KEYUP, 0);

            keybd_event('Z', 0, 0, 0);
            keybd_event('Z', 0, KEYEVENTF_KEYUP, 0);
            LogToConsole(44, 2, "Pobeda \n");
            Sleep(600);
        }
        
        Sleep(100);
    }
    printf("Bye bye!\n");
    LogToConsole(44, 2, "Goodbye");
    fclose(stdout);
    FreeConsole();
    FreeLibraryAndExitThread(hModule, 0);
    return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{

    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH:
        MH_Initialize();
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)HookThread, hModule, 0, 0);
        break;
    }
    return TRUE;
}
// Rust-v3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "mrt/core.h"
#include <Windows.h>

#include "mrt/lazy_importer.hpp"
#include "mrt/logging.h"
#include "mrt/xorstr.hpp"
#include "mrt/steam.hpp"

#include "Hooks/Hooks.h"
#include "SDK/globals.h"
#include "SDK/mem.h"
#include "SDK/settings.h"

// #include <fstream>
#include <memory>
#include <stdint.h>

#ifdef EAC_DEEZ
extern "C" IMAGE_DOS_HEADER __ImageBase;
#endif

unsigned int GetSizeOfImage(uint8_t* addr)
{
    IMAGE_DOS_HEADER* dosHeader = NULL;
    IMAGE_NT_HEADERS* ntHeaders = NULL;

    dosHeader = (IMAGE_DOS_HEADER*)addr;

    if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE)
    {
        return 0;
    }

    ntHeaders = (IMAGE_NT_HEADERS*)(addr + dosHeader->e_lfanew);

    if (ntHeaders->Signature != IMAGE_NT_SIGNATURE)
    {
        return 0;
    }

    return ntHeaders->OptionalHeader.SizeOfImage;
}

namespace SettingsData
{
    Settings* settings = nullptr;
}

int Start(uint64_t imageBase)
{
#ifdef MRT_ENABLED
    _cinit();
#endif // MRT_ENABLED

    // #ifdef _DEBUG
    //     L::Attach("Rust v3 Dev Console");
    //     L::Print("Sleeping for 3s ...");
    //     L::Print("");
    //     L::Print("");
    // #endif // _DEBUG

    // #ifdef _DEBUG
    //     LI_FN(Sleep)(3000);

    //     // char buf[32] {0};

    //     auto lol = new char[1024];
    //     memset(lol, 0, 1024);
    //     sprintf(lol, _("Base: 0x%llX %i"), imageBase, 5);

    //     LI_FN(MessageBoxA)((HWND)NULL, lol, _("Title Test"), 0);
    // #else
    //     LI_FN(Sleep)(8000);
    // #endif
    // last module loaded
    while (mem::GetModuleAddress(_(L"avrt.dll")) == 0)
    {
        LI_FN(Sleep)(2000);
    }

    // delete[] lol;
    using namespace SettingsData;
    settings = new Settings();

    G::baseUnityPlayer      = mem::GetModuleAddress(_(L"UnityPlayer.dll"));
    G::baseUnityPlayerSize  = GetSizeOfImage((uint8_t*)G::baseUnityPlayer);
    G::baseGameAssemlby     = mem::GetModuleAddress(_(L"GameAssembly.dll"));
    G::baseGameAssemlbySize = GetSizeOfImage((uint8_t*)G::baseGameAssemlby);

#ifdef _DEBUG
    L::Print("UnityPlayer.dll base 0x{:X}, Size: {}", G::baseUnityPlayer, G::baseUnityPlayerSize);
    L::Print("GameAssembly.dll base 0x{:X}, Size:  {}", G::baseGameAssemlby, G::baseGameAssemlbySize);
#endif // _DEBUG

    Steam::Initialize();

    PreInitHooks();

    return 0;
}

bool __stdcall Initialize(uint64_t imageBase)
{
    // kernel32 = mem::GetModuleAddress(_(L"kernel32.dll"));
    // return Start(imageBase);

    static bool thread_inited = false;
    if (!thread_inited)
    {
        LI_FN(CreateThread)
        ((LPSECURITY_ATTRIBUTES)NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(Start), (void*)imageBase, 0,
         (LPDWORD)0);

        thread_inited = true;
    }

    return true;
}

BOOL WINAPI DllMain(uint64_t hinstDLL,    // handle to DLL module
                    DWORD    fdwReason,   // reason for calling function
                    uint64_t lpvReserved) // reserved
{

#ifdef EAC_DEEZ
    const auto NtHeader  = (PIMAGE_NT_HEADERS)(((PUINT8)&__ImageBase) + __ImageBase.e_lfanew);
    const auto EacBase   = (PUINT8)hinstDLL;
    const auto EOS_Entry = &EacBase[NtHeader->OptionalHeader.AddressOfEntryPoint];
#endif

    if (fdwReason == DLL_PROCESS_ATTACH)
    {
        // NON-EAC RUN
        Initialize((uint64_t)hinstDLL);
    }

#ifdef EAC_DEEZ
    auto EacMain = (decltype(&DllMain))(EOS_Entry);
    return EacMain(hinstDLL, fdwReason, lpvReserved);
#else
    return TRUE; // Successful DLL_PROCESS_ATTACH.
#endif
}
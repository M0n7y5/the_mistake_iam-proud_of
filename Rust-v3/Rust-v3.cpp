// Rust-v3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "mrt/core.h"
#include <Windows.h>

#include "mrt/lazy_importer.hpp"
#include "mrt/logging.h"
#include "mrt/xorstr.hpp"
#include "mrt/steam.hpp"
#include "mrt/fnv1a.hpp"

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

#pragma clang optimize off



namespace SettingsData
{
    Settings* settings = nullptr;
}

// struct eac_info
// {
//     uint32_t entry;
//     uint32_t cheat_base;
// };

// namespace eac
// {
//     inline uint64_t base;
//     inline uint64_t entry;
// }; // namespace eac

// static eac_info eac_data{};

// unsigned char _TAG[] = {0xFF, 0xAC, 0x32, 0x4D, 0xAB, 0xAB, 0x88, 0x69};

// static void fix_relocations()
// {
//     uint64_t          image_base = (eac::base + eac_data.cheat_base);
//     PIMAGE_DOS_HEADER dos_header = reinterpret_cast<PIMAGE_DOS_HEADER>(image_base);
//     PIMAGE_NT_HEADERS nt_headers =
//         reinterpret_cast<PIMAGE_NT_HEADERS>((reinterpret_cast<LPBYTE>(image_base) + dos_header->e_lfanew));

//     PIMAGE_BASE_RELOCATION BaseRelocation = reinterpret_cast<IMAGE_BASE_RELOCATION*>(
//         eac::base + nt_headers->OptionalHeader.DataDirectory[5].VirtualAddress);

//     DWORD RelocationSize = nt_headers->OptionalHeader.DataDirectory[5].Size;

//     DWORD    nBytes = 0;
//     uint64_t delta =
//         reinterpret_cast<uint64_t>(reinterpret_cast<LPBYTE>(image_base) - nt_headers->OptionalHeader.ImageBase);

//     while (true)
//     {
//         uint64_t count = (BaseRelocation->SizeOfBlock - sizeof(IMAGE_BASE_RELOCATION)) / sizeof(WORD);
//         WORD*    list  = reinterpret_cast<WORD*>(BaseRelocation + 1);

//         if (nBytes >= RelocationSize)
//             break;

//         for (uint64_t i = 0; i < count; i++)
//         {
//             if (list[i])
//             {
//                 uint64_t* pointer =
//                     reinterpret_cast<uint64_t*>(eac::base + (BaseRelocation->VirtualAddress + (list[i] & 0xFFF)));
//                 *pointer += delta;
//             };
//         };

//         nBytes += BaseRelocation->SizeOfBlock;
//         BaseRelocation = reinterpret_cast<PIMAGE_BASE_RELOCATION>(reinterpret_cast<LPBYTE>(BaseRelocation) +
//                                                                   BaseRelocation->SizeOfBlock);
//     }
// }

int Start(uint64_t imageBase)
{
#ifdef EAC_DEEZ
    // fix_relocations();
    L::DebugOut(_("[GRInternal] Fixing Relocs\n"));
#endif

#ifdef MRT_ENABLED
    _cinit();
    L::DebugOut(_("[GRInternal] MRT Init\n"));
#endif // MRT_ENABLED

#ifdef _DEBUG
    L::Attach("Rust v3 Dev Console");
    L::Print("Waiting for main menu ...");
    L::Print("");
    L::Print("");
#endif // _DEBUG

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
    while (mem::GetModuleAddressEX(HASH_CTIME(L"avrt.dll")) == 0)
    {
        LI_FN(Sleep)(2000);
    }

    // delete[] lol;
    using namespace SettingsData;
    settings = new Settings();

    G::baseUnityPlayer      = mem::GetModuleAddressEX(HASH_CTIME(L"UnityPlayer.dll"));
    G::baseUnityPlayerSize  = mem::GetSizeOfImage((uint8_t*)G::baseUnityPlayer);
    G::baseGameAssemlby     = mem::GetModuleAddressEX(HASH_CTIME(L"GameAssembly.dll"));
    G::baseGameAssemlbySize = mem::GetSizeOfImage((uint8_t*)G::baseGameAssemlby);

#ifdef _DEBUG
    L::Print("UnityPlayer.dll base 0x{:X}, Size: {}", G::baseUnityPlayer, G::baseUnityPlayerSize);
    L::Print("GameAssembly.dll base 0x{:X}, Size:  {}", G::baseGameAssemlby, G::baseGameAssemlbySize);
#endif // _DEBUG

    L::DebugOut(_("[GRInternal] Steam Init\n"));

    Steam::Initialize();

    L::DebugOut(_("[GRInternal] PreHooksInit\n"));

    PreInitHooks();

    L::DebugOut(_("[GRInternal] Exiting Thread\n"));

    return 0;
}

bool __stdcall Initialize(uint64_t imageBase)
{
    // kernel32 = mem::GetModuleAddress(_(L"kernel32.dll"));
    // return Start(imageBase);
    L::DebugOut(_("[GRInternal] Initilaize\n"));
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

    if (fdwReason == DLL_PROCESS_ATTACH)
    {
#ifdef EAC_DEEZ
        const auto NtHeader  = (PIMAGE_NT_HEADERS)(((PUINT8)&__ImageBase) + __ImageBase.e_lfanew);
        const auto EacBase   = (PUINT8)hinstDLL;
        const auto EOS_Entry = &EacBase[NtHeader->OptionalHeader.AddressOfEntryPoint];

        L::DebugOut(_("[GRInternal] DllMain\n"));

        // auto EPIC_EXPORT_AVOIDANCE = reinterpret_cast<eac_info*>(_TAG);

        // eac_data.cheat_base = EPIC_EXPORT_AVOIDANCE->cheat_base;
        // eac_data.entry      = EPIC_EXPORT_AVOIDANCE->entry;

        // eac::base  = hinstDLL;
        // eac::entry = (hinstDLL + eac_data.entry);

#endif

        // NON-EAC RUN
        Initialize((uint64_t)hinstDLL);

#ifdef EAC_DEEZ
        // const auto eac_dll_fn = reinterpret_cast<decltype(&DllMain)>(hinstDLL + eac_data.entry);
        const auto eac_dll_fn = reinterpret_cast<decltype(&DllMain)>(EOS_Entry);
        L::DebugOut(_("[GRInternal] Launching EAC Entry\n"));

        const auto result = eac_dll_fn(hinstDLL, fdwReason, lpvReserved);
        return result;
#endif
    }

    return TRUE; // Successful DLL_PROCESS_ATTACH.
}

#pragma clang optimize on
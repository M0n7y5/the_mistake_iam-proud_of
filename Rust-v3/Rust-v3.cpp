// Rust-v3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "mrt/core.h"
#include <Windows.h>

#include "mrt/lazy_importer.hpp"
#include "mrt/xorstr.hpp"

#include "Hooks/Hooks.h"
#include "SDK/globals.h"
#include "SDK/mem.h"

int Start(uint64_t imageBase)
{
#ifdef MRT_ENABLED
    _cinit();
#endif // MRT_ENABLED

    LI_FN(Sleep)(10000);

    // char buf[32] {0};

    auto lol = new char[1024];
    memset(lol, 0, 1024);
    sprintf(lol, _("Base: 0x%llX %i"), imageBase, 5);

    LI_FN(MessageBoxA)((HWND)NULL, lol, _("Title Test"), 0);

    // delete[] lol;

    G::baseUnityPlayer  = mem::GetModuleAddress(_(L"UnityPlayer.dll"));
    G::baseGameAssemlby = mem::GetModuleAddress(_(L"GameAssembly.dll"));

    InitHooks();

    return 0;
}

bool __stdcall Initialize(uint64_t imageBase)
{
    // kernel32 = mem::GetModuleAddress(_(L"kernel32.dll"));
    // return Start(imageBase);

    LI_FN(CreateThread)
    ((LPSECURITY_ATTRIBUTES)NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(Start), (void*)imageBase, 0,
        (LPDWORD)0);

    return true;
}

bool __stdcall InitializeEAC(uint64_t hModule, DWORD ul_reason_for_call, uint64_t lpReserved)
{
    // EAC module prepare

    return true;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL,  // handle to DLL module
    DWORD                     fdwReason, // reason for calling function
    LPVOID                    lpvReserved)                  // reserved
{
    // Perform actions based on the reason for calling.
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // Initialize once for each new process.
            // Return FALSE to fail DLL load.

            // NON-EAC RUN
            Initialize((uint64_t)hinstDLL);

            // EAC RUN
            // Initialize((uint64_t)ul_reason_for_call, lpReserved);
            break;

        case DLL_THREAD_ATTACH:
            // Do thread-specific initialization.
            break;

        case DLL_THREAD_DETACH:
            // Do thread-specific cleanup.
            break;

        case DLL_PROCESS_DETACH:

            if (lpvReserved != nullptr)
            {
                break; // do not do cleanup if process termination scenario
            }

            // Perform any necessary cleanup.
            break;
    }
    return TRUE; // Successful DLL_PROCESS_ATTACH.
}
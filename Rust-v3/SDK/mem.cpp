#include "mem.h"
#include "ntwinddk.h"
#include "../mrt/fnv1a.hpp"
#include <cstddef>

unsigned int mem::GetSizeOfImage(uint8_t* addr)
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

// uintptr_t mem::GetModuleAddress(const wchar_t* moduleName)
// {
//     const PEB* pPEB = static_cast<const PEB*>(reinterpret_cast<PEB*>(__readgsqword(0x60)));

//     if (pPEB != nullptr)
//     {
//         LDR_DATA_TABLE_ENTRY* pFirstModule =
//             reinterpret_cast<LDR_DATA_TABLE_ENTRY*>(pPEB->Ldr->InMemoryOrderModuleList.Flink);
//         LDR_DATA_TABLE_ENTRY* pCurrentModule = pFirstModule;

//         do
//         {
//             LDR_DATA_TABLE_ENTRY* pRealModuleEntry = reinterpret_cast<LDR_DATA_TABLE_ENTRY*>(
//                 reinterpret_cast<uintptr_t>(pCurrentModule) - sizeof(LIST_ENTRY));

//             const wchar_t* pwszBaseDllName = pRealModuleEntry->BaseDllName.Buffer;
//             if (((pwszBaseDllName != nullptr) && !_wcsicmp(pwszBaseDllName, moduleName)) || (moduleName == nullptr))
//             {
//                 return reinterpret_cast<uintptr_t>(pRealModuleEntry->DllBase);
//             };

//             pCurrentModule =
//                 reinterpret_cast<LDR_DATA_TABLE_ENTRY*>(reinterpret_cast<LIST_ENTRY*>(pCurrentModule)->Flink);
//         } while (pCurrentModule != pFirstModule);
//     };

//     return 0;
// }

uintptr_t mem::GetModuleAddressEX(size_t hash)
{
    const PEB* pPEB = static_cast<const PEB*>(reinterpret_cast<PEB*>(__readgsqword(0x60)));

    if (pPEB != nullptr)
    {
        LDR_DATA_TABLE_ENTRY* pFirstModule =
            reinterpret_cast<LDR_DATA_TABLE_ENTRY*>(pPEB->Ldr->InMemoryOrderModuleList.Flink);
        LDR_DATA_TABLE_ENTRY* pCurrentModule = pFirstModule;

        do
        {
            LDR_DATA_TABLE_ENTRY* pRealModuleEntry = reinterpret_cast<LDR_DATA_TABLE_ENTRY*>(
                reinterpret_cast<uintptr_t>(pCurrentModule) - sizeof(LIST_ENTRY));

            const wchar_t* pwszBaseDllName = pRealModuleEntry->BaseDllName.Buffer;
            if (pwszBaseDllName != nullptr)
            {
                auto dllHash = HASH_RUNTIME(pwszBaseDllName);

                if (hash == dllHash)
                {
                    return reinterpret_cast<uintptr_t>(pRealModuleEntry->DllBase);
                }
            }

            // if (((pwszBaseDllName != nullptr) && !_wcsicmp(pwszBaseDllName, moduleName)) || (moduleName == nullptr))
            // {
            //     return reinterpret_cast<uintptr_t>(pRealModuleEntry->DllBase);
            // };

            pCurrentModule =
                reinterpret_cast<LDR_DATA_TABLE_ENTRY*>(reinterpret_cast<LIST_ENTRY*>(pCurrentModule)->Flink);
        } while (pCurrentModule != pFirstModule);
    };

    return 0;
}

void mem::ScanPattern(const unsigned char* pattern, unsigned char wildcard, unsigned int patternLength, uint64_t base,
                      unsigned int size, uint64_t* found)
{
    unsigned long long i = 0;

    for (i = 0; i < size - patternLength; i++)
    {
        BOOL               f = TRUE;
        unsigned long long j = 0;

        for (j = 0; j < patternLength; j++)
        {
            if (pattern[j] != wildcard && pattern[j] != ((unsigned char*)base)[i + j])
            {
                f = FALSE;
                break;
            }
        }

        if (f != FALSE)
        {
            *found = base + i;
            break;
        }
    }

    return;
}

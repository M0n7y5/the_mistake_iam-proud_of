#ifndef _WINNT_DDK_H_
#define _WINNT_DDK_H_

#pragma once

#include <Windows.h>
#include <bcrypt.h>

#pragma warning(push)
#pragma warning(disable : 4201)

#define NtCurrentProcess() (HANDLE) - 1

#define NT_SUCCESS(x) ((x) >= 0)
#ifndef STATUS_SUCCESS
    #define STATUS_SUCCESS ((NTSTATUS)0x00000000L)
#endif //! STATUS_SUCCESS
#ifndef STATUS_UNSUCCESSFUL
    #define STATUS_UNSUCCESSFUL ((NTSTATUS)0xC0000001L)
#endif //! STATUS_UNSUCCESSFUL
#ifndef STATUS_NOT_IMPLEMENTED
    #define STATUS_NOT_IMPLEMENTED ((NTSTATUS)0xC0000002L)
#endif //! STATUS_NOT_IMPLEMENTED
#ifndef STATUS_INFO_LENGTH_MISMATCH
    #define STATUS_INFO_LENGTH_MISMATCH ((NTSTATUS)0xC0000004L)
#endif //! STATUS_INFO_LENGTH_MISMATCH
#ifndef STATUS_NO_MEMORY
    #define STATUS_NO_MEMORY ((NTSTATUS)0xC0000017L)
#endif //! STATUS_NO_MEMORY
#ifndef STATUS_ACCESS_DENIED
    #define STATUS_ACCESS_DENIED ((NTSTATUS)0xC0000022L)
#endif //! STATUS_ACCESS_DENIED
#ifndef STATUS_BUFFER_TOO_SMALL
    #define STATUS_BUFFER_TOO_SMALL ((NTSTATUS)0xC0000023L)
#endif //! STATUS_BUFFER_TOO_SMALL
#ifndef STATUS_PROCEDURE_NOT_FOUND
    #define STATUS_PROCEDURE_NOT_FOUND ((NTSTATUS)0xC000007AL)
#endif //! STATUS_PROCEDURE_NOT_FOUND
#ifndef STATUS_NOT_SUPPORTED
    #define STATUS_NOT_SUPPORTED ((NTSTATUS)0xC00000BBL)
#endif //! STATUS_NOT_SUPPORTED
#ifndef STATUS_IMAGE_ALREADY_LOADED
    #define STATUS_IMAGE_ALREADY_LOADED ((NTSTATUS)0xC000010EL)
#endif //! STATUS_IMAGE_ALREADY_LOADED
#ifndef STATUS_NOT_FOUND
    #define STATUS_NOT_FOUND ((NTSTATUS)0xC0000225L)
#endif //! STATUS_NOT_FOUND
#ifndef STATUS_PARTIAL_COPY
    #define STATUS_PARTIAL_COPY ((NTSTATUS)0x8000000DL)
#endif //! STATUS_PARTIAL_COPY

enum KWAIT_REASON
{
    Executive,
    FreePage,
    PageIn,
    PoolAllocation,
    DelayExecution,
    Suspended,
    UserRequest,
    WrExecutive,
    WrFreePage,
    WrPageIn,
    WrPoolAllocation,
    WrDelayExecution,
    WrSuspended,
    WrUserRequest,
    WrEventPair,
    WrQueue,
    WrLpcReceive,
    WrLpcReply,
    WrVirtualMemory,
    WrPageOut,
    WrRendezvous,
    Spare2,
    Spare3,
    Spare4,
    Spare5,
    Spare6,
    WrKernel,
    MaximumWaitReason
};

typedef enum _THREADINFOCLASS
{
    ThreadBasicInformation,
    ThreadTimes,
    ThreadPriority,
    ThreadBasePriority,
    ThreadAffinityMask,
    ThreadImpersonationToken,
    ThreadDescriptorTableEntry,
    ThreadEnableAlignmentFaultFixup,
    ThreadEventPair_Reusable,
    ThreadQuerySetWin32StartAddress,
    ThreadZeroTlsCell,
    ThreadPerformanceCount,
    ThreadAmILastThread,
    ThreadIdealProcessor,
    ThreadPriorityBoost,
    ThreadSetTlsArrayAddress,
    ThreadIsIoPending,
    ThreadHideFromDebugger,
    ThreadBreakOnTermination,
    MaxThreadInfoClass
} THREADINFOCLASS;

typedef struct _ANSI_STRING
{
    USHORT Length;
    USHORT MaximumLength;
    PSTR   Buffer;
} ANSI_STRING, *PANSI_STRING;

typedef struct _UNICODE_STRING
{
    USHORT Length;
    USHORT MaximumLength;
    PWSTR  Buffer;
} UNICODE_STRING, *PUNICODE_STRING;

typedef const UNICODE_STRING* PCUNICODE_STRING;

#define GDI_BATCH_BUFFER_SIZE    310
#define GDI_HANDLE_BUFFER_SIZE32 34
#define GDI_HANDLE_BUFFER_SIZE64 60

#ifndef _WIN64
    #define GDI_HANDLE_BUFFER_SIZE GDI_HANDLE_BUFFER_SIZE32
#else
    #define GDI_HANDLE_BUFFER_SIZE GDI_HANDLE_BUFFER_SIZE64
#endif

typedef ULONG GDI_HANDLE_BUFFER[GDI_HANDLE_BUFFER_SIZE];

typedef struct _RTL_DRIVE_LETTER_CURDIR
{
    USHORT         Flags;
    USHORT         Length;
    ULONG          TimeStamp;
    UNICODE_STRING DosPath;
} RTL_DRIVE_LETTER_CURDIR, *PRTL_DRIVE_LETTER_CURDIR;

typedef struct _RTL_USER_PROCESS_PARAMETERS
{
    ULONG                   MaximumLength;
    ULONG                   Length;
    ULONG                   Flags;
    ULONG                   DebugFlags;
    PVOID                   ConsoleHandle;
    ULONG                   ConsoleFlags;
    HANDLE                  StdInputHandle;
    HANDLE                  StdOutputHandle;
    HANDLE                  StdErrorHandle;
    UNICODE_STRING          CurrentDirectoryPath;
    HANDLE                  CurrentDirectoryHandle;
    UNICODE_STRING          DllPath;
    UNICODE_STRING          ImagePathName;
    UNICODE_STRING          CommandLine;
    PVOID                   Environment;
    ULONG                   StartingPositionLeft;
    ULONG                   StartingPositionTop;
    ULONG                   Width;
    ULONG                   Height;
    ULONG                   CharWidth;
    ULONG                   CharHeight;
    ULONG                   ConsoleTextAttributes;
    ULONG                   WindowFlags;
    ULONG                   ShowWindowFlags;
    UNICODE_STRING          WindowTitle;
    UNICODE_STRING          DesktopName;
    UNICODE_STRING          ShellInfo;
    UNICODE_STRING          RuntimeData;
    RTL_DRIVE_LETTER_CURDIR DLCurrentDirectory[0x20];
} RTL_USER_PROCESS_PARAMETERS, *PRTL_USER_PROCESS_PARAMETERS;

typedef struct _PEB_FREE_BLOCK
{
    _PEB_FREE_BLOCK* Next;
    DWORD            Size;
} PEB_FREE_BLOCK, *PPEB_FREE_BLOCK;

typedef void (*PPEBLOCKROUTINE)(PVOID PebLock);

typedef struct _CLIENT_ID
{
    HANDLE UniqueProcess;
    HANDLE UniqueThread;
} CLIENT_ID, *PCLIENT_ID;

typedef struct LDR_DATA_ENTRY
{
    LIST_ENTRY     InMemoryOrderModuleList;
    PVOID          BaseAddress;
    PVOID          EntryPoint;
    ULONG          SizeOfImage;
    UNICODE_STRING FullDllName;
    UNICODE_STRING BaseDllName;
    ULONG          Flags;
    SHORT          LoadCount;
    SHORT          TlsIndex;
    LIST_ENTRY     HashTableEntry;
    ULONG          TimeDateStamp;
} LDR_DATA_ENTRY, *PLDR_DATA_ENTRY;

typedef struct _PEB_LDR_DATA
{
    BYTE       Reserved1[8];
    PVOID      Reserved2[3];
    LIST_ENTRY InMemoryOrderModuleList;
} PEB_LDR_DATA, *PPEB_LDR_DATA;

typedef struct _LDR_MODULE
{
    LIST_ENTRY     InLoadOrderModuleList;
    LIST_ENTRY     InMemoryOrderModuleList;
    LIST_ENTRY     InInitializationOrderModuleList;
    PVOID          BaseAddress;
    PVOID          EntryPoint;
    ULONG          SizeOfImage;
    UNICODE_STRING FullDllName;
    UNICODE_STRING BaseDllName;
    ULONG          Flags;
    SHORT          LoadCount;
    SHORT          TlsIndex;
    LIST_ENTRY     HashTableEntry;
    ULONG          TimeDateStamp;
} LDR_MODULE, *PLDR_MODULE;

typedef struct _PEB
{
    BYTE                         Reserved1[2];
    BYTE                         BeingDebugged;
    BYTE                         Reserved2[1];
    PVOID                        Reserved3[2];
    PPEB_LDR_DATA                Ldr;
    PRTL_USER_PROCESS_PARAMETERS ProcessParameters;
    ULONGLONG                    SubSystemData;
    ULONGLONG                    ProcessHeap;
    ULONGLONG                    FastPebLock;
    ULONGLONG                    AtlThunkSListPtr;
    ULONGLONG                    IFEOKey;
    union
    {
        ULONG CrossProcessFlags;
        struct
        {
            ULONG ProcessInJob : 1;
            ULONG ProcessInitializing : 1;
            ULONG ProcessUsingVEH : 1;
            ULONG ProcessUsingVCH : 1;
            ULONG ProcessUsingFTH : 1;
            ULONG ProcessPreviouslyThrottled : 1;
            ULONG ProcessCurrentlyThrottled : 1;
            ULONG ProcessImagesHotPatched : 1;
            ULONG ReservedBits0 : 24;
        };
    };
    UCHAR Padding1[4];
    union
    {
        ULONGLONG KernelCallbackTable;
        ULONGLONG UserSharedInfoPtr;
    };
    ULONG                SystemReserved;
    ULONG                AtlThunkSListPtr32;
    ULONGLONG            ApiSetMap;
    ULONG                TlsExpansionCounter;
    UCHAR                Padding2[4];
    ULONGLONG            TlsBitmap;
    ULONG                TlsBitmapBits[2];
    ULONGLONG            ReadOnlySharedMemoryBase;
    ULONGLONG            SharedData;
    ULONGLONG            ReadOnlyStaticServerData;
    ULONGLONG            AnsiCodePageData;
    ULONGLONG            OemCodePageData;
    ULONGLONG            UnicodeCaseTableData;
    ULONG                NumberOfProcessors;
    ULONG                NtGlobalFlag;
    union _LARGE_INTEGER CriticalSectionTimeout;
    ULONGLONG            HeapSegmentReserve;
    ULONGLONG            HeapSegmentCommit;
    ULONGLONG            HeapDeCommitTotalFreeThreshold;
    ULONGLONG            HeapDeCommitFreeBlockThreshold;
    ULONG                NumberOfHeaps;
    ULONG                MaximumNumberOfHeaps;
    ULONGLONG            ProcessHeaps;
    ULONGLONG            GdiSharedHandleTable;
    ULONGLONG            ProcessStarterHelper;
    ULONG                GdiDCAttributeList;
    UCHAR                Padding3[4];
    ULONGLONG            LoaderLock;
    ULONG                OSMajorVersion;
    ULONG                OSMinorVersion;
    USHORT               OSBuildNumber;
} PEB, *PPEB;

// typedef struct _PEB_LDR_DATA {
//	BYTE       Reserved1[8];
//	PVOID      Reserved2[3];
//	LIST_ENTRY InMemoryOrderModuleList;
// } PEB_LDR_DATA, *PPEB_LDR_DATA;

typedef struct _LDR_DATA_TABLE_ENTRY
{
    LIST_ENTRY     InLoadOrderLinks;
    LIST_ENTRY     InMemoryOrderLinks;
    LIST_ENTRY     InInitializationOrderLinks;
    PVOID          DllBase;
    PVOID          EntryPoint;
    ULONG          SizeOfImage;
    UNICODE_STRING FullDllName;
    UNICODE_STRING BaseDllName;
    ULONG          Flags;
    WORD           LoadCount;
    WORD           TlsIndex;
    union
    {
        LIST_ENTRY HashLinks;
        struct
        {
            PVOID SectionPointer;
            ULONG CheckSum;
        };
    };
    union
    {
        ULONG TimeDateStamp;
        PVOID LoadedImports;
    };
    _ACTIVATION_CONTEXT* EntryPointActivationContext;
    PVOID                PatchInformation;
    LIST_ENTRY           ForwarderLinks;
    LIST_ENTRY           ServiceTagLinks;
    LIST_ENTRY           StaticLinks;
} LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY;

typedef struct _UNLINKED_MODULE
{
    HMODULE               hModule;
    PLIST_ENTRY           RealInLoadOrderLinks;
    PLIST_ENTRY           RealInMemoryOrderLinks;
    PLIST_ENTRY           RealInInitializationOrderLinks;
    PLDR_DATA_TABLE_ENTRY Entry;
} UNLINKED_MODULE;

#define UNLINK(x)                 \
    (x).Flink->Blink = (x).Blink; \
    (x).Blink->Flink = (x).Flink;

#define RELINK(x, real)           \
    (x).Flink->Blink = (real);    \
    (x).Blink->Flink = (real);    \
    (real)->Blink    = (x).Blink; \
    (real)->Flink    = (x).Flink;

struct FindModuleHandle
{
    HMODULE m_hModule;
    FindModuleHandle(HMODULE hModule) : m_hModule(hModule)
    { }
    bool operator()(UNLINKED_MODULE const& Module) const
    {
        return (Module.hModule == m_hModule);
    }
};

typedef struct _GDI_TEB_BATCH
{
    ULONG     Offset;
    ULONG_PTR HDC;
    ULONG     Buffer[GDI_BATCH_BUFFER_SIZE];
} GDI_TEB_BATCH, *PGDI_TEB_BATCH;

typedef struct _TEB_ACTIVE_FRAME_CONTEXT
{
    ULONG Flags;
    PSTR  FrameName;
} TEB_ACTIVE_FRAME_CONTEXT, *PTEB_ACTIVE_FRAME_CONTEXT;

typedef struct _TEB_ACTIVE_FRAME
{
    ULONG                     Flags;
    struct _TEB_ACTIVE_FRAME* Previous;
    PTEB_ACTIVE_FRAME_CONTEXT Context;
} TEB_ACTIVE_FRAME, *PTEB_ACTIVE_FRAME;

typedef struct _TEB
{
    NT_TIB    NtTib;
    PVOID     EnvironmentPointer;
    CLIENT_ID ClientId;
    PVOID     ActiveRpcHandle;
    PVOID     ThreadLocalStoragePointer;
    PPEB      ProcessEnvironmentBlock;
    ULONG     LastErrorValue;
    ULONG     CountOfOwnedCriticalSections;
    PVOID     CsrClientThread;
    PVOID     Win32ThreadInfo;
    ULONG     User32Reserved[26];
    ULONG     UserReserved[5];
    PVOID     WOW32Reserved;
    LCID      CurrentLocale;
    ULONG     FpSoftwareStatusRegister;
    PVOID     SystemReserved1[54];
    NTSTATUS  ExceptionCode;
    PVOID     ActivationContextStackPointer;
#ifdef _M_X64
    UCHAR SpareBytes[24];
#else
    UCHAR SpareBytes[36];
#endif
    ULONG          TxFsContext;
    GDI_TEB_BATCH  GdiTebBatch;
    CLIENT_ID      RealClientId;
    HANDLE         GdiCachedProcessHandle;
    ULONG          GdiClientPID;
    ULONG          GdiClientTID;
    PVOID          GdiThreadLocalInfo;
    ULONG_PTR      Win32ClientInfo[62];
    PVOID          glDispatchTable[233];
    ULONG_PTR      glReserved1[29];
    PVOID          glReserved2;
    PVOID          glSectionInfo;
    PVOID          glSection;
    PVOID          glTable;
    PVOID          glCurrentRC;
    PVOID          glContext;
    NTSTATUS       LastStatusValue;
    UNICODE_STRING StaticUnicodeString;
    WCHAR          StaticUnicodeBuffer[261];
    PVOID          DeallocationStack;
    PVOID          TlsSlots[64];
    LIST_ENTRY     TlsLinks;
    PVOID          Vdm;
    PVOID          ReservedForNtRpc;
    PVOID          DbgSsReserved[2];
    ULONG          HardErrorMode;
#ifdef _M_X64
    PVOID Instrumentation[11];
#else
    PVOID Instrumentation[9];
#endif
    GUID  ActivityId;
    PVOID SubProcessTag;
    PVOID EtwLocalData;
    PVOID EtwTraceData;
    PVOID WinSockData;
    ULONG GdiBatchCount;
    union
    {
        PROCESSOR_NUMBER CurrentIdealProcessor;
        ULONG            IdealProcessorValue;
        struct
        {
            UCHAR ReservedPad0;
            UCHAR ReservedPad1;
            UCHAR ReservedPad2;
            UCHAR IdealProcessor;
        };
    };
    ULONG     GuaranteedStackBytes;
    PVOID     ReservedForPerf;
    PVOID     ReservedForOle;
    ULONG     WaitingOnLoaderLock;
    PVOID     SavedPriorityState;
    ULONG_PTR SoftPatchPtr1;
    PVOID     ThreadPoolData;
    PVOID*    TlsExpansionSlots;
#ifdef _M_X64
    PVOID DeallocationBStore;
    PVOID BStoreLimit;
#endif
    ULONG             MuiGeneration;
    ULONG             IsImpersonating;
    PVOID             NlsCache;
    PVOID             pShimData;
    ULONG             HeapVirtualAffinity;
    HANDLE            CurrentTransactionHandle;
    PTEB_ACTIVE_FRAME ActiveFrame;
    PVOID             FlsData;
    PVOID             PreferredLanguages;
    PVOID             UserPrefLanguages;
    PVOID             MergedPrefLanguages;
    ULONG             MuiImpersonation;
    union
    {
        USHORT CrossTebFlags;
        USHORT SpareCrossTebBits : 16;
    };
    union
    {
        USHORT SameTebFlags;
        struct
        {
            USHORT SafeThunkCall : 1;
            USHORT InDebugPrint : 1;
            USHORT HasFiberData : 1;
            USHORT SkipThreadAttach : 1;
            USHORT WerInShipAssertCode : 1;
            USHORT RanProcessInit : 1;
            USHORT ClonedThread : 1;
            USHORT SuppressDebugMsg : 1;
            USHORT DisableUserStackWalk : 1;
            USHORT RtlExceptionAttached : 1;
            USHORT InitialThread : 1;
            USHORT SessionAware : 1;
            USHORT SpareSameTebBits : 4;
        };
    };
    PVOID TxnScopeEnterCallback;
    PVOID TxnScopeExitCallback;
    PVOID TxnScopeContext;
    ULONG LockCount;
    ULONG SpareUlong0;
    PVOID ResourceRetValue;
    PVOID ReservedForWdf;
} TEB, *PTEB;

enum ELIST
{
    LIST_LoadOrder,
    LIST_MemoryOrder,
    LIST_InitOrder
};

#define EH_NONCONTINUABLE 0x01
#define EH_UNWINDING      0x02
#define EH_EXIT_UNWIND    0x04
#define EH_STACK_INVALID  0x08
#define EH_NESTED_CALL    0x10

typedef EXCEPTION_DISPOSITION (&PEXCEPTION_HANDLER)(struct _EXCEPTION_RECORD*, void*, struct _CONTEXT*, void*);

typedef struct _EXCEPTION_REGISTRATION
{
    struct _EXCEPTION_REGISTRATION* prev;
    PEXCEPTION_HANDLER              handler;
} EXCEPTION_REGISTRATION, *PEXCEPTION_REGISTRATION;

// typedef EXCEPTION_REGISTRATION EXCEPTION_REGISTRATION_RECORD;
// typedef PEXCEPTION_REGISTRATION PEXCEPTION_REGISTRATION_RECORD;

#ifdef _WIN64
typedef __int64 KPRIORITY;
#else
typedef long KPRIORITY;
#endif

typedef enum _SYSTEM_INFORMATION_CLASS
{
    SystemBasicInformation,
    SystemProcessorInformation,
    SystemPerformanceInformation,
    SystemTimeOfDayInformation,
    SystemPathInformation,
    SystemProcessInformation,
    SystemCallCountInformation,
    SystemDeviceInformation,
    SystemProcessorPerformanceInformation,
    SystemFlagsInformation,
    SystemCallTimeInformation,
    SystemModuleInformation,
    SystemLocksInformation,
    SystemStackTraceInformation,
    SystemPagedPoolInformation,
    SystemNonPagedPoolInformation,
    SystemHandleInformation,
    SystemObjectInformation,
    SystemPageFileInformation,
    SystemVdmInstemulInformation,
    SystemVdmBopInformation,
    SystemFileCacheInformation,
    SystemPoolTagInformation,
    SystemInterruptInformation,
    SystemDpcBehaviorInformation,
    SystemFullMemoryInformation,
    SystemLoadGdiDriverInformation,
    SystemUnloadGdiDriverInformation,
    SystemTimeAdjustmentInformation,
    SystemSummaryMemoryInformation,
    SystemNextEventIdInformation,
    SystemEventIdsInformation,
    SystemCrashDumpInformation,
    SystemExceptionInformation,
    SystemCrashDumpStateInformation,
    SystemKernelDebuggerInformation,
    SystemContextSwitchInformation,
    SystemRegistryQuotaInformation,
    SystemExtendServiceTableInformation,
    SystemPrioritySeperation,
    SystemPlugPlayBusInformation,
    SystemDockInformation,
    SystemPowerInfo,
    SystemProcessorSpeedInformation,
    SystemCurrentTimeZoneInformation,
    SystemLookasideInformation
} SYSTEM_INFORMATION_CLASS, *PSYSTEM_INFORMATION_CLASS;

typedef enum _PROCESSINFOCLASS
{
    ProcessBasicInformation = 0, // 0, q: PROCESS_BASIC_INFORMATION, PROCESS_EXTENDED_BASIC_INFORMATION
    ProcessQuotaLimits,          // qs: QUOTA_LIMITS, QUOTA_LIMITS_EX
    ProcessIoCounters,           // q: IO_COUNTERS
    ProcessVmCounters,           // q: VM_COUNTERS, VM_COUNTERS_EX
    ProcessTimes,                // q: KERNEL_USER_TIMES
    ProcessBasePriority,         // s: KPRIORITY
    ProcessRaisePriority,        // s: ULONG
    ProcessDebugPort,            // q: HANDLE
    ProcessExceptionPort,        // s: HANDLE
    ProcessAccessToken,          // s: PROCESS_ACCESS_TOKEN
    ProcessLdtInformation,       // 10
    ProcessLdtSize,
    ProcessDefaultHardErrorMode, // qs: ULONG
    ProcessIoPortHandlers,       // (kernel-mode only)
    ProcessPooledUsageAndLimits, // q: POOLED_USAGE_AND_LIMITS
    ProcessWorkingSetWatch,      // q: PROCESS_WS_WATCH_INFORMATION[]; s: void
    ProcessUserModeIOPL,
    ProcessEnableAlignmentFaultFixup, // s: BOOLEAN
    ProcessPriorityClass,             // qs: PROCESS_PRIORITY_CLASS
    ProcessWx86Information,
    ProcessHandleCount,           // 20, q: ULONG, PROCESS_HANDLE_INFORMATION
    ProcessAffinityMask,          // s: KAFFINITY
    ProcessPriorityBoost,         // qs: ULONG
    ProcessDeviceMap,             // qs: PROCESS_DEVICEMAP_INFORMATION, PROCESS_DEVICEMAP_INFORMATION_EX
    ProcessSessionInformation,    // q: PROCESS_SESSION_INFORMATION
    ProcessForegroundInformation, // s: PROCESS_FOREGROUND_BACKGROUND
    ProcessWow64Information,      // q: ULONG_PTR
    ProcessImageFileName,         // q: UNICODE_STRING
    ProcessLUIDDeviceMapsEnabled, // q: ULONG
    ProcessBreakOnTermination,    // qs: ULONG
    ProcessDebugObjectHandle,     // 30, q: HANDLE
    ProcessDebugFlags,            // qs: ULONG
    ProcessHandleTracing,         // q: PROCESS_HANDLE_TRACING_QUERY; s: size 0 disables, otherwise enables
    ProcessIoPriority,            // qs: ULONG
    ProcessExecuteFlags,          // qs: ULONG
    ProcessResourceManagement,
    ProcessCookie,                  // q: ULONG
    ProcessImageInformation,        // q: SECTION_IMAGE_INFORMATION
    ProcessCycleTime,               // q: PROCESS_CYCLE_TIME_INFORMATION
    ProcessPagePriority,            // q: ULONG
    ProcessInstrumentationCallback, // 40
    ProcessThreadStackAllocation,   // s: PROCESS_STACK_ALLOCATION_INFORMATION, PROCESS_STACK_ALLOCATION_INFORMATION_EX
    ProcessWorkingSetWatchEx,       // q: PROCESS_WS_WATCH_INFORMATION_EX[]
    ProcessImageFileNameWin32,      // q: UNICODE_STRING
    ProcessImageFileMapping,        // q: HANDLE (input)
    ProcessAffinityUpdateMode,      // qs: PROCESS_AFFINITY_UPDATE_MODE
    ProcessMemoryAllocationMode,    // qs: PROCESS_MEMORY_ALLOCATION_MODE
    ProcessGroupInformation,        // q: USHORT[]
    ProcessTokenVirtualizationEnabled, // s: ULONG
    ProcessConsoleHostProcess,         // q: ULONG_PTR
    ProcessWindowInformation,          // 50, q: PROCESS_WINDOW_INFORMATION
    ProcessHandleInformation,          // q: PROCESS_HANDLE_SNAPSHOT_INFORMATION // since WIN8
    ProcessMitigationPolicy,           // s: PROCESS_MITIGATION_POLICY_INFORMATION
    ProcessDynamicFunctionTableInformation,
    ProcessHandleCheckingMode,
    ProcessKeepAliveCount,    // q: PROCESS_KEEPALIVE_COUNT_INFORMATION
    ProcessRevokeFileHandles, // s: PROCESS_REVOKE_FILE_HANDLES_INFORMATION
    MaxProcessInfoClass
} PROCESSINFOCLASS;

typedef struct _SYSTEM_THREADS
{
    LARGE_INTEGER KernelTime;
    LARGE_INTEGER UserTime;
    LARGE_INTEGER CreateTime;
    ULONG         WaitTime;
    PVOID         StartAddress;
    CLIENT_ID     ClientId;
    LONG          Priority;
    LONG          BasePriority;
    ULONG         ContextSwitchCount;
    LONG          State;
    LONG          WaitReason;
} SYSTEM_THREADS, *PSYSTEM_THREADS;

typedef struct _PROCESS_BASIC_INFORMATION
{
    PVOID     Reserved1;
    PPEB      PebBaseAddress;
    PVOID     Reserved2[2];
    ULONG_PTR UniqueProcessId;
    PVOID     Reserved3;
} PROCESS_BASIC_INFORMATION, *PPROCESS_BASIC_INFORMATION;

#define MAX_UNICODE_PATH 32767L
typedef struct _PROCESSINFO
{
    DWORD dwPID;
    DWORD dwParentPID;
    DWORD dwSessionID;
    DWORD dwPEBBaseAddress;
    DWORD dwAffinityMask;
    LONG  dwBasePriority;
    LONG  dwExitStatus;
    BYTE  cBeingDebugged;
    TCHAR szImgPath[MAX_UNICODE_PATH];
    TCHAR szCmdLine[MAX_UNICODE_PATH];
} PROCESSINFO;

typedef struct _VM_COUNTERS
{
#ifdef _WIN64
    SIZE_T PeakVirtualSize;
    SIZE_T PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
    SIZE_T VirtualSize;
#else
    SIZE_T PeakVirtualSize;
    SIZE_T VirtualSize;
    ULONG PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
#endif
} VM_COUNTERS, *PVM_COUNTERS;

typedef struct _SYSTEM_PROCESSES
{
    ULONG          NextEntryDelta;
    ULONG          ThreadCount;
    ULONG          Reserved1[6];
    LARGE_INTEGER  CreateTime;
    LARGE_INTEGER  UserTime;
    LARGE_INTEGER  KernelTime;
    UNICODE_STRING ProcessName;
    KPRIORITY      BasePriority;
    ULONG          ProcessId;
    ULONG          InheritedFromProcessId;
    ULONG          HandleCount;
    ULONG          Reserved2[2];
    VM_COUNTERS    VmCounters;
#if _WIN32_WINNT >= 0x500
    IO_COUNTERS IoCounters;
#endif
    SYSTEM_THREADS Threads[1];
} SYSTEM_PROCESSES, *PSYSTEM_PROCESSES;

typedef struct
{
    USHORT ProcessorArchitecture;
    USHORT ProcessorLevel;
    USHORT ProcessorRevision;
    USHORT Reserved;
    ULONG  ProcessorFeatureBits;
} SYSTEM_PROCESSOR_INFORMATION;

typedef struct _PS_ATTRIBUTE
{
    ULONG  Attribute;
    SIZE_T Size;
    union
    {
        ULONG Value;
        PVOID ValuePtr;
    };
    PSIZE_T ReturnLength;
} PS_ATTRIBUTE, *PPS_ATTRIBUTE;

typedef struct _PS_ATTRIBUTE_LIST
{
    SIZE_T       TotalLength;
    PS_ATTRIBUTE Attributes[1];
} PS_ATTRIBUTE_LIST, *PPS_ATTRIBUTE_LIST;

typedef struct _OBJECT_ATTRIBUTES
{
    ULONG           Length;
    HANDLE          RootDirectory;
    PUNICODE_STRING ObjectName;
    ULONG           Attributes;
    PVOID           SecurityDescriptor;       // PSECURITY_DESCRIPTOR;
    PVOID           SecurityQualityOfService; // PSECURITY_QUALITY_OF_SERVICE
} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES;

typedef struct _OBJECT_ATTRIBUTES64
{
    ULONG   Length;
    ULONG64 RootDirectory;
    ULONG64 ObjectName;
    ULONG   Attributes;
    ULONG64 SecurityDescriptor;
    ULONG64 SecurityQualityOfService;
} OBJECT_ATTRIBUTES64, *POBJECT_ATTRIBUTES64;

#define InitializeObjectAttributes(p, n, a, r, s)                  \
    {                                                              \
        (p)->Length                   = sizeof(OBJECT_ATTRIBUTES); \
        (p)->RootDirectory            = r;                         \
        (p)->Attributes               = a;                         \
        (p)->ObjectName               = n;                         \
        (p)->SecurityDescriptor       = s;                         \
        (p)->SecurityQualityOfService = NULL;                      \
    }

#define InitializeObjectAttributes64(p, n, a, r, s)                   \
    {                                                                 \
        (p)->Length                   = sizeof(_OBJECT_ATTRIBUTES64); \
        (p)->RootDirectory            = r;                            \
        (p)->Attributes               = a;                            \
        (p)->ObjectName               = n;                            \
        (p)->SecurityDescriptor       = s;                            \
        (p)->SecurityQualityOfService = NULL;                         \
    }

// begin_rev
#define PS_ATTRIBUTE_NUMBER_MASK 0x0000FFFF
#define PS_ATTRIBUTE_THREAD      0x00010000 // can be used with threads
#define PS_ATTRIBUTE_INPUT       0x00020000 // input only
#define PS_ATTRIBUTE_ADDITIVE    0x00040000 /// Is an additional option (see ProcThreadAttributeValue in WinBase.h)
// end_rev

typedef enum _PS_ATTRIBUTE_NUM
{
    PsAttributeParentProcess,     // in HANDLE
    PsAttributeDebugPort,         // in HANDLE
    PsAttributeToken,             // in HANDLE
    PsAttributeClientId,          // out PCLIENT_ID
    PsAttributeTebAddress,        // out PTEB
    PsAttributeImageName,         // in PWSTR
    PsAttributeImageInfo,         // out PSECTION_IMAGE_INFORMATION
    PsAttributeMemoryReserve,     // in PPS_MEMORY_RESERVE
    PsAttributePriorityClass,     // in UCHAR
    PsAttributeErrorMode,         // in ULONG
    PsAttributeStdHandleInfo,     // 10, in PPS_STD_HANDLE_INFO
    PsAttributeHandleList,        // in PHANDLE
    PsAttributeGroupAffinity,     // in PGROUP_AFFINITY
    PsAttributePreferredNode,     // in PUSHORT
    PsAttributeIdealProcessor,    // in PPROCESSOR_NUMBER
    PsAttributeUmsThread,         // see UpdateProceThreadAttributeList in msdn (CreateProcessA/W...) in
                                  // PUMS_CREATE_THREAD_ATTRIBUTES
    PsAttributeMitigationOptions, // in UCHAR
    PsAttributeProtectionLevel,
    PsAttributeSecureProcess, // since THRESHOLD (Virtual Secure Mode, Device Guard)
    PsAttributeJobList,
    PsAttributeMax
} PS_ATTRIBUTE_NUM;

#define PsAttributeValue(Number, Thread, Input, Additive)                                                              \
    (((Number)&PS_ATTRIBUTE_NUMBER_MASK) | ((Thread) ? PS_ATTRIBUTE_THREAD : 0) | ((Input) ? PS_ATTRIBUTE_INPUT : 0) | \
     ((Additive) ? PS_ATTRIBUTE_ADDITIVE : 0))

// Helpful tmeplated PEB and TEB structs etc thanks DarthTon

enum MEMORY_INFORMATION_CLASS
{
    MemoryBasicInformation = 0,
    MemoryWorkingSetList,
    MemorySectionName,
    MemoryBasicVlmInformation,
    MemoryWorkingSetExList
};

enum SECTION_INFORMATION_CLASS
{
    SectionBasicInformation,
    SectionImageInformation
};

enum POOL_TYPE
{
    NonPagedPool,
    PagedPool,
    NonPagedPoolMustSucceed,
    DontUseThisType,
    NonPagedPoolCacheAligned,
    PagedPoolCacheAligned,
    NonPagedPoolCacheAlignedMustS
};

// nonstandard extension used : nameless struct/union
#pragma warning(disable : 4201)

template <typename T>
struct _LIST_ENTRY_T
{
    T Flink;
    T Blink;
};

template <typename T>
struct _UNICODE_STRING_T
{
    WORD Length;
    WORD MaximumLength;
    T    Buffer;
};

template <typename T>
struct _NT_TIB_T
{
    T ExceptionList;
    T StackBase;
    T StackLimit;
    T SubSystemTib;
    T FiberData;
    T ArbitraryUserPointer;
    T Self;
};

template <typename T>
struct _CLIENT_ID_T
{
    T UniqueProcess;
    T UniqueThread;
};

template <typename T>
struct _GDI_TEB_BATCH_T
{
    DWORD Offset;
    T     HDC;
    DWORD Buffer[310];
};

template <typename T>
struct _TEB_T
{
    typedef T type;

    _NT_TIB_T<T>         NtTib;
    T                    EnvironmentPointer;
    _CLIENT_ID_T<T>      ClientId;
    T                    ActiveRpcHandle;
    T                    ThreadLocalStoragePointer;
    T                    ProcessEnvironmentBlock;
    DWORD                LastErrorValue;
    DWORD                CountOfOwnedCriticalSections;
    T                    CsrClientThread;
    T                    Win32ThreadInfo;
    DWORD                User32Reserved[26];
    T                    UserReserved[5];
    T                    WOW32Reserved;
    DWORD                CurrentLocale;
    DWORD                FpSoftwareStatusRegister;
    T                    SystemReserved1[54];
    DWORD                ExceptionCode;
    T                    ActivationContextStackPointer;
    BYTE                 SpareBytes[36];
    DWORD                TxFsContext;
    _GDI_TEB_BATCH_T<T>  GdiTebBatch;
    _CLIENT_ID_T<T>      RealClientId;
    T                    GdiCachedProcessHandle;
    DWORD                GdiClientPID;
    DWORD                GdiClientTID;
    T                    GdiThreadLocalInfo;
    T                    Win32ClientInfo[62];
    T                    glDispatchTable[233];
    T                    glReserved1[29];
    T                    glReserved2;
    T                    glSectionInfo;
    T                    glSection;
    T                    glTable;
    T                    glCurrentRC;
    T                    glContext;
    DWORD                LastStatusValue;
    _UNICODE_STRING_T<T> StaticUnicodeString;
    wchar_t              StaticUnicodeBuffer[261];
    T                    DeallocationStack;
    T                    TlsSlots[64];
    _LIST_ENTRY_T<T>     TlsLinks;
    T                    Vdm;
    T                    ReservedForNtRpc;
    T                    DbgSsReserved[2];
    DWORD                HardErrorMode;
    T                    Instrumentation[11];
    _GUID                ActivityId;
    T                    SubProcessTag;
    T                    PerflibData;
    T                    EtwTraceData;
    T                    WinSockData;
    DWORD                GdiBatchCount;
    DWORD                IdealProcessorValue;
    DWORD                GuaranteedStackBytes;
    T                    ReservedForPerf;
    T                    ReservedForOle;
    DWORD                WaitingOnLoaderLock;
    T                    SavedPriorityState;
    T                    ReservedForCodeCoverage;
    T                    ThreadPoolData;
    T                    TlsExpansionSlots;
    T                    DeallocationBStore;
    T                    BStoreLimit;
    DWORD                MuiGeneration;
    DWORD                IsImpersonating;
    T                    NlsCache;
    T                    pShimData;
    USHORT               HeapVirtualAffinity;
    USHORT               LowFragHeapDataSlot;
    T                    CurrentTransactionHandle;
    T                    ActiveFrame;
    T                    FlsData;
    T                    PreferredLanguages;
    T                    UserPrefLanguages;
    T                    MergedPrefLanguages;
    DWORD                MuiImpersonation;
    USHORT               CrossTebFlags;
    USHORT               SameTebFlags;
    T                    TxnScopeEnterCallback;
    T                    TxnScopeExitCallback;
    T                    TxnScopeContext;
    DWORD                LockCount;
    DWORD                SpareUlong0;
    T                    ResourceRetValue;
    T                    ReservedForWdf;
};

template <typename T, typename NGF, int A>
struct _PEB_T
{
    typedef T type;

    union
    {
        struct
        {
            BYTE InheritedAddressSpace;
            BYTE ReadImageFileExecOptions;
            BYTE BeingDebugged;
            BYTE BitField;
        };
        T dummy01;
    };
    T     Mutant;
    T     ImageBaseAddress;
    T     Ldr;
    T     ProcessParameters;
    T     SubSystemData;
    T     ProcessHeap;
    T     FastPebLock;
    T     AtlThunkSListPtr;
    T     IFEOKey;
    T     CrossProcessFlags;
    T     UserSharedInfoPtr;
    DWORD SystemReserved;
    DWORD AtlThunkSListPtr32;
    T     ApiSetMap;
    T     TlsExpansionCounter;
    T     TlsBitmap;
    DWORD TlsBitmapBits[2];
    T     ReadOnlySharedMemoryBase;
    T     HotpatchInformation;
    T     ReadOnlyStaticServerData;
    T     AnsiCodePageData;
    T     OemCodePageData;
    T     UnicodeCaseTableData;
    DWORD NumberOfProcessors;
    union
    {
        DWORD NtGlobalFlag;
        NGF   dummy02;
    };
    LARGE_INTEGER        CriticalSectionTimeout;
    T                    HeapSegmentReserve;
    T                    HeapSegmentCommit;
    T                    HeapDeCommitTotalFreeThreshold;
    T                    HeapDeCommitFreeBlockThreshold;
    DWORD                NumberOfHeaps;
    DWORD                MaximumNumberOfHeaps;
    T                    ProcessHeaps;
    T                    GdiSharedHandleTable;
    T                    ProcessStarterHelper;
    T                    GdiDCAttributeList;
    T                    LoaderLock;
    DWORD                OSMajorVersion;
    DWORD                OSMinorVersion;
    WORD                 OSBuildNumber;
    WORD                 OSCSDVersion;
    DWORD                OSPlatformId;
    DWORD                ImageSubsystem;
    DWORD                ImageSubsystemMajorVersion;
    T                    ImageSubsystemMinorVersion;
    T                    ActiveProcessAffinityMask;
    T                    GdiHandleBuffer[A];
    T                    PostProcessInitRoutine;
    T                    TlsExpansionBitmap;
    DWORD                TlsExpansionBitmapBits[32];
    T                    SessionId;
    ULARGE_INTEGER       AppCompatFlags;
    ULARGE_INTEGER       AppCompatFlagsUser;
    T                    pShimData;
    T                    AppCompatInfo;
    _UNICODE_STRING_T<T> CSDVersion;
    T                    ActivationContextData;
    T                    ProcessAssemblyStorageMap;
    T                    SystemDefaultActivationContextData;
    T                    SystemAssemblyStorageMap;
    T                    MinimumStackCommit;
    T                    FlsCallback;
    _LIST_ENTRY_T<T>     FlsListHead;
    T                    FlsBitmap;
    DWORD                FlsBitmapBits[4];
    T                    FlsHighIndex;
    T                    WerRegistrationData;
    T                    WerShipAssertPtr;
    T                    pContextData;
    T                    pImageHeaderHash;
    T                    TracingFlags;
    T                    CsrServerReadOnlySharedMemoryBase;
};

#pragma warning(default : 4201)

template <typename T>
struct _ACTCTXW_T
{
    ULONG  cbSize;
    DWORD  dwFlags;
    T      lpSource;
    USHORT wProcessorArchitecture;
    LANGID wLangId;
    T      lpAssemblyDirectory;
    T      lpResourceName;
    T      lpApplicationName;
    T      hModule;
};

template <typename T>
struct _PROCESS_BASIC_INFORMATION_T
{
    NTSTATUS ExitStatus;
    ULONG    Reserved0;
    T        PebBaseAddress;
    T        AffinityMask;
    LONG     BasePriority;
    ULONG    Reserved1;
    T        uUniqueProcessId;
    T        uInheritedFromUniqueProcessId;
};

template <typename T>
struct _SECTION_BASIC_INFORMATION_T
{
    T             Base;
    ULONG         Attributes;
    LARGE_INTEGER Size;
};

template <typename T>
struct _PROCESS_EXTENDED_BASIC_INFORMATION_T
{
    T                               Size; // Must be set to structure size on input
    _PROCESS_BASIC_INFORMATION_T<T> BasicInfo;
    struct
    {
        ULONG IsProtectedProcess : 1;
        ULONG IsWow64Process : 1;
        ULONG IsProcessDeleting : 1;
        ULONG IsCrossSessionCreate : 1;
        ULONG IsFrozen : 1;
        ULONG IsBackground : 1;
        ULONG IsStronglyNamed : 1;
        ULONG SpareBits : 25;
    } Flags;
};

template <typename T>
struct _THREAD_BASIC_INFORMATION_T
{
    NTSTATUS        ExitStatus;
    T               TebBaseAddress;
    _CLIENT_ID_T<T> ClientID;
    T               AffinityMask;
    LONG            Priority;
    LONG            BasePriority;
};

template <typename T>
struct _VM_COUNTERS_T
{
    T     PeakVirtualSize;
    T     VirtualSize;
    ULONG PageFaultCount;
    T     PeakWorkingSetSize;
    T     WorkingSetSize;
    T     QuotaPeakPagedPoolUsage;
    T     QuotaPagedPoolUsage;
    T     QuotaPeakNonPagedPoolUsage;
    T     QuotaNonPagedPoolUsage;
    T     PagefileUsage;
    T     PeakPagefileUsage;
};

template <typename T>
struct _SYSTEM_THREAD_INFORMATION_T
{
    LARGE_INTEGER   KernelTime;
    LARGE_INTEGER   UserTime;
    LARGE_INTEGER   CreateTime;
    ULONG           WaitTime;
    T               StartAddress;
    _CLIENT_ID_T<T> ClientId;
    LONG            Priority;
    LONG            BasePriority;
    ULONG           ContextSwitches;
    ULONG           ThreadState;
    ULONG           WaitReason;
};

template <typename T>
struct _SYSTEM_EXTENDED_THREAD_INFORMATION_T
{
    _SYSTEM_THREAD_INFORMATION_T<T> ThreadInfo;
    T                               StackBase;
    T                               StackLimit;
    T                               Win32StartAddress;
    T                               TebBase;
    T                               Reserved[3];
};

template <typename T>
struct _SYSTEM_PROCESS_INFORMATION_T
{
    ULONG                                    NextEntryOffset;
    ULONG                                    NumberOfThreads;
    LARGE_INTEGER                            WorkingSetPrivateSize;
    ULONG                                    HardFaultCount;
    ULONG                                    NumberOfThreadsHighWatermark;
    ULONGLONG                                CycleTime;
    LARGE_INTEGER                            CreateTime;
    LARGE_INTEGER                            UserTime;
    LARGE_INTEGER                            KernelTime;
    _UNICODE_STRING_T<T>                     ImageName;
    LONG                                     BasePriority;
    T                                        UniqueProcessId;
    T                                        InheritedFromUniqueProcessId;
    ULONG                                    HandleCount;
    ULONG                                    SessionId;
    T                                        UniqueProcessKey;
    _VM_COUNTERS_T<T>                        VmCounters;
    T                                        PrivatePageCount;
    IO_COUNTERS                              IoCounters;
    _SYSTEM_EXTENDED_THREAD_INFORMATION_T<T> Threads[1];
};

template <typename T>
struct _SYSTEM_HANDLE_T
{
    ULONG       ProcessId;
    BYTE        ObjectTypeNumber;
    BYTE        Flags;
    USHORT      Handle;
    T           Object;
    ACCESS_MASK GrantedAccess;
};

template <typename T>
struct _SYSTEM_HANDLE_INFORMATION_T
{
    ULONG               HandleCount;
    _SYSTEM_HANDLE_T<T> Handles[1];
};

template <typename T>
struct _OBJECT_TYPE_INFORMATION_T
{
    _UNICODE_STRING_T<T> Name;
    ULONG                TotalNumberOfObjects;
    ULONG                TotalNumberOfHandles;
    ULONG                TotalPagedPoolUsage;
    ULONG                TotalNonPagedPoolUsage;
    ULONG                TotalNamePoolUsage;
    ULONG                TotalHandleTableUsage;
    ULONG                HighWaterNumberOfObjects;
    ULONG                HighWaterNumberOfHandles;
    ULONG                HighWaterPagedPoolUsage;
    ULONG                HighWaterNonPagedPoolUsage;
    ULONG                HighWaterNamePoolUsage;
    ULONG                HighWaterHandleTableUsage;
    ULONG                InvalidAttributes;
    GENERIC_MAPPING      GenericMapping;
    ULONG                ValidAccess;
    BOOLEAN              SecurityRequired;
    BOOLEAN              MaintainHandleCount;
    USHORT               MaintainTypeList;
    POOL_TYPE            PoolType;
    ULONG                PagedPoolUsage;
    ULONG                NonPagedPoolUsage;
};

template <typename T>
struct _SYSTEM_BASIC_INFORMATION
{
    ULONG Reserved;
    ULONG TimerResolution;
    ULONG PageSize;
    ULONG NumberOfPhysicalPages;
    ULONG LowestPhysicalPageNumber;
    ULONG HighestPhysicalPageNumber;
    ULONG AllocationGranularity;
    T     MinimumUserModeAddress;
    T     MaximumUserModeAddress;
    T     ActiveProcessorsAffinityMask;
    UCHAR NumberOfProcessors;
};

struct _XSAVE_FORMAT64
{
    WORD   ControlWord;
    WORD   StatusWord;
    BYTE   TagWord;
    BYTE   Reserved1;
    WORD   ErrorOpcode;
    DWORD  ErrorOffset;
    WORD   ErrorSelector;
    WORD   Reserved2;
    DWORD  DataOffset;
    WORD   DataSelector;
    WORD   Reserved3;
    DWORD  MxCsr;
    DWORD  MxCsr_Mask;
    _M128A FloatRegisters[8];
    _M128A XmmRegisters[16];
    BYTE   Reserved4[96];
};

template <typename T>
struct _CONTEXT_T;

template <>
struct _CONTEXT_T<DWORD>
{
    DWORD                    ContextFlags;
    DWORD                    Dr0;
    DWORD                    Dr1;
    DWORD                    Dr2;
    DWORD                    Dr3;
    DWORD                    Dr6;
    DWORD                    Dr7;
    WOW64_FLOATING_SAVE_AREA FloatSave;
    DWORD                    SegGs;
    DWORD                    SegFs;
    DWORD                    SegEs;
    DWORD                    SegDs;
    DWORD                    Edi;
    DWORD                    Esi;
    DWORD                    Ebx;
    DWORD                    Edx;
    DWORD                    Ecx;
    DWORD                    Eax;
    DWORD                    Ebp;
    DWORD                    Eip;
    DWORD                    SegCs;  // MUST BE SANITIZED
    DWORD                    EFlags; // MUST BE SANITIZED
    DWORD                    Esp;
    DWORD                    SegSs;
    BYTE                     ExtendedRegisters[WOW64_MAXIMUM_SUPPORTED_EXTENSION];
};

template <>
struct _CONTEXT_T<DWORD64>
{
    DWORD64         P1Home;
    DWORD64         P2Home;
    DWORD64         P3Home;
    DWORD64         P4Home;
    DWORD64         P5Home;
    DWORD64         P6Home;
    DWORD           ContextFlags;
    DWORD           MxCsr;
    WORD            SegCs;
    WORD            SegDs;
    WORD            SegEs;
    WORD            SegFs;
    WORD            SegGs;
    WORD            SegSs;
    DWORD           EFlags;
    DWORD64         Dr0;
    DWORD64         Dr1;
    DWORD64         Dr2;
    DWORD64         Dr3;
    DWORD64         Dr6;
    DWORD64         Dr7;
    DWORD64         Rax;
    DWORD64         Rcx;
    DWORD64         Rdx;
    DWORD64         Rbx;
    DWORD64         Rsp;
    DWORD64         Rbp;
    DWORD64         Rsi;
    DWORD64         Rdi;
    DWORD64         R8;
    DWORD64         R9;
    DWORD64         R10;
    DWORD64         R11;
    DWORD64         R12;
    DWORD64         R13;
    DWORD64         R14;
    DWORD64         R15;
    DWORD64         Rip;
    _XSAVE_FORMAT64 FltSave;
    _M128A          Header[2];
    _M128A          Legacy[8];
    _M128A          Xmm0;
    _M128A          Xmm1;
    _M128A          Xmm2;
    _M128A          Xmm3;
    _M128A          Xmm4;
    _M128A          Xmm5;
    _M128A          Xmm6;
    _M128A          Xmm7;
    _M128A          Xmm8;
    _M128A          Xmm9;
    _M128A          Xmm10;
    _M128A          Xmm11;
    _M128A          Xmm12;
    _M128A          Xmm13;
    _M128A          Xmm14;
    _M128A          Xmm15;
    _M128A          VectorRegister[26];
    DWORD64         VectorControl;
    DWORD64         DebugControl;
    DWORD64         LastBranchToRip;
    DWORD64         LastBranchFromRip;
    DWORD64         LastExceptionToRip;
    DWORD64         LastExceptionFromRip;

    _CONTEXT_T<DWORD64>& FromCtx32(const _CONTEXT_T<DWORD>& ctx32)
    {
        ContextFlags = ctx32.ContextFlags;
        Dr0          = ctx32.Dr0;
        Dr1          = ctx32.Dr1;
        Dr2          = ctx32.Dr2;
        Dr3          = ctx32.Dr3;
        Dr6          = ctx32.Dr6;
        Dr7          = ctx32.Dr7;
        SegGs        = static_cast<WORD>(ctx32.SegGs);
        SegFs        = static_cast<WORD>(ctx32.SegFs);
        SegEs        = static_cast<WORD>(ctx32.SegEs);
        SegDs        = static_cast<WORD>(ctx32.SegDs);
        SegCs        = static_cast<WORD>(ctx32.SegCs);
        SegSs        = static_cast<WORD>(ctx32.SegSs);
        Rdi          = ctx32.Edi;
        Rsi          = ctx32.Esi;
        Rbx          = ctx32.Ebx;
        Rdx          = ctx32.Edx;
        Rcx          = ctx32.Ecx;
        Rax          = ctx32.Eax;
        Rbp          = ctx32.Ebp;
        Rip          = ctx32.Eip;
        Rsp          = ctx32.Esp;
        EFlags       = ctx32.EFlags;

        return *this;
    }
};

#ifndef CONTEXT_AMD64
    #define CONTEXT_AMD64 0x100000
#endif

#define CONTEXT64_CONTROL         (CONTEXT_AMD64 | 0x1L)
#define CONTEXT64_INTEGER         (CONTEXT_AMD64 | 0x2L)
#define CONTEXT64_SEGMENTS        (CONTEXT_AMD64 | 0x4L)
#define CONTEXT64_FLOATING_POINT  (CONTEXT_AMD64 | 0x8L)
#define CONTEXT64_DEBUG_REGISTERS (CONTEXT_AMD64 | 0x10L)
#define CONTEXT64_FULL            (CONTEXT64_CONTROL | CONTEXT64_INTEGER | CONTEXT64_FLOATING_POINT)
#define CONTEXT64_ALL \
    (CONTEXT64_CONTROL | CONTEXT64_INTEGER | CONTEXT64_SEGMENTS | CONTEXT64_FLOATING_POINT | CONTEXT64_DEBUG_REGISTERS)
#define CONTEXT64_XSTATE (CONTEXT_AMD64 | 0x20L)

//
// Loader related
//
enum _LDR_DDAG_STATE
{
    LdrModulesMerged                 = -5,
    LdrModulesInitError              = -4,
    LdrModulesSnapError              = -3,
    LdrModulesUnloaded               = -2,
    LdrModulesUnloading              = -1,
    LdrModulesPlaceHolder            = 0,
    LdrModulesMapping                = 1,
    LdrModulesMapped                 = 2,
    LdrModulesWaitingForDependencies = 3,
    LdrModulesSnapping               = 4,
    LdrModulesSnapped                = 5,
    LdrModulesCondensed              = 6,
    LdrModulesReadyToInit            = 7,
    LdrModulesInitializing           = 8,
    LdrModulesReadyToRun             = 9
};

enum _LDR_DLL_LOAD_REASON
{
    LoadReasonStaticDependency           = 0,
    LoadReasonStaticForwarderDependency  = 1,
    LoadReasonDynamicForwarderDependency = 2,
    LoadReasonDelayloadDependency        = 3,
    LoadReasonDynamicLoad                = 4,
    LoadReasonAsImageLoad                = 5,
    LoadReasonAsDataLoad                 = 6,
    LoadReasonUnknown                    = -1
};

template <typename T>
struct _PEB_LDR_DATA2
{
    unsigned long    Length;
    unsigned char    Initialized;
    T                SsHandle;
    _LIST_ENTRY_T<T> InLoadOrderModuleList;
    _LIST_ENTRY_T<T> InMemoryOrderModuleList;
    _LIST_ENTRY_T<T> InInitializationOrderModuleList;
    T                EntryInProgress;
    unsigned char    ShutdownInProgress;
    T                ShutdownThreadId;
};

template <typename T>
struct _LDR_DATA_TABLE_ENTRY_BASE
{
    _LIST_ENTRY_T<T>     InLoadOrderLinks;
    _LIST_ENTRY_T<T>     InMemoryOrderLinks;
    _LIST_ENTRY_T<T>     InInitializationOrderLinks;
    T                    DllBase;
    T                    EntryPoint;
    unsigned long        SizeOfImage;
    _UNICODE_STRING_T<T> FullDllName;
    _UNICODE_STRING_T<T> BaseDllName;
    unsigned long        Flags;
    unsigned short       LoadCount;
    unsigned short       TlsIndex;
    _LIST_ENTRY_T<T>     HashLinks;
    unsigned long        TimeDateStamp;
    T                    EntryPointActivationContext;
    T                    PatchInformation;
};

typedef struct _RTL_INVERTED_FUNCTION_TABLE_ENTRY
{
    PIMAGE_RUNTIME_FUNCTION_ENTRY ExceptionDirectory;
    PVOID                         ImageBase;
    ULONG                         ImageSize;
    ULONG                         SizeOfTable;
} RTL_INVERTED_FUNCTION_TABLE_ENTRY, *PRTL_INVERTED_FUNCTION_TABLE_ENTRY;

typedef _PEB_T<DWORD, DWORD64, 34> _PEB32;
typedef _PEB_T<DWORD64, DWORD, 30> _PEB64;

typedef _TEB_T<DWORD>     _TEB32;
typedef _TEB_T<DWORD64>   _TEB64;
typedef _TEB_T<DWORD_PTR> TEB_T;

typedef _PEB_LDR_DATA2<DWORD>     _PEB_LDR_DATA232;
typedef _PEB_LDR_DATA2<DWORD64>   _PEB_LDR_DATA264;
typedef _PEB_LDR_DATA2<DWORD_PTR> PEB_LDR_DATA_T;

typedef _LDR_DATA_TABLE_ENTRY_BASE<DWORD>     _LDR_DATA_TABLE_ENTRY_BASE32;
typedef _LDR_DATA_TABLE_ENTRY_BASE<DWORD64>   _LDR_DATA_TABLE_ENTRY_BASE64;
typedef _LDR_DATA_TABLE_ENTRY_BASE<DWORD_PTR> LDR_DATA_TABLE_ENTRY_BASE_T;

typedef _CONTEXT_T<DWORD>     _CONTEXT32;
typedef _CONTEXT_T<DWORD64>   _CONTEXT64;
typedef _CONTEXT_T<DWORD_PTR> CONTEXT_T;

typedef _SECTION_BASIC_INFORMATION_T<DWORD>     _SECTION_BASIC_INFORMATION32;
typedef _SECTION_BASIC_INFORMATION_T<DWORD64>   _SECTION_BASIC_INFORMATION64;
typedef _SECTION_BASIC_INFORMATION_T<DWORD_PTR> SECTION_BASIC_INFORMATION_T;

typedef _SYSTEM_HANDLE_INFORMATION_T<DWORD>     _SYSTEM_HANDLE_INFORMATION32;
typedef _SYSTEM_HANDLE_INFORMATION_T<DWORD64>   _SYSTEM_HANDLE_INFORMATION64;
typedef _SYSTEM_HANDLE_INFORMATION_T<DWORD_PTR> SYSTEM_HANDLE_INFORMATION_T;

typedef _OBJECT_TYPE_INFORMATION_T<DWORD>     _OBJECT_TYPE_INFORMATION32;
typedef _OBJECT_TYPE_INFORMATION_T<DWORD64>   _OBJECT_TYPE_INFORMATION64;
typedef _OBJECT_TYPE_INFORMATION_T<DWORD_PTR> OBJECT_TYPE_INFORMATION_T;

typedef _SYSTEM_BASIC_INFORMATION<DWORD>   SYSTEM_BASIC_INFORMATION;
typedef _SYSTEM_BASIC_INFORMATION<DWORD64> SYSTEM_BASIC_INFORMATION64;

#ifdef _WIN64
typedef _PEB64 PEB_T;
#else
typedef _PEB32 PEB_T;
#endif

#define NtCurrentPeb() NtCurrentTeb()->ProcessEnvironmentBlock

typedef void(NTAPI* tRtlFreeUnicodeString)(PUNICODE_STRING UnicodeString);
typedef ULONG(NTAPI* tRtlNtStatusToDosError)(NTSTATUS Status);
typedef NTSTATUS(NTAPI* tRtlGetNativeSystemInformation)(
    SYSTEM_INFORMATION_CLASS SystemInformationClass, PVOID SystemInformation, ULONG SystemInformationLength,
    PULONG ReturnLength);
typedef NTSTATUS(NTAPI* tNTQIP)(
    HANDLE ProcessHandle, PROCESSINFOCLASS ProcessInformationClass, PVOID ProcessInformation,
    ULONG ProcessInformationLength, PULONG ReturnLength);
typedef NTSTATUS(NTAPI* tNTQSI)(
    ULONG SystemInformationClass, PVOID SystemInformation, ULONG SystemInformationLength, PULONG ReturnLength);
typedef NTSTATUS(NTAPI* tNtCreateThreadEx)(
    __out PHANDLE ThreadHandle, __in ACCESS_MASK DesiredAccess, __in_opt POBJECT_ATTRIBUTES64 ObjectAttributes,
    __in HANDLE ProcessHandle, __in PVOID StartRoutine, __in_opt PVOID Argument,
    __in ULONG         CreateFlags, // THREAD_CREATE_FLAGS_*
    __in_opt ULONG_PTR ZeroBits, __in_opt SIZE_T StackSize, __in_opt SIZE_T MaximumStackSize,
    __in_opt PPS_ATTRIBUTE_LIST AttributeList);

typedef NTSTATUS(NTAPI* tRtlDosApplyFileIsolationRedirection_Ustr)(
    IN ULONG Flags, IN PUNICODE_STRING OriginalName, IN PUNICODE_STRING Extension, IN OUT PUNICODE_STRING StaticString,
    IN OUT PUNICODE_STRING DynamicString, IN OUT PUNICODE_STRING* NewName, IN PULONG NewFlags, IN PSIZE_T FileNameSize,
    IN PSIZE_T RequiredLength);

// Windows 10
//
typedef struct _DLL_PATH_STRUCT_64
{
    char     pad_0x0000[0x20];              // 0x00
    wchar_t* dllPath;                       // 0x20
    char     pad_0x0028[0x58];              // 0x28
} DLL_PATH_STRUCT_64, *PDLL_PATH_STRUCT_64; // size=0x80

typedef struct _DLL_PATH_STRUCT_32
{
    char     pad_0x0000[0x10];              // 0x00
    wchar_t* dllPath;                       // 0x10
    char     pad_0x0014[0x3C];              // 0x14
} DLL_PATH_STRUCT_32, *PDLL_PATH_STRUCT_32; // size=0x50

#ifdef _WIN64
    #define DLL_PATH_STRUCT  DLL_PATH_STRUCT_64
    #define PDLL_PATH_STRUCT PDLL_PATH_STRUCT_64
#else
    #define DLL_PATH_STRUCT  DLL_PATH_STRUCT_32
    #define PDLL_PATH_STRUCT PDLL_PATH_STRUCT_32
#endif

using NtQuerySystemInformation_ = LONG(WINAPI*)(int, PVOID, ULONG, PULONG);

extern "C"
{
    NTSYSAPI VOID NTAPI RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString);
    NTSYSAPI BOOLEAN NTAPI
    RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive);
    NTSYSAPI PVOID NTAPI   RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size);
    NTSYSAPI BOOLEAN NTAPI RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress);

    NTSYSCALLAPI NTSTATUS NTAPI NtAllocateVirtualMemory(
        HANDLE ProcessHandle, PVOID* BaseAddress, ULONG_PTR ZeroBits, PSIZE_T RegionSize, ULONG AllocationType,
        ULONG Protect);

    NTSYSCALLAPI NTSTATUS NTAPI
    NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID* BaseAddress, PSIZE_T RegionSize, ULONG FreeType);

    NTSYSCALLAPI NTSTATUS NTAPI ZwProtectVirtualMemory(
        IN HANDLE ProcessHandle, IN PVOID* BaseAddress, IN SIZE_T* NumberOfBytesToProtect, IN ULONG NewAccessProtection,
        OUT PULONG OldAccessProtection);

    NTSYSCALLAPI NTSTATUS NTAPI LdrLoadDll(
        IN PWCHAR PathToFile OPTIONAL, IN ULONG Flags OPTIONAL, IN PUNICODE_STRING ModuleFileName,
        OUT PHANDLE ModuleHandle);

    NTSYSCALLAPI NTSTATUS NTAPI NtSetInformationThread(
        __in HANDLE ThreadHandle, __in THREADINFOCLASS ThreadInformationClass,
        __in_bcount(ThreadInformationLength) PVOID ThreadInformation, __in ULONG ThreadInformationLength);

    NTSYSCALLAPI VOID NTAPI RtlRaiseException(IN PEXCEPTION_RECORD ExceptionRecord);
}

enum OBJECT_INFORMATION_CLASS
{
    ObjectBasicInformation,
    ObjectNameInformation,
    ObjectTypeInformation,
    ObjectAllInformation,
    ObjectDataInformation
};

struct OBJECT_NAME_INFORMATION
{
    UNICODE_STRING Name; // defined in winternl.h
    WCHAR          NameBuffer;
};

#pragma warning(pop)

#endif
#include "EntityList.h"
#include "../Features/EntityManager.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/logging.h"
#include "../mrt/fnv1a.hpp"
#include "../mrt/xorstr.hpp"
#include "../SDK/Offsets.h"
#include "../SDK/globals.h"

#include <cstring>
#include <stdint.h>
#include <vadefs.h>
#include <mutex>
#include <span>
// This is the main method which all the hooks being redirecting to
// static void ClientInit(CBaseNetworkable* _this, uint64_t classHash)
// {
// #ifdef _DEBUG
//     L::Print("ClientInit -> Class Added to Entity List: {}", _this->klass->_1.name);
// #endif
// }

// static void ClientInitAnimals(CBaseNetworkable* _this, uint64_t classHash)
// {
//     using namespace EntityManager;

//     auto entity = (CBaseEntity*)_this;
//     auto id     = _this->net->fields.ID.fields.Value;
//     auto pos    = ((CBaseEntity*)_this)->GetOriginPosition();

// #ifdef _DEBUG
//     L::Print("Animal[{}]: {} -> ID: {}, pos: {} {} {},  Ptr: {:X}", _this->klass->_1.name,
//              std::string(_this->klass->_1.name), _this->prefabID, pos.x, pos.y, pos.z,
//              (uintptr_t)_this);
// #endif

//     Animal animal{};

//     animal.classHash = classHash;
//     animal.entity    = entity;
//     animal.prefabId  = _this->prefabID;

//     DB::animals.insert_or_assign(id, animal);
//     EntityManager::DB::AddID(_this, id);
// }

// static void ClientInitPlayer(CBaseNetworkable* _this)
// {
//     using namespace EntityManager;

//     auto entity     = (CBasePlayer*)_this;
//     auto id         = _this->net->fields.ID.fields.Value;
//     auto pos        = ((CBaseEntity*)_this)->GetOriginPosition();
//     auto playerName = ((CString*)entity->_displayName)->str();

// #ifdef _DEBUG
//     L::Print("BasePlayer[{}] -> ID: {}, pos: {} {} {}, Name: {}, NPC?:{}, Ptr: {:X}",
//              _this->klass->_1.name, _this->prefabID, pos.x, pos.y, pos.z, playerName,
//              entity->playerModel->fields._IsNpc_k__BackingField, (uintptr_t)_this);
// #endif

//     Player player{};
//     if (memcpy_s(player.name, 129, playerName.c_str(), playerName.size()) == 0)
//     {
//         if (entity->playerModel->fields._IsNpc_k__BackingField)
//         {
//             player.classHash = HASH_RUNTIME(_this->klass->_1.name);
//             EntityManager::DB::NPCCount++;
//         }
//         else
//         {
//             EntityManager::DB::PlayerCount++;
//         }

//         player.entity = (CBaseEntity*)_this;
//         DB::players.insert_or_assign(id, player);
//         EntityManager::DB::AddID(_this, id);
//     }
// }

// std::mutex  testMtx{};
// static void DoClientDestroy(CBaseNetworkable* _this)
// {
//     auto id = EntityManager::DB::GetID(_this);

// #ifdef _DEBUG
//     L::Print("DoClientDestroy[{}] -> Pref ID {}, Ptr: {:X}", _this->klass->_1.name,
//     _this->prefabID,
//              (uintptr_t)_this);
// #endif

//     if (il2cpp::InheritsFrom(_this->klass, _("BasePlayer")))
//     {
//         auto player = (CBasePlayer*)_this;

//         if (player->playerModel->fields._IsNpc_k__BackingField)
//         {
//             EntityManager::DB::NPCCount--;
//         }
//         else
//         {
//             EntityManager::DB::PlayerCount--;
//         }
//     }

//     EntityManager::DB::RemoveID(id);
// }

// #define DoClientDestroyMethod(name)                                                                \
//     uintptr_t name##_DoClientDestroy_o;                                                            \
//     void      hk_DoClientDestroy_##name(CBaseNetworkable* _this, void* method)                     \
//     {                                                                                              \
//         DoClientDestroy(_this);                                                                    \
//         reinterpret_cast<decltype(&hk_DoClientDestroy_##name)>(name##_DoClientDestroy_o)(_this,    \
//                                                                                          method);  \
//     }

#define DoClientDestroyHook(name)                                                                  \
    auto name##_DoClientDestroy_klass = il2cpp::InitClass(_(#name));                               \
    name##_DoClientDestroy_o          = il2cpp::HookVirtualFunction(                               \
        name##_DoClientDestroy_klass, _("DoClientDestroy"), &hk_DoClientDestroy_##name);

// #define ClientInitHookMethod(name)                                                                 \
//     uintptr_t name##_ClientInit_o;                                                                 \
//     void      hk_ClientInit_##name(CBaseNetworkable* _this, CProtobuf_Entity* info, void* method)  \
//     {                                                                                              \
//         reinterpret_cast<decltype(&hk_ClientInit_##name)>(name##_ClientInit_o)(_this, info,        \
//                                                                                method);            \
//         ClientInit(_this, HASH_CTIME(#name));                                                      \
//     }

// #define ClientInitHookMethodEx(name, _method)                                                      \
//     uintptr_t name##_ClientInit_o;                                                                 \
//     void      hk_ClientInit_##name(CBaseNetworkable* _this, CProtobuf_Entity* info, void* method)  \
//     {                                                                                              \
//         reinterpret_cast<decltype(&hk_ClientInit_##name)>(name##_ClientInit_o)(_this, info,        \
//                                                                                method);            \
//         _method(_this, HASH_CTIME(#name));                                                         \
//     }

#define FullHookMethodCustom(name)                                                                 \
    uintptr_t name##_DoClientDestroy_o;                                                            \
    void      hk_DoClientDestroy_##name(CBaseNetworkable* _this, void* method)                     \
    {                                                                                              \
        DoClientDestroy(_this);                                                                    \
        reinterpret_cast<decltype(&hk_DoClientDestroy_##name)>(name##_DoClientDestroy_o)(_this,    \
                                                                                         method);  \
    }                                                                                              \
    uintptr_t name##_ClientInit_o;                                                                 \
    void      hk_ClientInit_##name(CBaseNetworkable* _this, CProtobuf_Entity* info, void* method)

#define FullHookMethod(name)                                                                       \
    uintptr_t name##_ClientInit_o;                                                                 \
    void      hk_ClientInit_##name(CBaseNetworkable* _this, CProtobuf_Entity* info, void* method)  \
    {                                                                                              \
        reinterpret_cast<decltype(&hk_ClientInit_##name)>(name##_ClientInit_o)(_this, info,        \
                                                                               method);            \
        ClientInit(_this, HASH_CTIME(#name));                                                      \
    }                                                                                              \
    uintptr_t name##_DoClientDestroy_o;                                                            \
    void      hk_DoClientDestroy_##name(CBaseNetworkable* _this, void* method)                     \
    {                                                                                              \
        DoClientDestroy(_this);                                                                    \
        reinterpret_cast<decltype(&hk_DoClientDestroy_##name)>(name##_DoClientDestroy_o)(_this,    \
                                                                                         method);  \
    }

#define FullHookMethodEx(name, initMethod)                                                         \
    uintptr_t name##_ClientInit_o;                                                                 \
    void      hk_ClientInit_##name(CBaseNetworkable* _this, CProtobuf_Entity* info, void* method)  \
    {                                                                                              \
        reinterpret_cast<decltype(&hk_ClientInit_##name)>(name##_ClientInit_o)(_this, info,        \
                                                                               method);            \
        initMethod(_this);                                                                         \
    }                                                                                              \
    uintptr_t name##_DoClientDestroy_o;                                                            \
    void      hk_DoClientDestroy_##name(CBaseNetworkable* _this, void* method)                     \
    {                                                                                              \
        DoClientDestroy(_this);                                                                    \
        reinterpret_cast<decltype(&hk_DoClientDestroy_##name)>(name##_DoClientDestroy_o)(_this,    \
                                                                                         method);  \
    }

#define CallOriginal(name)                                                                         \
    reinterpret_cast<decltype(&hk_ClientInit_##name)>(name##_ClientInit_o)(_this, info, method)

#define FullHook(name, direct)                                                                     \
    auto name##_klass = il2cpp::InitClass(_(#name));                                               \
    name##_ClientInit_o =                                                                          \
        il2cpp::HookVirtualFunction(name##_klass, _("ClientInit"), &hk_ClientInit_##name, direct); \
    name##_DoClientDestroy_o = il2cpp::HookVirtualFunction(name##_klass, _("DoClientDestroy"),     \
                                                           &hk_DoClientDestroy_##name, direct);

#define SimpleHook(name)                                                                           \
    auto name##_ClientInit_klass = il2cpp::InitClass(_(#name));                                    \
    name##_ClientInit_o =                                                                          \
        il2cpp::HookVirtualFunction(name##_klass, _("ClientInit"), &hk_ClientInit_##name);

// FullHookMethodCustom(BaseNetworkable)
// {
//     CallOriginal(BaseNetworkable);
//     using namespace EntityManager;

//     auto id  = _this->net->fields.ID.fields.Value;
//     auto pos = ((CBaseEntity*)_this)->GetOriginPosition();

// #ifdef _DEBUG
//     L::Print("BaseNetworkable -> ID: {}, pos: {} {} {}, PTR: 0x{:X}", _this->prefabID, pos.x,
//     pos.y,
//              pos.z, (uintptr_t)_this);
// #endif
// }

// FullHookMethodCustom(OreResourceEntity)
// {
//     CallOriginal(OreResourceEntity);
//     using namespace EntityManager;

//     auto id  = _this->net->fields.ID.fields.Value;
//     auto pos = ((CBaseEntity*)_this)->GetOriginPosition();

// #ifdef _DEBUG
//     L::Print("Ore[{}] -> ID: {}, pos: {} {} {}, PTR: 0x{:X}", _this->klass->_1.name,
//              _this->prefabID, pos.x, pos.y, pos.z, (uintptr_t)_this);
// #endif

//     OreResource ore{};

//     ore.entity    = _this;
//     ore.prefabId  = _this->prefabID;
//     ore.postition = pos;

//     EntityManager::DB::ores.insert_or_assign(id, ore);
//     EntityManager::DB::AddID(_this, id);
// }

// AKA BasePlayer
// FullHookMethodCustom(BasePlayer)
// {
//     CallOriginal(BasePlayer);
//     ClientInitPlayer(_this);
// }

// FullHookMethodCustom(BaseEntity)
// {
//     CallOriginal(BaseEntity);
//     using namespace EntityManager;

//     auto entity = (CBaseEntity*)_this;
//     auto id     = _this->net->fields.ID.fields.Value;
//     auto pos    = ((CBaseEntity*)_this)->GetOriginPosition();

// #ifdef _DEBUG
//     L::Print("BaseEntity[{}] -> ID: {}, pos: {} {} {},  Ptr: {:X}", _this->klass->_1.name,
//              _this->prefabID, pos.x, pos.y, pos.z, (uintptr_t)_this);
// #endif
// }

// FullHookMethodCustom(BaseCombatEntity)
// {
//     CallOriginal(BaseCombatEntity);
//     using namespace EntityManager;

//     auto entity = (CBaseCombatEntity*)_this;
//     auto id     = _this->net->fields.ID.fields.Value;
//     auto pos    = ((CBaseEntity*)_this)->GetOriginPosition();

// #ifdef _DEBUG
//     L::Print("BaseCombatEntity -> ID: {}, pos: {} {} {},  Ptr: {:X}", _this->prefabID, pos.x,
//     pos.y,
//              pos.z, (uintptr_t)_this);
// #endif
// }

// static void ClientInitBaseNPC(CBaseNetworkable* _this)
// {
//     auto classHash = HASH_RUNTIME(_this->klass->_1.name);
//     switch (classHash)
//     {
//     case HASH_CTIME("Bear"):
//     case HASH_CTIME("Boar"):
//     case HASH_CTIME("Chicken"):
//     case HASH_CTIME("Horse"):
//     case HASH_CTIME("Polarbear"):
//     case HASH_CTIME("Stag"):
//     case HASH_CTIME("Wolf"):
//     case HASH_CTIME("Zombie"):
//     {
//         ClientInitAnimals(_this, classHash);
//         break;
//     }
//     case HASH_CTIME("ScientistNPC"):
//     case HASH_CTIME("BanditGuard"):
//     case HASH_CTIME("GingerbreadNPC"):
//     case HASH_CTIME("TunnelDweller"):
//     case HASH_CTIME("UnderwaterDweller"):
//     case HASH_CTIME("ScarecrowNPC"):
//     {
//         ClientInitPlayer(_this);
//         break;
//     }
//     }
// }

// FullHookMethodCustom(BaseNpc)
// {
//     CallOriginal(BaseNpc);
//     ClientInitBaseNPC(_this);
//     // ClientInitPlayer(_this);
//     //      using namespace EntityManager;

//     //     auto id  = _this->net->fields.ID.fields.Value;
//     //     auto pos = ((CBaseEntity*)_this)->GetOriginPosition();

//     // #ifdef _DEBUG
//     //     L::Print("BaseNpc -> ID: {}, pos: {} {} {}", _this->prefabID, pos.x, pos.y, pos.z);
//     // #endif
// }

// NPCs
//FullHookMethodEx(ScientistNPC, ClientInitPlayer);
// FullHookMethodEx(BanditGuard, ClientInitNPC);
// FullHookMethodEx(GingerbreadNPC, ClientInitNPC);
// FullHookMethodEx(TunnelDweller, ClientInitNPC);
// FullHookMethodEx(UnderwaterDweller, ClientInitNPC);
// FullHookMethodEx(ScarecrowNPC, ClientInitNPC);
// FullHookMethodEx(NPCShopKeeper, ClientInitNPC);

// Animals
// FullHookMethodEx(Bear, ClientInitAnimals);
// FullHookMethodEx(Boar, ClientInitAnimals);
// FullHookMethodEx(Chicken, ClientInitAnimals);
// FullHookMethodEx(Horse, ClientInitAnimals);
// FullHookMethodEx(Polarbear, ClientInitAnimals);
// FullHookMethodEx(Stag, ClientInitAnimals);
//FullHookMethodEx(Wolf, ClientInitBaseNPC);
// FullHookMethodEx(Zombie, ClientInitAnimals);

// DoClientDestroy
// DoClientDestroyMethod(BaseCorpse);
// DoClientDestroyMethod(BaseHelicopter);
// DoClientDestroyMethod(BradleyAPC);
// DoClientDestroyMethod(DecayEntity);
// DoClientDestroyMethod(GrowableEntity);
// DoClientDestroyMethod(Recycler);
// DoClientDestroyMethod(WorldItem);

// - Traps
// DoClientDestroyMethod(SamSite);
// DoClientDestroyMethod(AutoTurret);

// try specific hooks
uintptr_t BaseNetworkable_PostNetworkUpdate_o = 0;
void      hkBaseNetworkable_PostNetworkUpdate(CBaseNetworkable* _this, void* method)
{
    static uintptr_t retClientInit =
        Offsets::BaseNetworkable::Methods::ClientInit_ProtoBuf_Entity_info + G::baseGameAssemlby;

    auto ret        = _ReturnAddress();
    auto retAddr    = (uintptr_t)ret;
    auto retAddrRVA = retAddr - G::baseGameAssemlby;

    // if (retAddr != retClientInit)
    //     return;

    //     auto id  = _this->net->fields.ID.fields.Value;
    //     auto pos = ((CBaseEntity*)_this)->GetOriginPosition();

#ifdef _DEBUG
    L::Print("PreClientInit[{}] -> prefID: {}", _this->klass->_1.name, _this->prefabID);
    void*         calls[8];
    unsigned long hash     = 0;
    auto          captured = RtlCaptureStackBackTrace(0, 5, calls, &hash);
    L::Print<L::MagentaInstense>("Trace: HASH: 0x{:X}, RET: 0x{:X}", hash, retAddr);

    int idx = 0;
    for (auto ptr : std::span<void*>(calls, captured))
    {
        L::Print<L::Magenta>("\t[{}] Call: 0x{:X} RVA: 0x{:X}", idx++, (uintptr_t)ptr,
                             ((uintptr_t)ptr) - G::baseGameAssemlby);
    }
#endif

    reinterpret_cast<decltype(&hkBaseNetworkable_PostNetworkUpdate)>(
        BaseNetworkable_PostNetworkUpdate_o)(_this, method);
}

uintptr_t BaseNetworkable_ClientInit_o = 0;
void      hkBaseNetworkable_ClientInit(CBaseNetworkable* _this, void* method)
{
    static uintptr_t retClientInit =
        Offsets::BaseNetworkable::Methods::ClientInit_ProtoBuf_Entity_info + G::baseGameAssemlby;

    reinterpret_cast<decltype(&hkBaseNetworkable_ClientInit)>(BaseNetworkable_ClientInit_o)(_this,
                                                                                            method);

    // auto retAddr = (uintptr_t)_ReturnAddress();
    // if (retAddr != retClientInit)
    //     return;

    //     auto id  = _this->net->fields.ID.fields.Value;
    //     auto pos = ((CBaseEntity*)_this)->GetOriginPosition();

#ifdef _DEBUG
    L::Print("BaseClientInit[{}] -> prefID: {}", _this->klass->_1.name, _this->prefabID);
#endif
}

void Hooks::EntityList::Init()
{
    // auto klass = (BaseNetworkable_c*)il2cpp::InitClass("BaseNetworkable");
    // BaseNetworkable_PostNetworkUpdate_o =
    //     (uintptr_t)klass->vtable._15_PreNetworkUpdate.method->virtualMethodPointer;
    // ((MethodInfo*)klass->vtable._15_PreNetworkUpdate.method)->virtualMethodPointer =
    //     (Il2CppMethodPointer)&hkBaseNetworkable_PostNetworkUpdate;

    // il2cpp::InitClass("BaseNPC");
    // il2cpp::InitClass("BaseEntity");
    // il2cpp::InitClass("Wolf");
    //  il2cpp::InitClass("AutoTurret");

    // BaseNetworkable_ClientInit_o = (uintptr_t)klass->vtable._14_ClientInit.method->methodPointer;
    // ((MethodInfo*)klass->vtable._14_ClientInit.method)->methodPointer =
    //     (Il2CppMethodPointer)&hkBaseNetworkable_ClientInit;

    // base classes
    // FullHook(BaseNetworkable, true);

    // FullHook(BaseEntity, true);
    // FullHook(BasePlayer, true);
    //   FullHook(BaseNpc, true);
    //   FullHook(BaseCombatEntity);

    // FullHook(OreResourceEntity, false);

    // - NPC
    // FullHook(ScientistNPC, true);
    // il2cpp::InitClass(_("ScientistNPC"));
    // il2cpp::InitClass(_("Wolf"));

    // FullHook(BanditGuard);
    // FullHook(GingerbreadNPC);
    // FullHook(TunnelDweller);
    // FullHook(UnderwaterDweller);
    // FullHook(ScarecrowNPC);

    // il2cpp::InitClass(_("ScientistNPC"));

    // - Animals
    // FullHook(Bear, true);
    // FullHook(Boar);
    // FullHook(Chicken);
    // FullHook(Horse);
    // FullHook(Polarbear);
    // FullHook(Stag);
    // FullHook(Wolf, false);
    // FullHook(Zombie);

    // DoEntityDestroyHook(BaseNetworkable);

    // DoClientDestroy
    // DoClientDestroyHook(AutoTurret);
    // DoClientDestroyHook(BaseEntity);
    // DoClientDestroyHook(BaseCorpse);
    // DoClientDestroyHook(BaseHelicopter);
    // DoClientDestroyHook(BaseNetworkable);
    // DoClientDestroyHook(BaseNpc);
    // DoClientDestroyHook(BasePlayer);
    // DoClientDestroyHook(BradleyAPC);
    // DoClientDestroyHook(DecayEntity);
    // DoClientDestroyHook(GrowableEntity);
    // DoClientDestroyHook(Recycler);
    // DoClientDestroyHook(SamSite);
    // DoClientDestroyHook(WorldItem);

    // // - NPC
    // DoClientDestroyHook(ScientistNPC);
    // DoClientDestroyHook(BanditGuard);
    // DoClientDestroyHook(GingerbreadNPC);
    // DoClientDestroyHook(TunnelDweller);
    // DoClientDestroyHook(UnderwaterDweller);
    // DoClientDestroyHook(ScarecrowNPC);
}
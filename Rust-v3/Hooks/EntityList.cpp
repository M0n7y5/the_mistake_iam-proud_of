#include "EntityList.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../mrt/xorstr.hpp"
#include "../mrt/logging.h"
#include "../Features/EntityManager.h"

uintptr_t BaseNetworkableClientInit_o;

// This is the main method which all the hooks being redirecting to
void ClientInit(CBaseNetworkable* _this, CProtobuf_Entity* info, void* method)
{
#ifdef _DEBUG
    L::Print("ClientInit -> Class Added to Entity List: {}", _this->klass->_1.name);
#endif
}

void DoClientDestroy(CBaseNetworkable* _this, void* method)
{
    if (_this->net == nullptr)
        return; // what now?

    auto id = _this->net->fields.ID.fields.Value;

#ifdef _DEBUG
    L::Print("DoClientDestroy -> ID {}", id);
#endif

    EntityManager::DB::RemoveID(id);
}

#define ClientInitHookMethod(name)                                                                   \
    uintptr_t name##_ClientInit_o;                                                                   \
    void      hk_ClientInit_##name(CBaseNetworkable* _this, CProtobuf_Entity* info, void* method)    \
    {                                                                                                \
        reinterpret_cast<decltype(&hk_ClientInit_##name)>(name##_ClientInit_o)(_this, info, method); \
        ClientInit(_this, info, method);                                                             \
    }

#define ClientInitHookMethodCustom(name) \
    uintptr_t name##_ClientInit_o;       \
    void      hk_ClientInit_##name(CBaseNetworkable* _this, CProtobuf_Entity* info, void* method)

#define CallOriginal(name) reinterpret_cast<decltype(&hk_ClientInit_##name)>(name##_ClientInit_o)(_this, info, method)

#define ClientInitHook(name)                                    \
    auto name##_ClientInit_klass = il2cpp::InitClass(_(#name)); \
    name##_ClientInit_o = il2cpp::HookVirtualFunction(name##_ClientInit_klass, _("ClientInit"), &hk_ClientInit_##name);

#define DoClientDestroyMethod(name)                                                                      \
    uintptr_t name##_DoClientDestroy_o;                                                                  \
    void      hk_DoClientDestroy_##name(CBaseNetworkable* _this, void* method)                           \
    {                                                                                                    \
        DoClientDestroy(_this, method);                                                                  \
        reinterpret_cast<decltype(&hk_DoClientDestroy_##name)>(name##_DoClientDestroy_o)(_this, method); \
    }

#define DoClientDestroyHook(name)                                    \
    auto name##_DoClientDestroy_klass = il2cpp::InitClass(_(#name)); \
    name##_DoClientDestroy_o =                                       \
        il2cpp::HookVirtualFunction(name##_DoClientDestroy_klass, _("DoClientDestroy"), &hk_DoClientDestroy_##name);

ClientInitHookMethodCustom(OreResourceEntity)
{
    CallOriginal(OreResourceEntity);
    using namespace EntityManager;

    auto id  = _this->net->fields.ID.fields.Value;
    auto pos = ((CBaseEntity*)_this)->GetOriginPosition();

#ifdef _DEBUG
    L::Print("Ore -> ID: {}, pos: {} {} {}", _this->prefabID, pos.x, pos.y, pos.z);
#endif

    OreResource ore {};

    ore.entity    = _this;
    ore.prefabId  = _this->prefabID;
    ore.postition = pos;

    EntityManager::DB::ores.insert_or_assign(id, ore);
}

ClientInitHookMethodCustom(BasePlayer)
{
    CallOriginal(BasePlayer);
    using namespace EntityManager;
}

ClientInitHookMethodCustom(BaseEntity)
{
    CallOriginal(BaseEntity);
    using namespace EntityManager;
}

ClientInitHookMethodCustom(BaseNpc)
{
    CallOriginal(BaseNpc);
    using namespace EntityManager;

    auto id  = _this->net->fields.ID.fields.Value;

    Npc npc{};
    npc.entity = (CBaseEntity*)_this;
    npc.prefabId = _this->prefabID;
    DB::npcs.insert_or_assign(id, npc);
}

// DoClientDestroy
DoClientDestroyMethod(AutoTurret);
DoClientDestroyMethod(BaseEntity);
DoClientDestroyMethod(BaseCorpse);
DoClientDestroyMethod(BaseHelicopter);
DoClientDestroyMethod(BaseNetworkable);
DoClientDestroyMethod(BaseNpc);
DoClientDestroyMethod(BasePlayer);
DoClientDestroyMethod(BradleyAPC);
DoClientDestroyMethod(DecayEntity);
DoClientDestroyMethod(GrowableEntity);
DoClientDestroyMethod(Recycler);
DoClientDestroyMethod(SamSite);
DoClientDestroyMethod(WorldItem);

void Hooks::EntityList::Init()
{
    ClientInitHook(OreResourceEntity);

    // DoClientDestroy
    DoClientDestroyHook(AutoTurret);
    DoClientDestroyHook(BaseEntity);
    DoClientDestroyHook(BaseCorpse);
    DoClientDestroyHook(BaseHelicopter);
    DoClientDestroyHook(BaseNetworkable);
    DoClientDestroyHook(BaseNpc);
    DoClientDestroyHook(BasePlayer);
    DoClientDestroyHook(BradleyAPC);
    DoClientDestroyHook(DecayEntity);
    DoClientDestroyHook(GrowableEntity);
    DoClientDestroyHook(Recycler);
    DoClientDestroyHook(SamSite);
    DoClientDestroyHook(WorldItem);
}
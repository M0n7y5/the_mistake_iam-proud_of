#include "Shared.h"
#include "../SDK/il2cpp_api.h"
#include "../SDK/structs.h"
#include "../SDK/settings.h"
#include "../mrt/xorstr.hpp"
#include "../mrt/logging.h"

static uintptr_t ItemIcon_TryToMove_o = 0;

static void hk_ItemIcon_TryToMove(CItemIcon* _this, void* method)
{
    using namespace SettingsData;

    static bool initMe = true;

    if (initMe)
    {
        // lets init this function by allowing orinal function run first
        initMe = false;
        reinterpret_cast<decltype(&hk_ItemIcon_TryToMove)>(ItemIcon_TryToMove_o)(_this, method);

#ifdef _DEBUG
        L::Print("ItemIcon TryToMove -> initMe");
#endif

        return;
    }

    reinterpret_cast<decltype(&hk_ItemIcon_TryToMove)>(ItemIcon_TryToMove_o)(_this, method);

    if (settings->misc.other.InstantLoot)
    {
        _this->RunTimedAction();
    }
}



void Hooks::Shared::Init()
{
    auto iconklass       = il2cpp::InitClass(_("ItemIcon"));
    ItemIcon_TryToMove_o = il2cpp::HookVirtualFunction(iconklass, _("TryToMove"), (void*)&hk_ItemIcon_TryToMove);

    // OnDestroy_o  = il2cpp::HookVirtualFunction(klass, _("OnDestroy"), &hk_OnDestroy);
    // Awake_o      = il2cpp::HookVirtualFunction(klass, _("Awake"), &hk_Awake);
}
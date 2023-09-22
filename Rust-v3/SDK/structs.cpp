#include "structs.h"
#include "../Kotlar/Kotlar.h"
#include "../mrt/ww898/utf_converters.hpp"
#include "../mrt/xorstr.hpp"
#include "Offsets.h"
#include "globals.h"
#include "il2cpp_api.h"
#include <algorithm>
#include <stdint.h>
#include <string_view>

Il2CppString* Il2CppString::newString(const char* text)
{
    return il2cpp_string_new(text);
}

std::string Il2CppString::str()
{
    using namespace ww898::utf;
    if (length > 512)
        return {"ERR_STR: LENGHT"};

    std::wstring_view ws(this->chars);
    return conv<char>(ws);
}

Matrix4x4 Matrix4x4::Ortho(float left, float right, float bottom, float top, float zNear, float zFar)
{
    static auto addr = OFF(
        Offsets::UnityEngine_Matrix4x4::StaticMethods::
            Ortho_System_Single_left__System_Single_right__System_Single_bottom__System_Single_top__System_Single_zNear__System_Single_zFar);
    return ((Matrix4x4(*)(float, float, float, float, float, float))(addr))(left, right, bottom, top, zNear, zFar);
}

void CObject::setHideFlags(HideFlags flags)
{
    static auto addr = OFF(Offsets::UnityEngine_Object::Methods::set_hideFlags_UnityEngine_HideFlags_value);
    ((void(__thiscall*)(CObject*, HideFlags))(addr))(this, flags);
}

Il2CppObject* CObject::Instantiate(Il2CppObject* type)
{
    static auto addr = OFF(Offsets::UnityEngine_Object::StaticMethods::Instantiate_UnityEngine_Object_original);
    return ((Il2CppObject * (*)(Il2CppObject*))(addr))(type);
}

void CObject::DontDestroyOnLoad(Il2CppObject* object)
{
    // UnityEngine.Object::DontDestroyOnLoad
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Object::DontDestroyOnLoad"));
    ((void (*)(Il2CppObject*))(addr))(object);
}

CAssetBundle* CAssetBundle::LoadFileFromMemory(CArray<uint8_t>* assetBundle, uint32_t CRC)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.AssetBundle::LoadFromMemory_Internal()"));

    return reinterpret_cast<CAssetBundle*(__fastcall*)(CArray<uint8_t>*, uint32_t)>(addr)(assetBundle, CRC);
}

CAssetBundle* CAssetBundle::LoadFileFromFile(const char* path)
{
    static auto addr = OFF(Offsets::UnityEngine_AssetBundle::StaticMethods::LoadFromFile_System_String_path);

    auto str = il2cpp_string_new(path);

    return ((CAssetBundle * (*)(Il2CppString*))(addr))(str);
}

void* CAssetBundle::LoadAssetInternal(const char* name, CType* type)
{
    auto str = il2cpp_string_new(name);

    static auto addr = OFF(Offsets::UnityEngine_AssetBundle::Methods::LoadAsset_System_String_name__System_Type_type);
    return ((void*(__thiscall*)(CAssetBundle*, Il2CppString*, CType*))(addr))(this, str, type);
}

void* CArrayBase::NewInternal(Il2CppClass* klass, il2cpp_array_size_t size)
{
    return il2cpp_array_new_specific(klass, size);
}

void* CArrayBase::NewInternal(const char* klass, il2cpp_array_size_t size, const char* namespaze)
{
    auto klassType = il2cpp::InitClass(klass, namespaze);

    if (!klassType)
        __debugbreak();

    return il2cpp_array_new_specific(klassType, size);
}

CType* CType::FromClass(const char* name, const char* namespaze)
{
    auto klass = il2cpp::InitClass(name, namespaze);

    if (!klass)
        return nullptr;

    auto type = il2cpp_class_get_type(klass);

    if (!type)
        return nullptr;

    return (CType*)il2cpp_type_get_object(type);
}

void* CGameObject::AddComponentInternal(CType* type)
{
    static auto addr = OFF(Offsets::UnityEngine_GameObject::Methods::AddComponent_System_Type_componentType);
    return ((void*(__thiscall*)(CGameObject*, CType*))(addr))(this, type);
}
Layer CGameObject::GetLayer()
{
    static auto addr = OFF(Offsets::UnityEngine_GameObject::Methods::get_layer);
    return ((Layer(__thiscall*)(CGameObject*))(addr))(this);
}

void* CGameObject::GetComponentInternal(CType* type)
{
    static auto addr = OFF(Offsets::UnityEngine_GameObject::Methods::GetComponent_System_Type_type);
    return ((void*(__thiscall*)(CGameObject*, CType*))(addr))(this, type);
}

void* CGameObject::FindInternal(const char* name)
{
    auto        str  = CString::newString(name);
    static auto addr = OFF(Offsets::UnityEngine_GameObject::StaticMethods::Find_System_String_name);
    return ((void* (*)(CString*))(addr))(str);
}

void* CGameObject::FindObjectsByTypeInternal(CType* type, FindObjectsInactive findObjectsInactive,
                                             FindObjectsSortMode sortMode)
{
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Object::FindObjectsByType"));
    return ((void* (*)(CType*, FindObjectsInactive, FindObjectsSortMode))(addr))(type, findObjectsInactive, sortMode);
}

CTransform* CGameObject::GetTransform()
{
    static auto addr = OFF(Offsets::UnityEngine_Component::Methods::get_transform);
    return ((CTransform * (__thiscall*)(CGameObject*))(addr))(this);
}
// void* CGameObject::InstantiateInternal(Il2CppObject* type)
//{
//     return nullptr;
// }

void* CUnsafeUtility::PinGCObjectAndGetAddress(Il2CppObject* object, uintptr_t* gcHandle)
{
    static auto addr =
        il2cpp_resolve_icall(_("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::PinSystemObjectAndGetAddress"));

    return ((void* (*)(Il2CppObject*, uintptr_t*))(addr))(object, gcHandle);
}

void CCanvas::SetRenderMode(RenderMode mode)
{
    // UnityEngine.Canvas::set_renderMode
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Canvas::set_renderMode"));
    ((void(__thiscall*)(CCanvas*, RenderMode))(addr))(this, mode);
}

void CCanvas::SetWorldCamera(CCamera* camera)
{
    static auto addr = OFF(Offsets::UnityEngine_Canvas::Methods::set_worldCamera_UnityEngine_Camera_value);
    ((void(__thiscall*)(CCanvas*, CCamera*))(addr))(this, camera);
}

bool CCanvas::IsRootCanvas()
{
    static auto addr = OFF(Offsets::UnityEngine_Canvas::Methods::get_isRootCanvas);
    return ((bool(__thiscall*)(CCanvas*))(addr))(this);
}

// Il2CppObject* CPrefabUtility::InstantiatePrefab(Il2CppObject* object)
//{
//     static auto addr =
//     OFF(Offsets::UnityEngine_Canvas::Methods::set_worldCamera_UnityEngine_Camera_value); return
//     ((Il2CppObject * (*)(Il2CppObject*))(addr))(object);
// }

CBasePlayer* CLocalPlayer::GetLocalPlayer()
{
    static auto addr = OFF(Offsets::LocalPlayer::StaticMethods::get_LocalOrSpectatePlayer);
    return ((CBasePlayer * (*)())(addr))();
}

Vector3 CPlayerEyes::GetPosition()
{
    static auto addr = OFF(Offsets::PlayerEyes::Methods::get_position);
    return ((Vector3(__thiscall*)(CPlayerEyes*))(addr))(this);
}
Vector3 CPlayerEyes::BodyForward()
{
    static auto addr = OFF(Offsets::PlayerEyes::Methods::BodyForward);
    return ((Vector3(__thiscall*)(CPlayerEyes*))(addr))(this);
}

CGameObject* CComponent::GetGameobject()
{
    static auto addr = OFF(Offsets::UnityEngine_Component::Methods::get_gameObject);
    return ((CGameObject * (__thiscall*)(CComponent*))(addr))(this);
}

void* CGameObjectRef::Get()
{
    // FIXME: make this automatic
    // Method$ResourceRef\u003CGameObject\u003E.Get()
    // static bool ll = false;

    static auto method = (MethodInfo*)(G::baseGameAssemlby + 0x302D550ULL);

    // if (ll == false)
    // {
    //     auto sdsd = CGameObjectRef::GetEntity();
    //     ll        = true;
    // }

    // auto methodss = (MethodInfo*)&method;

    static auto addr = OFF(Offsets::ResourceRef_1::Methods::Get);
    return ((CGameObject * (__thiscall*)(CGameObjectRef*, MethodInfo*))(addr))(this, method);
}

void* CGameObjectRef::GetEntity()
{
    static auto addr = OFF(Offsets::GameObjectRef::Methods::GetEntity);
    return ((void*(__thiscall*)(CGameObjectRef*))(addr))(this);
}

UnityEngine_GradientColorKey_array* CGradient::GetColorKeys()
{
    static auto addr = OFF(Offsets::UnityEngine_Gradient::Methods::get_colorKeys);
    return ((UnityEngine_GradientColorKey_array * (__thiscall*)(CGradient*))(addr))(this);
}

void CGradient::SetColorKeys(UnityEngine_GradientColorKey_array* arr)
{
    // UnityEngine.Gradient::set_colorKeys
    static auto addr = il2cpp_resolve_icall(_("UnityEngine.Gradient::set_colorKeys"));
    ((void(__thiscall*)(CGradient*, UnityEngine_GradientColorKey_array*))(addr))(this, arr);
}

CTOD_Sky* CTOD_Sky::GetInstance()
{
    static auto addr = OFF(Offsets::TOD_Sky::StaticMethods::get_Instance);
    return ((CTOD_Sky * (*)())(addr))();
}

CHitTest* CHitTest::New()
{
    static auto klass = il2cpp::InitClass(_("HitTest"));
    return (CHitTest*)il2cpp_object_new(klass);
}

CGatherPropertyEntry* CBaseMelee::GetGatherInfoFromIndex(GatherType type)
{
    static auto addr = OFF(Offsets::BaseMelee::Methods::GetGatherInfoFromIndex_ResourceDispenser_GatherType_index);
    return ((CGatherPropertyEntry * (__thiscall*)(CBaseMelee*, GatherType))(addr))(this, type);
}

void CBaseMelee::ProcessAttack(CHitTest* hit)
{
    static auto addr = OFF(Offsets::BaseMelee::Methods::ProcessAttack_HitTest_hit);
    ((void(__thiscall*)(CBaseMelee*, CHitTest*))(addr))(this, hit);
}

void CBaseMelee::MeleeAttack(CBaseEntity* owner, CBaseEntity* target, Vector3 eyePos, CTransform* transform,
                             bool player, bool needsRPC)
{
    if (this->nextAttackTime >= CTime::GetTime() || this->timeSinceDeploy < this->deployDelay)
        return;

    if (target->m_CachedPtr == 0)
        return;

    auto hitTest = CHitTest::New();

    if (hitTest == nullptr)
        return;

    auto pos = transform->GetPosition();

    CRay ray(eyePos, (pos - eyePos).Normalized());

    hitTest->MaxDistance  = this->maxDistance + 1.f;
    hitTest->HitTransform = (UnityEngine_Transform_o*)transform;
    hitTest->AttackRay    = *(UnityEngine_Ray_o*)&ray;
    hitTest->DidHit       = true;
    // hitTest->BestHit          = 1;
    hitTest->ignoreEntity = (BaseEntity_o*)owner;
    // hitTest->type             = 3;
    // hitTest->Radius           = 0;
    hitTest->HitEntity        = (BaseEntity_o*)target;
    hitTest->HitNormal        = {0.f, 0.f, 0.f};
    hitTest->damageProperties = this->damageProperties;
    // hitTest->Forgiveness      = std::min(this->attackRadius, 0.050000001f);
    //  hitTest->HitMaterial      = (System_String_o*)CString::newString(_("Wood"));

    // auto hit          = transform->InverseTransformPoint(pos);
    // hitTest->HitPoint = *(UnityEngine_Vector3_o*)&pos; // hit;

    // constexpr static LayerMask ll = (LayerMask)1270440705;

    // CGameTrace::Trace(hitTest, (Layer)1270440705);

    StartAttackCooldown(this->repeatDelay);

    if (needsRPC)
    {
        this->SetAttacking(true);
        ProcessAttack(hitTest);
        this->SetAttacking(false);

        return;
    }

    ProcessAttack(hitTest);
}

CString* CStringPool::Get(uint32_t id)
{
    static auto addr = OFF(Offsets::StringPool::StaticMethods::Get_System_UInt32_i);
    return ((CString * (*)(uint32_t))(addr))(id);
}
// void CWaterCollision::SetIgnore(CCollider c1, CCollider c2, bool ignore)
// {
//     static auto addr = OFF(Offsets::WaterCollision::Methods::);
//     return ((CString * (*)(uint32_t))(addr))(id);
// }

Quaternion CQuaternion::Euler(Vector3 euler)
{
    static auto addr = OFF(Offsets::UnityEngine_Quaternion::StaticMethods::Euler_UnityEngine_Vector3_euler);
    return ((Quaternion(*)(Vector3))(addr))(euler * ((float)M_PI / 180.f));
}

void CBoxCollider::SetSize(Vector3 size)
{
    static auto addr = OFF(Offsets::UnityEngine_BoxCollider::Methods::set_size_Injected_UnityEngine_Vector3_value);

    return ((void(__thiscall*)(CBoxCollider*, Vector3))(addr))(this, size * 2.f);
}

void CItemIcon::RunTimedAction()
{
    static auto addr = OFF(Offsets::ItemIcon::Methods::RunTimedAction);
    ((void(__thiscall*)(CItemIcon*))(addr))(this);
}

void* CBaseMovement::GetCollider()
{
    static auto addr = OFF(Offsets::BaseMovement::Methods::GetCollider);
    return ((void*(__thiscall*)(CBaseMovement*))(addr))(this);
}

void CMedicalTool::InstaHeal()
{
    if (this->nextAttackTime >= CTime::GetTime() || this->timeSinceDeploy < this->deployDelay)
        return;

    this->ServerRPC(_("UseSelf"));
}

EnvironmentType CEnvironmentManager::Get(Vector3 vector)
{
    static auto addr = OFF(Offsets::EnvironmentManager::StaticMethods::Get_UnityEngine_Vector3_pos);
    return ((EnvironmentType(*)(Vector3))(addr))(vector);
}

bool CWaterLevel::Test(Vector3 pos, bool waves, bool volumes, CBaseEntity* forEntity)
{
    static auto addr = OFF(
        Offsets::WaterLevel::StaticMethods::
            Test_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null);
    return ((bool (*)(Vector3, bool, bool, CBaseEntity*))(addr))(pos, waves, volumes, forEntity);
}

CWaterInfo CWaterLevel::GetWaterInfo(Vector3 pos, bool waves, bool volumes, CBaseEntity* forEntity, bool noEarlyExit)
{
    static auto addr = OFF(
        Offsets::WaterLevel::StaticMethods::
            GetWaterInfo_UnityEngine_Vector3_pos__System_Boolean_waves__System_Boolean_volumes__BaseEntity_forEntity___null__System_Boolean_noEarlyExit___False);
    return ((CWaterInfo(*)(Vector3, bool, bool, CBaseEntity*, bool))(addr))(pos, waves, volumes, forEntity,
                                                                            noEarlyExit);
}

CTerrainCollision* CTerrainMeta::GetCollision()
{
    static auto addr = OFF(Offsets::TerrainMeta::StaticMethods::get_Collision);
    return ((CTerrainCollision * (*)())(addr))();
}

void CTerrainCollision::Reset(void* col)
{
    static auto addr = OFF(Offsets::TerrainCollision::Methods::Reset_UnityEngine_Collider_collider);
    ((void(__thiscall*)(CTerrainCollision*, void*))(addr))(this, col);
}

bool CGameTrace::Trace(CHitTest* hitTest, Layer layer)
{
    static auto addr = OFF(Offsets::GameTrace::StaticMethods::Trace_HitTest_test__System_Int32_layerMask____5);
    return ((bool (*)(CHitTest*, Layer))(addr))(hitTest, layer);
}

void CRenderTexture::Release()
{
    static auto addr = OFF(Offsets::UnityEngine_RenderTexture::Methods::Release);
    ((void(__thiscall*)(CRenderTexture*))(addr))(this);
}

bool CRenderTexture::Create()
{
    static auto addr = OFF(Offsets::UnityEngine_RenderTexture::Methods::Create);
    return ((bool(__thiscall*)(CRenderTexture*))(addr))(this);
}

void CRenderTexture::SetWidth(int width)
{
    static auto addr = OFF(Offsets::UnityEngine_RenderTexture::Methods::set_width_System_Int32_value);
    ((void(__thiscall*)(CRenderTexture*, int))(addr))(this, width);
}

void CRenderTexture::SetHeight(int height)
{
    static auto addr = OFF(Offsets::UnityEngine_RenderTexture::Methods::set_height_System_Int32_value);
    ((void(__thiscall*)(CRenderTexture*, int))(addr))(this, height);
}

void CRectTransform::SetSizeDelta(Vector2 size)
{
    static auto addr = OFF(Offsets::UnityEngine_RectTransform::Methods::set_sizeDelta_UnityEngine_Vector2_value);
    ((void(__thiscall*)(CRectTransform*, Vector2))(addr))(this, size);
}

CRect CRectTransform::GetRect()
{
    static auto addr = OFF(Offsets::UnityEngine_RectTransform::Methods::get_rect);
    return ((CRect(__thiscall*)(CRectTransform*))(addr))(this);
}

void CCapsuleCollider::SetRadius(float radius)
{
    static auto addr = OFF(Offsets::UnityEngine_CapsuleCollider::Methods::set_radius_System_Single_value);
    ((void(__thiscall*)(CCapsuleCollider*, float))(addr))(this, radius);
}

float CCapsuleCollider::GetRadius()
{
    static auto addr = OFF(Offsets::UnityEngine_CapsuleCollider::Methods::get_radius);
    return ((float(__thiscall*)(CCapsuleCollider*))(addr))(this);
}

int CPlayerBelt::GetMaxBeltSlots()
{
    static auto addr = OFF(Offsets::PlayerBelt::StaticMethods::get_MaxBeltSlots);
    return ((int (*)())(addr))();
}

CItem* CPlayerBelt::GetActiveItem()
{
    static auto addr = OFF(Offsets::PlayerBelt::Methods::GetActiveItem);
    return ((CItem * (__thiscall*)(CPlayerBelt*))(addr))(this);
}

CItem* CPlayerBelt::GetItemInSlot(int slot)
{
    static auto addr = OFF(Offsets::PlayerBelt::Methods::GetItemInSlot_System_Int32_slot);
    return ((CItem * (__thiscall*)(CPlayerBelt*, int))(addr))(this, slot);
}

CTexture2D* CSprite::GetTexture()
{
    static auto addr = OFF(Offsets::UnityEngine_Sprite::Methods::get_texture);
    return ((CTexture2D * (__thiscall*)(CSprite*))(addr))(this);
}

CRect CSprite::GetTextureRect()
{
    static auto addr = OFF(Offsets::UnityEngine_Sprite::Methods::get_textureRect);
    return ((CRect(__thiscall*)(CSprite*))(addr))(this);
}

CItem* CItemContainer::FindItemByUID(ItemId_o iUID)
{
    static auto addr = OFF(Offsets::ItemContainer::Methods::FindItemByUID_ItemId_iUID);
    return ((CItem * (__thiscall*)(CItemContainer*, ItemId_o))(addr))(this, iUID);
}

﻿#pragma once
// this needs to be here before il2cpp header
// since its using its types but doesnt include its header
// its the il2cppdumper issue
#include <algorithm>
#include <array>
#include <cstdint>
#include <stdint.h>
#include <string>
#include <vadefs.h>
#include <span>

#include "enums.h"
#include "input_data.h"
#include "math.h"

#define IL2CPP_ZERO_LEN_ARRAY 0

// il2cpp contains some keywords that are already used for macros

#ifdef stdin
#undef stdin
#endif // stdin

#ifdef stdout
#undef stdout
#endif // stdout

#ifdef stderr
#undef stderr
#endif // stdout

// this is generated by il2cpp dumper
// it will not be included in repo since its 35MB
#include "il2cpp.h"
#include <vector>

struct CType;
// Unity base object, only contain methods
struct CObject
{
    void setHideFlags(HideFlags flags);

    static Il2CppObject* Instantiate(Il2CppObject* type);

    static void DontDestroyOnLoad(Il2CppObject* object);
};

template <typename T> // CObject is part of this cuz no fields
struct ILObjectBase : Il2CppObject, T, CObject
{
    template <typename TType> TType* StaticFields()
    {
        return reinterpret_cast<TType*>(this->klass->static_fields);
    }

    template <typename TType> TType* As()
    {
        return reinterpret_cast<TType*>(this);
    }
};

typedef wchar_t Il2CppNativeChar;
typedef wchar_t Il2CppChar;

// System.String
typedef struct Il2CppString
{
    Il2CppObject object;
    int32_t      length; ///< Length of string *excluding* the trailing null (which
                         ///< is included in 'chars').
    Il2CppChar chars[IL2CPP_ZERO_LEN_ARRAY];

    static Il2CppString* newString(const char* text);
    std::string          str();

} Il2CppString;

using CString = Il2CppString;

typedef struct Il2CppArray : public Il2CppObject
{

    /* bounds is NULL for szarrays */
    Il2CppArrayBounds* bounds;
    /* total number of elements of the array */
    il2cpp_array_size_t max_length;
} Il2CppArray;

// ugly hack for generic array
//  i dont wanna polute this header by il2cpp_api
//  so we use this hack instead
struct CArrayBase
{
    static void* NewInternal(Il2CppClass* klass, il2cpp_array_size_t size);
    static void* NewInternal(const char* klass, il2cpp_array_size_t size, const char* namespaze = "");
};

template <typename T> struct CArray : Il2CppArray, CArrayBase
{
    union {
        T  data[IL2CPP_ZERO_LEN_ARRAY];
        T* dataPtr[IL2CPP_ZERO_LEN_ARRAY];

        // for debugger
        T  dataDummy[8];
        T* dataPtrDummy[8];
    };

    std::span<T> AsSpan()
    {
        return std::span<T>(this->data, this->max_length);
    }

    static CArray<T>* New(Il2CppClass* klass, il2cpp_array_size_t size)
    {
        return (CArray<T>*)NewInternal(klass, size);
    }

    static CArray<T>* New(const char* klass, il2cpp_array_size_t size, const char* namespaze = "")
    {
        return (CArray<T>*)NewInternal(klass, size, namespaze);
    }
};

template <typename T> struct WeakArray
{
    uint64_t lenght;
    union {
        T         data[IL2CPP_ZERO_LEN_ARRAY];
        uintptr_t ptr;
    };
};

struct CType : Il2CppObject
{
    static CType* FromClass(const char* name, const char* namespaze = "");
};

// template <typename T>
// inline SystemArray<T>* ArrayNewSpecific(uintptr_t typeInfo, uint64_t size)
//{
//     return (SystemArray<T>*)methods::array_new_specific(typeInfo, size);
// }

// struct CPrefabUtility
//{
//     Il2CppObject* InstantiatePrefab(Il2CppObject* object);
// };

struct CStringPool
{
    static CString* Get(uint32_t id);
};

struct CAssetBundle : ILObjectBase<UnityEngine_AssetBundle_Fields>
{
    static CAssetBundle* LoadFileFromMemory(CArray<uint8_t>* assetBundle, uint32_t CRC);

    // Should be used only for debug
    static CAssetBundle* LoadFileFromFile(const char* path);

    void* LoadAssetInternal(const char* name, CType* type);

    template <typename T> T* LoadAsset(const char* name, CType* type)
    {
        return (T*)LoadAssetInternal(name, type);
    }
};

struct CTransform : ILObjectBase<UnityEngine_Transform_Fields>
{
    Vector3 GetPosition();
    void    SetPosition(Vector3 position);
    void    SetRotation(Vector4 rotation);
    Vector3 TransformPoint(Vector3 vec);
    Vector3 Forward();
    Vector3 InverseTransformPoint(Vector3 vec);
    Vector3 InverseTransformDirection(Vector3 vec);
    Vector3 GetLossyScale();
};

struct CGameObject : ILObjectBase<UnityEngine_GameObject_Fields>
{
    void* AddComponentInternal(CType* type);

    void* GetComponentInternal(CType* type);

    Layer GetLayer();

    static void* FindInternal(const char* name);

    static void* FindObjectsByTypeInternal(CType* type, FindObjectsInactive findObjectsInactive,
                                           FindObjectsSortMode sortMode);

    template <typename T>
    static CArray<T>* FindObjectsByType(CType* type, FindObjectsInactive findObjectsInactive,
                                        FindObjectsSortMode sortMode)
    {
        return (CArray<T>*)FindObjectsByTypeInternal(type, findObjectsInactive, sortMode);
    }

    template <typename T> T* AddComponent(CType* type)
    {
        return (T*)AddComponentInternal(type);
    }

    template <typename T> T* GetComponent(CType* type)
    {
        return (T*)GetComponentInternal(type);
    }

    template <typename T> static T* Instantiate(Il2CppObject* object)
    {
        return (T*)CObject::Instantiate(object);
    }

    template <typename T> static T* Find(const char* name)
    {
        return (T*)FindInternal(name);
    }

    CTransform* GetTransform();
};

struct CComponent
{
    CGameObject* GetGameobject();
    CTransform*  GetTransform();
};

struct CGameObjectRef
{
    void* Get();
    void* GetEntity();
};

struct CUnsafeUtility
{
    static void* PinGCObjectAndGetAddress(Il2CppObject* object, uintptr_t* gcHandle);
};

class CTime
{
  public:
    static float GetTime();
    static float GetRealTime();
    static float GetDeltaTime();
    static float GetUnscaledDeltaTime();
    static float GetFixedDeltaTime();
    static float GetSmoothDeltaTime();
    static float GetFixedTime();
    static float GetTimeScale();
    static void  SetTimeScale(float value);
};

struct Timer
{
    float timer = 0.f;

    bool Expired(float time)
    {
        timer += CTime::GetDeltaTime();

        if (timer > time)
        {
            timer = 0.f;
            return true;
        }

        return false;
    }
};

struct Bounds
{
    Vector3 center;  // 0x0
    Vector3 extents; // 0xC

    Vector3 GetMin()
    {
        return center - extents;
    }

    Vector3 GetMax()
    {
        return center + extents;
    }

    float SqrDistance(Vector3 point);
};

struct OBB
{
    Vector4 rotation; // 0x0 QUATERNION
    Vector3 position; // 0x10
    Vector3 extents;  // 0x1C
    Vector3 forward;  // 0x28
    Vector3 right;    // 0x34
    Vector3 up;       // 0x40
    float   reject;   // 0x4C

    Bounds  ToBounds();
    Vector3 ClosestPoint(Vector3 position);
};

struct CRect : UnityEngine_Rect_Fields // native
{
    bool Contains(Vector2 point) const
    {
        return point.x >= this->m_XMin && point.x < (this->m_Width + this->m_XMin) && point.y >= this->m_YMin &&
               point.y < (this->m_Height + this->m_YMin);
    }

    bool Contains(Vector3 point) const
    {
        return point.x >= this->m_XMin && point.x < (this->m_Width + this->m_XMin) && point.y >= this->m_YMin &&
               point.y < (this->m_Height + this->m_YMin);
    }
};

struct CVertexAttributeDescriptor : UnityEngine_Rendering_VertexAttributeDescriptor_Fields
{
};

struct CShader : ILObjectBase<UnityEngine_Shader_Fields>
{
    static uint32_t PropertyToID(const char* name);
};

struct CPostProcessLayer : ILObjectBase<UnityEngine_Rendering_PostProcessing_PostProcessLayer_Fields>
{
};
//
// Summary:
//     Contains information about a single sub-mesh of a Mesh.
//
struct CSubMeshDescriptor
{
    Bounds       bounds;
    MeshTopology topology;
    int32_t      indexStart;
    int32_t      indexCount;
    int32_t      baseVertex;
    int32_t      firstVertex;
    int32_t      vertexCount;
};

struct CMesh : ILObjectBase<UnityEngine_Mesh_Fields>
{
    static CMesh* New();
    void          ctor();
    void          MarkDynamic();
    void          Clear(bool keepVertexLayout);
    void          SetIndexBufferParams(uint32_t indexCount, IndexFormat format);
    void          SetVertexBufferParams(int32_t vertexCount, const std::vector<CVertexAttributeDescriptor>& attributes);
    void          SetSubMeshes(CSubMeshDescriptor* desc, uint32_t count, MeshUpdateFlags flags);
    void          UploadMeshData(bool markNoLongerReadable);
    void          SetSubmeshCount(uint32_t count);
    void SetVertexBufferData(int32_t stream, void* data, int32_t dataStart, int32_t meshBufferStart, int32_t count,
                             int32_t elemSize, MeshUpdateFlags flags);
    void SetIndexBufferData(void* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                            MeshUpdateFlags flags);
};

struct CMaterial : ILObjectBase<UnityEngine_Material_Fields>
{
    void              ctor(CShader* shader);
    static CMaterial* New();
};

struct CTexture : ILObjectBase<UnityEngine_Texture_Fields>
{
    uintptr_t GetNativeTexturePtr();
    void      set_filterMode(FilterMode mode);
};

struct CTexture2D : ILObjectBase<UnityEngine_Texture2D_Fields>
{
    void ctor(uint32_t width, uint32_t height, TextureFormat textureFormat, bool mipChain, bool linear);

    WeakArray<uint8_t> GetRawTextureData_byte();
    void               Apply();
};

struct CBootstrap : ILObjectBase<Bootstrap_Fields>
{
};

struct CSprite : ILObjectBase<UnityEngine_Sprite_Fields>
{
    CTexture2D* GetTexture();
    CRect       GetTextureRect();
};

struct CCollider
{
};

struct CMaterialPropertyBlock : ILObjectBase<UnityEngine_MaterialPropertyBlock_Fields>
{
    void                           ctor();
    void                           SetTexture(uint32_t nameID, CTexture* value);
    static CMaterialPropertyBlock* New();
};

struct CCommandBuffer : ILObjectBase<UnityEngine_Rendering_CommandBuffer_Fields>
{
    static CCommandBuffer* New();
    void                   ctor();
    void                   setName(const char* name);
    void                   SetViewport(CRect* pixelRect);
    void                   SetViewProjectionMatrices(Matrix4x4* view, Matrix4x4* proj);
    void                   EnableScissorRect(CRect* rect);
    void                   DisableScissorRect();
    void                   Clear();
    void DrawMesh(CMesh* mesh, Matrix4x4* matrix, CMaterial* material, uint32_t submeshIndex, int32_t shaderPass,
                  CMaterialPropertyBlock* properties);
};

struct CInput : ILObjectBase<UnityEngine_Input_Fields>
{
    static Vector3 GetMousePosition();
    static Vector2 GetMouseScrollDelta();
    static bool    GetMouseButton(int32_t button);
    static bool    GetKeyDown(KeyCode key);
    static bool    GetKey(KeyCode key);

    static bool Active(KeyButton& button)
    {
        switch (button.buttonData.type)
        {
        case TriggerType::HOLD:
            return GetKey(button.buttonData.key);
        case TriggerType::ALWAYS_ON:
            return true;
        case TriggerType::TOGGLE:
        {
            if (GetKeyDown(button.buttonData.key))
            {
                button.buttonData.isToggled ^= true;

                return button.buttonData.isToggled;
            }

            return button.buttonData.isToggled;
        }
        }
    }

    static bool Enabled(KeyButton& button)
    {
        switch (button.buttonData.type)
        {
        case TriggerType::HOLD:
            return GetKey(button.buttonData.key);
        case TriggerType::TOGGLE:
            return button.buttonData.isToggled;
        case TriggerType::ALWAYS_ON:
            return true;
        }
    }

    static CString* GetBind(std::string name);
    static void     SetBind(std::string name, std::string value, bool cycled = false);
};

struct CHitTest : ILObjectBase<HitTest_Fields>
{
    static CHitTest* New();
};

// for efficiently pulling out data for bones or boxes
struct Vec2Ex
{
    Vector2  vec;
    uint32_t isOffscreen;
};

struct CCamera : ILObjectBase<UnityEngine_Camera_Fields>
{
    static CCamera* GetCurrentCamera();
    static CCamera* GetMainCamera();
    Vector3         GetPosition();
    Matrix4x4       GetViewMatrix();
    CRect           GetPixelRect();
    bool            WorldToScreenOld(const Vector3& elementPosition, Vector2& screenPosition);
    bool            WorldToScreen(Vector3 position, Vector2& screenPos, CRect& screen);
    bool            WorldToScreenVec2Ex(std::span<Vector3> const& positions, std::span<Vector2> const& screenPos,
                                        CRect const& screen);
    bool  WorldToScreenVec2Ex(std::array<Vector3, 8>& positions, std::array<Vector3, 8>& screenPos, CRect& screen);
    void  AddCommandBuffer(CameraEvent event, CCommandBuffer* buffer);
    bool  GetOrtoGraphic();
    void  SetOrtoGraphic(bool isOrto);
    void  SetDepth(float depth);
    void  SetCullingMask(Layer layer);
    void  SetClearFlags(CameraClearFlags flags);
    float GetFov();
};

struct CCanvas : ILObjectBase<UnityEngine_Canvas_Fields>
{
    void SetRenderMode(RenderMode mode);
    void SetWorldCamera(CCamera* camera);
    bool IsRootCanvas();
};

struct CMainCamera : ILObjectBase<MainCamera_Fields>
{
};

struct CColider : ILObjectBase<UnityEngine_Collider_Fields>
{
};

struct CModel : ILObjectBase<Model_Fields>
{
    Vector3           GetBonePosition(PlayerBones bone);
    CTransform*       GetBoneTransform(PlayerBones bone);
    CArray<CString*>* GetBoneNames();
};

struct CProtobuf_Entity : ILObjectBase<ProtoBuf_Entity_Fields>
{
};

struct CBaseNetworkable : ILObjectBase<BaseNetworkable_Fields>
{
    // void test()
    // {
    //     auto lol =
    //     this->StaticFields<BaseNetworkable_StaticFields>()->clientEntities;
    // }

    bool HasParent();
};

struct CTerrainCollision
{
    void Reset(void* col);
};

struct CTerrainMeta
{
    static CTerrainCollision* GetCollision();
};

struct CInputState : ILObjectBase<InputState_Fields>
{
};

struct CBaseEntity : CBaseNetworkable, BaseEntity_Fields_s
{
    Vector3 GetOriginPosition();
    Vector3 GetLocalVelocity();
    Vector3 GetWorldVelocity();
    Vector3 GetParentVelocity();
    // RPC
    void ServerRPC(const char* name, bool flag);
    void ServerRPC(const char* name);

    bool HasFlag(BaseEntityFlags flag)
    {
        return ((BaseEntityFlags)(this->flags & (int32_t)flag) == flag);
    }
};

struct CBaseMovement : ILObjectBase<BaseMovement_Fields>
{
    void* GetCollider();
};

struct CCapsuleCollider : ILObjectBase<UnityEngine_CapsuleCollider_Fields>
{
    void  SetRadius(float radius);
    float GetRadius();
};

struct CBasePlayer;

struct CPlayerWalkMovement : CBaseMovement, PlayerWalkMovement_Fields_s
{
    void TeleportTo(Vector3 pos, CBasePlayer* player);
};

struct CBaseCombatEntity : CBaseEntity, BaseCombatEntity_Fields_s
{
    float MaxPlayerVelocity();
};

struct CModelState : ILObjectBase<ModelState_Fields>
{
    bool HasFlag(ModelStateFlags Flag)
    {
        return ((ModelStateFlags)(this->flags & (int32_t)Flag) == Flag);
    }

    void SetFlag(ModelStateFlags Flag, bool State)
    {
        auto ActiveFlags = this->flags;

        if (State)
            ActiveFlags |= (int32_t)Flag;
        else
            ActiveFlags &= ~(int32_t)Flag;

        this->flags = ActiveFlags;
    }
};

struct CItemDefinition : ILObjectBase<ItemDefinition_Fields>
{
};

struct CItem : ILObjectBase<Item_Fields>
{
    bool HasCondition();
    bool IsBroken()
    {
        return HasCondition() && this->_condition <= 0;
    }
};

struct CHeldEntity : CBaseEntity, HeldEntity_Fields_s
{
    CItem* GetItem();
    bool   IsMelee();
    bool   IsBaseProjectile();
};

struct CBaseProjectileMagazine : BaseProjectile_Magazine_Fields
{
};

struct CItemModProjectile : ILObjectBase<ItemModProjectile_Fields>
{
};

struct CItemModProjectileSpawn : ILObjectBase<ItemModProjectileSpawn_Fields>
{
};

struct CPlayerEyes : ILObjectBase<PlayerEyes_Fields>
{
    Vector3    GetPosition();
    Vector3    BodyForward();
    Vector3    GetCenter();
    Quaternion GetRotation();
};

struct CPlayerProjectileUpdate;
struct CBasePlayer : CBaseCombatEntity, BasePlayer_Fields_s
{
    uint64_t     GetTeamID();
    bool         IsLocalPlayer();
    bool         IsWounded();
    bool         IsSleeping();
    bool         InSafeZone();
    CHeldEntity* GetHeldEntity();
    float        MaxHealth();
    float        StartHealth();
    float        StartMaxHealth();
    float        BoundsPadding();
    float        GetJumpHeight();
    float        GetRadius();
    float        MaxVelocity();
    float        WaterFactor();
    bool         OnLadder();
    float        NoClipRadius(float margin);
    void         OnLand(float velocity);
    CItem*       GetActiveItem();
    bool         UpdateLookingAt(float radius, bool includeSecondaryEntities);
    Vector3      GetMountVelocity();
    Vector3      ClosestPoint(Vector3 position);
    void         SendProjectileUpdate(CPlayerProjectileUpdate* update);

    CPlayerEyes* Eyes(){
        return (CPlayerEyes*)this->eyes;
    }

    float GetDesyncTimeRaw()
    {
        float timeSinceLastTick = CTime::GetRealTime() - this->lastSentTickTime;

        return std::max(timeSinceLastTick - CTime::GetDeltaTime(), 0.f);
    }

    float GetDesyncTimeClamped(float maxDesync = 0.99f)
    {
        return std::min(GetDesyncTimeRaw(), maxDesync);
    }

    bool HasFlag(PlayerFlags Flag)
    {
        return ((PlayerFlags)(this->playerFlags & (int32_t)Flag) == Flag);
    }

    bool IsDucking()
    {
        auto state = (CModelState*)this->modelState;
        return state->HasFlag(ModelStateFlags::Ducked);
    }

    bool IsOnGround()
    {
        auto state = (CModelState*)this->modelState;
        return state->HasFlag(ModelStateFlags::OnGround);
    }

    float GetHeight(bool ducked)
    {
        if (ducked)
        {
            return 1.1f;
        }
        return 1.8f;
    }

    bool IsSwimming()
    {
        return this->WaterFactor() >= 0.65f;
    }

    LifeState GetLifeState()
    {
        return (LifeState)this->lifestate;
    }

    void SetFlag(PlayerFlags Flag, bool State)
    {
        auto ActiveFlags = this->playerFlags;

        if (State)
            ActiveFlags |= (int32_t)Flag;
        else
            ActiveFlags &= ~(int32_t)Flag;

        this->playerFlags = ActiveFlags;
    }

    float GetPlayerSpeedMaximum(bool flyhackActive)
    {
        auto* modelState = (CModelState*)this->modelState;

        float mult = 1.f;
        mult -= this->clothingMoveSpeedReduction;

        if (modelState->waterLevel >= _flt(0.675f))
            mult += this->clothingWaterSpeedBonus;

        float ducking = (modelState->HasFlag(ModelStateFlags::Ducked) ||
                         (modelState->waterLevel >= _flt(0.675f) && !flyhackActive) ||
                         modelState->HasFlag(ModelStateFlags::OnLadder));

        Vector3 vec1 = {_flt(2.8f), _flt(5.5f), 1.f};
        Vector3 vec2 = {vec1.Lerp(), _flt(1.7f), ducking};

        return vec2.Lerp() * mult;
    };

    Vector3 NoClipOffset()
    {
        return {0.f, this->GetHeight(true) - this->GetRadius(), 0.f};
    }
};

struct CAttackEntity : CHeldEntity, AttackEntity_Fields_s
{
    bool IsWeaponReady();
    void StartAttackCooldown(float cooldown);
};

struct CBaseProjectile : CAttackEntity, BaseProjectile_Fields_s
{
    void  OnSignal();
    void  UpdateAmmoDisplay();
    void  LaunchProjectile();
    bool  HasReloadCooldown();
    void  StartReloadCooldown(float cooldown);
    bool  SupportsRapidFire();
    float CalculateServerCooldownTime(float nextTime, float cooldown);
    void  Shoot();
    float ScaleRepeatDelay(float delay);
    float GetProjectileVelocityScale(bool getMax = false);

    bool IsBurstDisabled()
    {
        return this->HasFlag(BaseEntityFlags::Reserved6) == this->defaultOn;
    }

    bool UsingInternalBurstMode()
    {
        return IsBurstDisabled() == false && this->isBurstWeapon;
    }
};

struct CGatherPropertyEntry : ILObjectBase<ResourceDispenser_GatherPropertyEntry_Fields>
{
};

struct CBaseMelee : CAttackEntity, BaseMelee_Fields_s
{
    CGatherPropertyEntry* GetGatherInfoFromIndex(GatherType type);
    void MeleeAttack(CBaseEntity* owner, CBaseEntity* target, Vector3 eyePos, CTransform* hitTranform, Vector3 hitPos,
                     bool player = true, bool needsRPC = false);
    void ProcessAttack(CHitTest* hit);

    void SetAttacking(bool value)
    {
        this->ServerRPC(_("Server_SetAttacking"), value);
    }
};

struct CClient : ILObjectBase<Client_Fields>
{
};

struct CLocalPlayer : ILObjectBase<LocalPlayer_Fields>
{
    static CBasePlayer* GetLocalPlayer();
};

struct CRaycastHit : UnityEngine_RaycastHit_Fields
{
};

struct CRay : UnityEngine_Ray_Fields
{
    CRay(Vector3 origin, Vector3 direction)
    {
        this->m_Origin    = *(UnityEngine_Vector3_o*)&origin;
        this->m_Direction = *(UnityEngine_Vector3_o*)&direction;
    }
};

class CGamePhysics
{
  public:
    static bool Verify(CRaycastHit hitInfo);

    static bool LineOfSightRadius(Vector3 src, Vector3 dst, Layers layerMask, float radius, float padding0,
                                  float padding1, CBaseEntity* ignoreEntity = nullptr);

    static bool LineOfSightRadius(Vector3 src, Vector3 dst, Layers layerMask, float radius,
                                  CBaseEntity* ignoreEntity = nullptr);

    static bool LineOfSight(Vector3 src, Vector3 dest, Layers layerMask, float padding = 0.f,
                            CBaseEntity* ignoreEntity = nullptr);

    static bool Raycast(CRay ray, float maxDistance, int32_t layerMask,
                        QueryTriggerInteraction triggerInteraction = QueryTriggerInteraction::UseGlobal);

    static bool Raycast(CRay ray, CRaycastHit* hitInfo, float maxDistance, int32_t layerMask,
                        QueryTriggerInteraction triggerInteraction = QueryTriggerInteraction::UseGlobal);

    static bool Raycast(Vector3 origin, Vector3 direction, CRaycastHit* hitInfo, float maxDistance, int layerMask);

    static bool SphereCast(CRay ray, float radius, CRaycastHit* hitInfo, float maxDistance, int layerMask,
                           QueryTriggerInteraction queryTriggerInteraction = QueryTriggerInteraction::Ignore);

    static bool CheckCapsule(Vector3 start, Vector3 end, float radius, int32_t layerMask,
                             QueryTriggerInteraction triggerInteraction = QueryTriggerInteraction::UseGlobal);

    static void IgnoreLayerCollision(Layer layer1, Layer layer2, bool ignore);

    static bool Trace(CRay ray, float radius, CRaycastHit* hitInfo, float maxDistance, int32_t layerMask,
                      QueryTriggerInteraction triggerInteraction = QueryTriggerInteraction::UseGlobal,
                      CBaseEntity*            ignoreEntity       = nullptr);
};

struct CProjectile : ILObjectBase<Projectile_Fields>
{
    bool DoHit(CHitTest* hitTest, Vector3 pos, Vector3 point);
    void UpdateVelocity(float deltaTime);
};

struct CServerProjectile : ILObjectBase<ServerProjectile_Fields>
{
};

struct CProjectileWeaponMod : CBaseEntity, ProjectileWeaponMod_Fields_s
{
};

struct CBaseMountable : CBaseCombatEntity, BaseMountable_Fields_s
{
};

struct CGradientColorKey : UnityEngine_GradientColorKey_o
{
};

struct CGradientAlphaKey : UnityEngine_GradientAlphaKey_o
{
};

struct CGradient : ILObjectBase<UnityEngine_Gradient_Fields>
{
    UnityEngine_GradientColorKey_array* GetColorKeys();
    void                                SetColorKeys(UnityEngine_GradientColorKey_array* arr);
};

struct CTOD_Sky : ILObjectBase<TOD_Sky_Fields>
{
    static CTOD_Sky* GetInstance();
};

struct CTreeEntity : ILObjectBase<TreeEntity_Fields>
{
};

struct CMessage : ILObjectBase<Network_Message_Fields>
{
};

struct CWaterCollision
{
    void SetIgnore(CCollider* c1, CCollider* c2, bool ignore);
};

struct Quaternion;

struct CQuaternion : UnityEngine_Quaternion_Fields
{
    static Quaternion Euler(Vector3 euler);

    Vector3 GetEulerAngles();
};

struct CUIBlackoutOverlay : ILObjectBase<UIBlackoutOverlay_Fields>
{
};

struct CBoxCollider : ILObjectBase<UnityEngine_BoxCollider_Fields>
{
    void SetSize(Vector3 size);
};

struct CItemIcon : ILObjectBase<ItemIcon_Fields>
{
    void RunTimedAction();
};

struct CMedicalTool : CAttackEntity, MedicalTool_Fields_s
{
    void InstaHeal();
};

struct CEnvironmentManager
{
    static EnvironmentType Get(Vector3 vector);
};

struct CAntiHack : ILObjectBase<ConVar_AntiHack_c>
{
    static constexpr float flyhack_extrusion                      = 2.f;
    static constexpr float flyhack_margin                         = 0.05f;
    static constexpr float flyhack_stepsize                       = 0.1f;
    static constexpr float flyhack_maxsteps                       = 15.f;
    static constexpr float flyhack_forgiveness_vertical           = 1.5f;
    static constexpr float flyhack_forgiveness_vertical_inertia   = 10.f;
    static constexpr float flyhack_forgiveness_horizontal         = 1.5f;
    static constexpr float flyhack_forgiveness_horizontal_inertia = 10.f;
};

struct CWaterInfo : WaterLevel_WaterInfo_Fields
{
};

struct CWaterLevel : ILObjectBase<WaterLevel_Fields>
{
    static bool       Test(Vector3 pos, bool waves, bool volumes, CBaseEntity* forEntity = nullptr);
    static CWaterInfo GetWaterInfo(Vector3 pos, bool waves, bool volumes, CBaseEntity* forEntity = nullptr,
                                   bool noEarlyExit = false);
};

struct CPlayerTick : ILObjectBase<PlayerTick_Fields>
{
};

struct CGameTrace
{
    static bool Trace(CHitTest* hitTest, Layer layer);
};

struct CRenderTexture
{
    void Release();
    bool Create();
    void SetWidth(int width);
    void SetHeight(int height);
};

struct CRectTransform : UnityEngine_RectTransform_Fields_s, CTransform
{
    void  SetSizeDelta(Vector2 size);
    CRect GetRect();
};

struct CPlayerBelt : ILObjectBase<PlayerBelt_Fields>
{
    int    GetMaxBeltSlots();
    CItem* GetActiveItem();
    CItem* GetItemInSlot(int slot);
};

struct CItemContainer : ILObjectBase<ItemContainer_Fields>
{
    CItem* FindItemByUID(ItemId_o iUID);
};

struct CFlintStrikeWeapon : ILObjectBase<FlintStrikeWeapon_Fields>
{
};

struct CPlayerProjectileUpdate : ILObjectBase<ProtoBuf_PlayerProjectileUpdate_Fields>
{
};

struct CFacepunchPool
{
    static CPlayerProjectileUpdate* GetPlayerProjectileUpdate();
};
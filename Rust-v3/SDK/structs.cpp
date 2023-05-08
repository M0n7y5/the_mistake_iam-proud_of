#include "structs.h"
#include "../Kotlar/Kotlar.h"
#include "Offsets.h"
#include "globals.h"
#include "../mrt/fnv1a.hpp"

float CTime::GetTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_time);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetRealTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_realtimeSinceStartup);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetDeltaTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_deltaTime);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetFixedDeltaTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_fixedDeltaTime);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetSmoothDeltaTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_smoothDeltaTime);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetFixedTime()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_fixedTime);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

float CTime::GetTimeScale()
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::get_timeScale);
    return ((float (*)())(G::baseGameAssemlby + off))();
}

void CTime::SetTimeScale(float value)
{
    static auto off = OFF(Offsets::UnityEngine_Time::StaticMethods::set_timeScale_System_Single_value);
    return ((void (*)(float))(G::baseGameAssemlby + off))(value);
}

// Impl : CTransform

CTransform *CTransform::GetTransform(void *addr)
{
    static auto off = OFF(Offsets::UnityEngine_Component::Methods::get_transform);
    return ((CTransform * (*)(void *))(G::baseGameAssemlby + off))(addr);
}

Vector3 CTransform::GetPosition() /* rand crash, to:do track*/
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::get_position);
    return ((Vector3(__thiscall *)(CTransform *))(G::baseGameAssemlby + addr))(this);
}

void CTransform::SetPosition(Vector3 position)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::set_position_UnityEngine_Vector3_value);
    return ((void(__thiscall *)(CTransform *, Vector3))(G::baseGameAssemlby + addr))(this, position);
}

void CTransform::SetRotation(Vector4 rotation)
{
    static auto addr = OFF(Offsets::UnityEngine_Transform::Methods::set_rotation_UnityEngine_Quaternion_value);
    return ((void(__thiscall *)(CTransform *, Vector4))(G::baseGameAssemlby + addr))(this, rotation);
}

// Impl : CModel

Vector3 CModel::GetBonePosition(PlayerBones bone)
{
    auto boneTransformArray = this->boneDict->fields.transforms;

    if ((int)bone > boneTransformArray->bounds->length)
        return {};

    auto boneTransform = (CTransform *)boneTransformArray->m_Items[(int)bone];

    return boneTransform->GetPosition();
}

CTransform *CModel::GetBoneTransform(PlayerBones bone)
{
    auto boneTransformArray = this->boneDict->fields.transforms;

    if ((int)bone > boneTransformArray->bounds->length)
        return {};

    auto boneTransform = (CTransform *)boneTransformArray->m_Items[(int)bone];

    return boneTransform;
}

// Impl: CBaseEntity

Vector3 CBaseEntity::GetOriginPosition()
{
    return CTransform::GetTransform(this)->GetPosition();
}

Vector3 CBaseEntity::GetLocalVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetLocalVelocity);
    return ((Vector3(__thiscall *)(void *))(G::baseGameAssemlby + addr))(this);
}
Vector3 CBaseEntity::GetWorldVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetWorldVelocity);
    return ((Vector3(__thiscall *)(void *))(G::baseGameAssemlby + addr))(this);
}
Vector3 CBaseEntity::GetParentVelocity()
{
    static auto addr = OFF(Offsets::BaseEntity::Methods::GetParentVelocity);
    return ((Vector3(__thiscall *)(void *))(G::baseGameAssemlby + addr))(this);
}

float Bounds::SqrDistance(Vector3 point)
{
    static auto addr = OFF(Offsets::UnityEngine_Bounds::Methods::SqrDistance_UnityEngine_Vector3_point);
    return reinterpret_cast<float (*)(Bounds *, Vector3)>(G::baseGameAssemlby + addr)(this, point);
}

Bounds OBB::ToBounds()
{
    static auto addr = OFF(Offsets::OBB::Methods::ToBounds);
    return ((Bounds(__thiscall *)(OBB *))(G::baseGameAssemlby + addr))(this);
}

Vector3 OBB::ClosestPoint(Vector3 position)
{
    static auto addr = OFF(Offsets::OBB::Methods::ClosestPoint_UnityEngine_Vector3_target);
    return ((Vector3(__thiscall *)(OBB *, Vector3))(G::baseGameAssemlby + addr))(this, position);
}

CCamera *CCamera::GetCurrentCamera()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::StaticMethods::get_current);
    return ((CCamera * (*)())(G::baseUnityPlayer + addr))();
}

CCamera *CCamera::GetMainCamera()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::StaticMethods::get_main);
    return ((CCamera * (*)())(G::baseUnityPlayer + addr))();
}

Vector3 CCamera::GetPosition()
{
    return CTransform::GetTransform(this)->GetPosition();
}

Matrix4x4 CCamera::GetViewMatrix()
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::get_worldToCameraMatrix);
    return ((Matrix4x4(__thiscall *)(CCamera *))(G::baseUnityPlayer + addr))(this);
}

bool CCamera::WorldToScreenOld(const Vector3 &elementPosition, Vector2 &screenPosition)
{
    auto view_matrix = this->GetViewMatrix();

    if (elementPosition.empty())
        return false;

    Vector3 trans_vec {view_matrix[0][3], view_matrix[1][3], view_matrix[2][3]};
    Vector3 right_vec {view_matrix[0][0], view_matrix[1][0], view_matrix[2][0]};
    Vector3 up_vec {view_matrix[0][1], view_matrix[1][1], view_matrix[2][1]};

    const float w = trans_vec.dot_product(elementPosition) + view_matrix[3][3];

    if (w < _flt(0.001f))
        return false;

    float x        = right_vec.dot_product(elementPosition) + view_matrix[3][0];
    float y        = up_vec.dot_product(elementPosition) + view_matrix[3][1];

    screenPosition = {(G::screenWidth / 2) * (1.f + x / w), (G::screenHeight / 2) * (1.f - y / w)};


    return true;
}

Vector3 CCamera::WorldToScreen(Vector3 position)
{
    static auto addr = OFF(Offsets::UnityEngine_Camera::Methods::WorldToScreenPoint_UnityEngine_Vector3_position);
    return ((Vector3(__thiscall *)(CCamera *, Vector3))(G::baseUnityPlayer + addr))(this, position);
}

void CTerrainCollision::Reset(CColider *collider)
{
    static auto addr = OFF(Offsets::TerrainCollision::Methods::Reset_UnityEngine_Collider_collider);
    ((void(__thiscall *)(void *, void *))(G::baseGameAssemlby + addr))(this, collider);
}

float CBaseCombatEntity::MaxPlayerVelocity()
{
    static auto addr = OFF(Offsets::BasePlayer::Methods::MaxVelocity);
    return reinterpret_cast<float (*)(CBaseCombatEntity *)>(G::baseGameAssemlby + addr)(this);
}

CItem *CHeldEntity::GetItem()
{
    static auto addr = OFF(Offsets::HeldEntity::Methods::GetItem);
    return ((CItem * (__thiscall *)(void *))(G::baseGameAssemlby + addr))(this);
}

bool CHeldEntity::IsBaseProjectile()
{
    if (auto item = this->GetItem())
    {
        if (auto itemdef = (CItemDefinition *)item->info)
        {
            switch (itemdef->itemid)
            {
            // RIFLE AMMO
            case 1545779598:  // assault rifle
            case -1335497659: // ICE AK
            case -1812555177: // LR-300 Assault Rifle
            case -904863145:  // Semi-Automatic Rifle
            case 1588298435:  // Bolt Action Rifle
            case -778367295:  // L96 Rifle
            case 28201841:    // M39 Rifle
            case -2069578888: // M249
            case -1214542497: // HMLMG

            // PISTOL AMMO
            case 1796682209:  // Custom SMG
            case 1318558775:  // MP5A4
            case -852563019:  // M92 Pistol
            case 1373971859:  // Python Revolver
            case 649912614:   // Revolver
            case 818877484:   // Semi-Automatic Pistol
            case -1758372725: // Thompson

            // SHOTGUNS
            case -765183617:  // Double Barrel Shotgun
            case 795371088:   // Pump Shotgun
            case -1367281941: // Waterpipe Shotgun
            case -41440462:   // Spas-12 Shotgun
            case -75944661:   // Eoka Pistol

            // ARROWS
            case 1443579727: // Hunting Bow
            case 884424049:  // Compound Bow
            case 1965232394: // Crossbow

            case 1953903201:  // Nailgun
            case 442886268:   // rocket launcher
            case -1123473824: // grenade launcher
                return true;

            default:
                return false;
            }
        }
    }
    return false;
}

bool CAttackEntity::IsWeaponReady(bool bow)
{
    if (this->nextAttackTime >= CTime::GetTime() || (!bow && this->timeSinceDeploy < this->deployDelay))
        return false;

    return true;
}

bool CAttackEntity::IsMelee()
{
    const auto item   = (CItemDefinition *)(this->GetItem()->info);
    const auto itemId = item->itemid;

    switch (itemId)
    {
    case 1814288539: // knife.bone
    case -194509282: // knife.butcher
    case 2040726127: // knife.combat

    case -1780802565: // icepick.salvaged
    case 1104520648:  // chainsaw
    case 1488979457:  // jackhammer

    case -1360171080: // concretepickaxe
    case -1302129395: // pickaxe
    case 236677901:   // lumberjack.pickaxe
    case 171931394:   // stone.pickaxe
    case -262590403:  // axe.salvaged

    case -196667575:  // flashlight.held
    case 1973165031:  // cakefiveyear
    case 1803831286:  // toolgun
    case 200773292:   // hammer
    case -1506397857: // hammer.salvaged
    case -1583967946: // stonehatchet
    case 1176355476:  // concretehatchet
    case -1252059217: // hatchet
    case -399173933:  // lumberjack.hatchet

    case 963906841:   // rock
    case 795236088:   // torch
    case -1966748496: // mace
    case -1978999529: // salvaged.cleaver
    case -1137865085: // machete
    case 1789825282:  // candycaneclub
    case -1469578201: // longsword
    case 1326180354:  // salvaged.sword
    case 1090916276:  // pitchfork
    case 1540934679:  // spear.wooden
    case 1602646136:  // spear.stone
    case -363689972:  // snowball
        return true;

    default:
        return false;
    }
}

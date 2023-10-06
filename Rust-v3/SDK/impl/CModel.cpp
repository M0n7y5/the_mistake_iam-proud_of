#include "../../Kotlar/Kotlar.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../structs.h"
#include "../settings.h"

// Impl : CModel

Vector3 CModel::GetBonePosition(PlayerBones bone)
{
    auto boneTransformArray = this->boneTransforms;

    if ((int)bone > boneTransformArray->max_length)
        return {};

    auto boneTransform = (CTransform*)boneTransformArray->m_Items[(int)bone];

    const auto& s = SettingsData::settings->ragebot.general.targeting;

    // head is little bit off
    if (bone == PlayerBones::eyeTranform)
    {
        return boneTransform->TransformPoint({0.f, -0.0448f, -0.1679f});
        //return boneTransform->TransformPoint({s.headAdjustmentX, s.headAdjustmentY, s.headAdjustmentZ});
    }

    return boneTransform->GetPosition();
}

CTransform* CModel::GetBoneTransform(PlayerBones bone)
{
    auto boneTransformArray = this->boneTransforms;

    if ((int)bone > boneTransformArray->max_length)
        return {};

    auto boneTransform = (CTransform*)boneTransformArray->m_Items[(int)bone];

    return boneTransform;
}

CArray<CString*>* CModel::GetBoneNames()
{
    return (CArray<CString*>*)this->boneNames;
}
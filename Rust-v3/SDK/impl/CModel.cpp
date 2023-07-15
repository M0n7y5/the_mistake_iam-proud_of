#include "../../Kotlar/Kotlar.h"
#include "../Offsets.h"
#include "../globals.h"
#include "../structs.h"

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

CArray<CString *> *CModel::GetBoneNames()
{
    return (CArray<CString *> *)this->boneNames;
}
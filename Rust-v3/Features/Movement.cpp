#include "Movement.h"
#include <algorithm>
#include <cstdint>
#include <vadefs.h>

#include "../SDK/il2cpp_api.h"
#include "../SDK/enums.h"
#include "../SDK/settings.h"
#include "../mrt/logging.h"
#include "../mrt/xorstr.hpp"
#include "Aimbot.h"
#include "AntiHack.h"

namespace Movement
{

    float flyhackDelayTime{};
    float flyhackPauseTime{};

    bool TestFlying(CBasePlayer* player, const Vector3& oldPos, const Vector3& newPos, bool verifyGrounded,
                    bool changeValues)
    {
        using namespace SettingsData;
        bool isInAir    = false;
        bool isOnPlayer = false;

        auto modelState = (CModelState*)player->modelState;

        auto vector        = (oldPos + newPos) * _flt(0.5f);
        auto enviroment    = CEnvironmentManager::Get(vector);
        auto onLadder      = player->OnLadder();
        auto notInElevator = (enviroment & EnvironmentType::Elevator) == (EnvironmentType)0;

        auto waterInfo = CWaterLevel::GetWaterInfo(vector - Vector3(0.f, CAntiHack::flyhack_extrusion, 0.f), true, true,
                                                   player, false);

        // auto waterTest =
        //     (settings->misc.flyhack.AbsoluteFlyHack
        //          ? !CWaterLevel::Test(vector - Vector3(0.f, CAntiHack::flyhack_extrusion, 0.f), true, true, player)
        //          : true);

        if (verifyGrounded)
        {
            if (!onLadder && notInElevator && waterInfo.isValid == false)
            {
                float flyhack_margin = CAntiHack::flyhack_margin;
                float radius         = player->GetRadius();
                float height         = player->GetHeight(false);
                auto  vector2        = vector + Vector3(0.f, radius - CAntiHack::flyhack_extrusion, 0.f);
                auto  vector3        = vector + Vector3(0.f, height - radius, 0.f);
                float radius2        = radius - flyhack_margin;
                isInAir =
                    !CGamePhysics::CheckCapsule(vector2, vector3, radius2, 1503731969, QueryTriggerInteraction::Ignore);
            }
            else
            {
                isInAir = !player->OnLadder() && !player->IsSwimming() && !player->IsOnGround();
            }
        }

        if (isInAir)
        {
            bool    flag    = false;
            Vector3 vector4 = newPos - oldPos;
            float   num2    = abs(vector4.y);
            float   num3    = vector4.MagnitudeXZ();

            float _flyhackDistanceVertical   = flyhackDistanceVertical;
            float _flyhackDistanceHorizontal = flyhackDistanceHorizontal;

            if (vector4.y >= 0.f)
            {
                _flyhackDistanceVertical += vector4.y;
                flag = true;
            }
            if (num2 < num3)
            {
                _flyhackDistanceHorizontal += num3;
                flag = true;
            }

            if (flag)
            {
                // float num4 = std::max((flyhackPauseTime > 0.f) ? CAntiHack::flyhack_forgiveness_vertical_inertia
                //                                                : CAntiHack::flyhack_forgiveness_vertical,
                //                       0.f);
                flyhackDistanceVerticalMax =
                    player->GetJumpHeight() + CAntiHack::flyhack_forgiveness_vertical; //_flt(20.f) + num4;

                if (_flyhackDistanceVertical > flyhackDistanceVerticalMax)
                {
                    return true;
                }
                // float num6 = std::max((flyhackPauseTime > 0.f) ? CAntiHack::flyhack_forgiveness_horizontal_inertia
                //                                                : CAntiHack::flyhack_forgiveness_horizontal,
                //                       0.f);

                flyhackDistanceHorizontalMax = _flt(5.f) + CAntiHack::flyhack_forgiveness_horizontal;
                if (_flyhackDistanceHorizontal > flyhackDistanceHorizontalMax)
                {
                    return true;
                }
            }

            if (changeValues)
            {
                flyhackDistanceVertical   = _flyhackDistanceVertical;
                flyhackDistanceHorizontal = _flyhackDistanceHorizontal;
            }
        }
        else
        {
            flyhackDistanceVertical   = 0.f;
            flyhackDistanceHorizontal = 0.f;
        }

        return false;
    }

    // bool updateFlyKick(CBasePlayer* localplayer, Vector3 oldPos, Vector3& newPos, bool changeValues)
    // {
    // 	// constexpr float flyhack_extrusion = 2.f;
    // 	// constexpr float flyhack_margin = 0.05f;
    // 	// constexpr float noclip_margin = 0.09f;
    // 	// constexpr float flyhack_forgiveness_vertical = 1.5f;
    // 	// constexpr float flyhack_forgiveness_horizontal = 1.5f;
    // 	// constexpr float speedhack_forgiveness = 2.f;
    // 	// constexpr float radius = 0.51f;

    // 	bool isAir = false;

    // 	if (Settings::MISC::m_bAntiFlyhack)
    // 	{
    // 		Vector3 vector = (oldPos + newPos) * _flt(0.5f);
    // 		bool ladder = Globals::Local->OnLadder();
    // 		if (!ladder)
    // 		{
    // 			WaterInfo info = CWaterLevel::GetWaterInfo(vector - Vector3(0, flyhack_extrusion, 0), true,
    // Globals::Local, false); 			if (!info.isValid)
    // 			{
    // 				int env = static_cast<int>(CEnvironmentManager::Get(vector));
    // 				if ((env & 8) == 0)
    // 				{
    // 					constexpr float rad = 0.5f;
    // 					constexpr float hei = 1.8f;
    // 					Vector3 vector2 = vector + Vector3(_flt(0.f), rad - flyhack_extrusion, _flt(0.f));
    // 					Vector3 vector3 = vector + Vector3(_flt(0.f), hei - rad, _flt(0.f));
    // 					float radius2 = rad - flyhack_margin;

    // 					bool overlap = CGamePhysics::CheckCapsule(vector2, vector3, radius2, 1503731969,
    // QueryTriggerInteraction::Ignore);

    // 					isAir = !overlap;

    // 					if (isAir)
    // 					{
    // 						bool flag = false;
    // 						Vector3 vector4 = newPos - oldPos;
    // 						float num2 = vector4.y < _flt(0.f) ? -vector4.y : vector4.y;
    // 						float num3 = Vector3(vector4.x, _flt(0.f), vector4.z).length();

    // 						float _flyhackDistanceVertical = Globals::flyhackDistanceVertical;
    // 						float _flyhackDistanceHorizontal = Globals::flyhackDistanceHorizontal;
    // 						if (vector4.y >= _flt(0.f))
    // 						{
    // 							_flyhackDistanceVertical += vector4.y;
    // 							flag = true;
    // 						}
    // 						if (num2 < num3)
    // 						{
    // 							_flyhackDistanceHorizontal += num3;
    // 							flag = true;
    // 						}

    // 						if (flag)
    // 						{
    // 							const float jump = _flt(1.5f);
    // 							bool vert = _flyhackDistanceVertical >= jump + flyhack_forgiveness_vertical;
    // 							bool horiz = _flyhackDistanceHorizontal >= _flt(5.f) + flyhack_forgiveness_horizontal;
    // 							if (vert || horiz)
    // 							{
    // 								return false;
    // 							}
    // 						}
    // 						if (changeValues)
    // 						{
    // 							Globals::flyhackDistanceVertical = _flyhackDistanceVertical;
    // 							Globals::flyhackDistanceHorizontal = _flyhackDistanceHorizontal;
    // 						}
    // 					}
    // 				}
    // 			}
    // 		}
    // 	}

    // 	if (!isAir)
    // 	{
    // 		if (changeValues)
    // 		{
    // 			Globals::flyhackDistanceVertical = _flt(0.f);
    // 			Globals::flyhackDistanceHorizontal = _flt(0.f);
    // 		}
    // 	}
    // 	return true;
    // }

    struct MovementBackupData
    {
        float capsuleHeight;
        float capsuleCenter;
        float capsuleHeightDucked;
        float capsuleCenterDucked;
        float capsuleHeightCrawling;
        float capsuleCenterCrawling;
        float gravityTestRadius;
        float gravityMultiplier;
        float gravityMultiplierSwimming;
    } movementBackup{};

    void FlyHack(CBasePlayer* localplayer)
    {
        using namespace SettingsData;

        static bool  shouldRecover   = false;
        auto         movement        = (CPlayerWalkMovement*)localplayer->movement;
        auto         currentPosition = localplayer->GetOriginPosition();
        auto         capsule         = (CCapsuleCollider*)movement->capsule;
        static float defaultRadius   = capsule->GetRadius();

        if (settings->misc.flyhack.Flyhack.Active())
        {
            if (shouldRecover == false)
            {
                movementBackup.capsuleCenter             = movement->capsuleCenter;
                movementBackup.capsuleCenterDucked       = movement->capsuleCenterDucked;
                movementBackup.capsuleCenterCrawling     = movement->capsuleCenterCrawling;
                movementBackup.gravityMultiplierSwimming = movement->gravityMultiplierSwimming;
                movementBackup.capsuleCenter             = movement->capsuleCenter;

                // setup needed shit

                shouldRecover = true;
            }

            if (settings->misc.flyhack.WallPhase)
            {
                capsule->SetRadius(0.44f);
            }

            CGamePhysics::IgnoreLayerCollision(Layer::Player_Movement, Layer::Water, true);

            if (settings->misc.flyhack.AbsoluteFlyHack == false)
            {
                movement->gravityMultiplierSwimming = 0.f;
                auto modelState                     = (CModelState*)localplayer->modelState;
                auto playerEyes                     = (CPlayerEyes*)localplayer->eyes;

                auto targetMovement = Vector3{};
                auto rotation       = *(Quaternion*)&playerEyes->_bodyRotation_k__BackingField;

                localplayer->modelState->fields.waterLevel = 1.f;

                if (settings->misc.flyhack.FlyhackForward.Active())
                {
                    targetMovement += rotation * vec3Forward;
                }
                if (settings->misc.flyhack.FlyhackBack.Active())
                {
                    targetMovement -= rotation * vec3Forward;
                }
                if (settings->misc.flyhack.FlyhackLeft.Active())
                {
                    targetMovement -= rotation * vec3Right;
                }
                if (settings->misc.flyhack.FlyhackRight.Active())
                {
                    targetMovement += rotation * vec3Right;
                }
                if (settings->misc.flyhack.FlyhackUp.Active())
                {
                    targetMovement.y += _flt(1.f);
                }

                if (flyhackDelayTime > CTime::GetTime())
                    targetMovement.y = _flt(0.f);

                float speed = 1.f;
                if (settings->misc.flyhack.FlyhackBoost.Active())
                {
                    speed += (float)settings->misc.flyhack.FlyHackBoostSpeed;
                }
                else if (settings->misc.flyhack.FlyhackSlow.Active())
                {
                    speed += _flt(2.5f);
                }
                else
                {
                    Vector3 CurrentVelocity  = targetMovement;
                    Vector3 PreparedVelocity = Vector3{CurrentVelocity.x, 0.f, CurrentVelocity.z}.normalized() *
                                               localplayer->GetPlayerSpeedMaximum(true);
                    targetMovement = {PreparedVelocity.x, CurrentVelocity.y * _flt(5.f), PreparedVelocity.z};
                }

                auto addThisFrame = targetMovement * speed * CTime::GetDeltaTime();

                auto nextPos = currentPosition + addThisFrame;

                // auto isFlyhacking = TestFlying(localplayer, currentPosition, nextPos, true, true);

                // if (isFlyhacking)
                // {
                //     targetMovement = {};
                // }

                if (targetMovement.empty() == false)
                {
                    auto finalMovement                        = targetMovement * speed;
                    movement->_TargetMovement_k__BackingField = *(UnityEngine_Vector3_o*)&finalMovement;
                }

                modelState->SetFlag(ModelStateFlags::Sprinting, true);
            }
        }
        else
        {
            // recover default settings
            if (shouldRecover)
            {
                movement->capsuleCenter             = movementBackup.capsuleCenter;
                movement->capsuleCenterDucked       = movementBackup.capsuleCenterDucked;
                movement->capsuleCenterCrawling     = movementBackup.capsuleCenterCrawling;
                movement->gravityMultiplierSwimming = movementBackup.gravityMultiplierSwimming;
                movement->capsuleCenter             = movementBackup.capsuleCenter;

                CGamePhysics::IgnoreLayerCollision(Layer::Player_Movement, Layer::Water,
                                                   !settings->misc.movement.Jesus);

                capsule->SetRadius(defaultRadius);

                auto movCollider = movement->GetCollider();
                auto terra       = CTerrainMeta::GetCollision();
                terra->Reset(movCollider);

                shouldRecover = false;
            }
        }
    }

    void PreClientInput(CBasePlayer* localplayer)
    {
        using namespace SettingsData;

        if (settings->misc.flyhack.Flyhack.Active())
        {
            if (settings->misc.flyhack.AbsoluteFlyHack == false)
            {
                // TODO: should we spamm this??
                CGamePhysics::IgnoreLayerCollision(Layer::Player_Movement, Layer::Water, true);
                localplayer->modelState->fields.waterLevel = 1.f;
            }

            CGamePhysics::IgnoreLayerCollision(Layer::Player_Movement, Layer::World,
                                               settings->misc.flyhack.NoTerrainCollision);
        }
        else
        {
            flyhackPauseTime = CTime::GetTime();
            CGamePhysics::IgnoreLayerCollision(Layer::Player_Movement, Layer::World, false);
        }
    }

    void TeleportAssist(CBasePlayer* localplayer)
    {
        if (localplayer->lastSentTick == nullptr)
            return;

        auto lastPos = *(Vector3*)&localplayer->lastSentTick->fields.position;

        auto eyes = (CPlayerEyes*)localplayer->eyes;

        TeleportTargetPosition = (eyes->GetRotation() * (vec3Forward * 3.f)) + lastPos;

        IsWallTeleportPossible = AntiHack::IsNoClipping(localplayer, lastPos, TeleportTargetPosition) == false;

    }

    void AfterClientInput(CBasePlayer* localplayer)
    {
        FlyHack(localplayer);

        TeleportAssist(localplayer);
    }
} // namespace Movement

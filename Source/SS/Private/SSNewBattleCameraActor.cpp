#include "SSNewBattleCameraActor.h"

ASSNewBattleCameraActor::ASSNewBattleCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bZSearchRecovered = false;
    this->bZSearchReleased = false;
    this->ZSearchReleasedStartTime = 0.00f;
    this->ZSearchReleasedEndTime = 0.00f;
    this->bActionCameraTargetActorReceived = false;
    this->bActionCameraTargetActorLeaveStart = false;
    this->ActionCameraTargetActorLeaveStartTime = 0.00f;
    this->bWakeupLagScale = false;
    this->WakeupLagScaleMin = 0.00f;
    this->WakeupLagScaleTimeMin = 0.25f;
    this->WakeupLagScaleMax = 1.00f;
    this->WakeupLagScaleTimeMax = 0.50f;
    this->bAvoidTerrainDisableArray.AddDefaulted(4);
    this->LagConvergenceUnderTerrainRestTime = 0.00f;
    this->LagConvergenceUnderTerrain = 0.00f;
    this->bForceEnemyAfterimagePos = false;
    this->bForcePlayerAfterimagePos = false;
    this->ForceAfterimagePosMaxTime = 1.00f;
    this->bEnablePhysicalDisparityHeight = true;
    this->bPhysicalDisparityHeightHalf = true;
    this->bEnablePhysicalDisparityCamLength = true;
    this->bPhysicalDisparityCamLengthHalf = false;
    this->bEnablePhysicalDisparityFocalLength = false;
    this->bPhysicalDisparityFocalLengthHalf = false;
    this->PhysicalDisparityFocalLenghtLimit = 150.00f;
    this->bEnablePhysicalDisparityBaseYaw = true;
    this->PhysicalDisparityTargetTypeBattle = ECameraPhysicalDisparityTargetType::LagerOne;
    this->PhysicalDisparityTargetTypeBattleOriginNormal = ECameraPhysicalDisparityTargetType::Player;
    this->PhysicalDisparityTargetTypeBattleOriginLargePlayer = ECameraPhysicalDisparityTargetType::LagerOne;
    this->PhysicalDisparityTargetTypeBattleOriginLargeEnemy = ECameraPhysicalDisparityTargetType::PlayerAndEnemy;
    this->PhysicalDisparityTargetTypeLargeLimit = 300.00f;
    this->PhysicalDisparityDecayScaleCamLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleFocalLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleHeightArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleBaseYawArray.AddDefaulted(4);
    this->PhysicalDisparityBoundScaleDecayRateArray.AddDefaulted(4);
    this->CameraOffsetSideBySideBaseScale = 0.00f;
    this->LookAtNullOffsetMy = 0.00f;
    this->LookAtNullOffsetTarget = 0.00f;
    this->SmallPlayerAddHeight = 40.00f;
    this->SmallPlayerAddHeightMinSize = 40.00f;
    this->SmallPlayerAddHeightMaxSize = 150.00f;
    this->UnderTerrainAddHeightSpeedUp = 20.00f;
    this->UnderTerrainAddHeightSpeedDown = 40.00f;
    this->UnderTerrainAddHeightMax = 70.00f;
    this->UnderTerrainAddHeight = 0.00f;
    this->UnderTerrainAddHeightSpeedUpRestTimeMax = 1.00f;
    this->UnderTerrainAddHeightSpeedUpNgRestTimeMax = 1.00f;
    this->UnderTerrainAddHeightSpeedUpRestTime = 0.00f;
    this->UnderTerrainAddHeightSpeedUpNgRestTime = 0.00f;
    this->bLookAtNullOffsetTargetImitationArray.AddDefaulted(4);
    this->DebugPhysicalDisparityAddHeightPlayer = 0.00f;
    this->DebugPhysicalDisparityAddHeightEnemy = 0.00f;
    this->LookUpEnemySectionArray.AddDefaulted(4);
    this->EnableLookAtNullOffsetUpDownRoll = false;
    this->PlayerBoneName = TEXT("ROTATED_NULL");
    this->EnemyBoneName = TEXT("ROTATED_NULL");
    this->bCharaBoundingDynamic = false;
    this->bCharaBoundingCapsule = true;
    this->CharaBoundingScale = 1.00f;
    this->CharaBoundingScaleSideBySideBaseScale = 1.00f;
    this->CharaBoundingScaleSideBySide = 0.75f;
    this->SplitRate = 0.00f;
    this->SplitRateV = 0.33f;
    this->bAdjustLookAtTarget = false;
    this->bAdjustCamera = false;
    this->RectRateLeftL = 0.00f;
    this->RectRateLeftR = 0.60f;
    this->RectRateRightL = 0.40f;
    this->RectRateRightR = 1.00f;
    this->AdjustCompMode = ECameraAdjustCompMode::AVERAGE;
    this->AdjustOrder = EAdjustOrder::CameraToLookAtTarget;
    this->AdjustFromBase = true;
    this->AdjustFromDelay = false;
    this->AdjustScaleCamera = 1.00f;
    this->AdjustScaleLookAtTarget = 1.00f;
    this->FocusTargetPositionRate = 0.50f;
    this->bDelayLookAtTargetPos = false;
    this->bDelayCameraPos = false;
    this->bDelayLookAtTargetPosRelative = false;
    this->bDelayCameraPosRelative = false;
    this->bDelayVelocityLookAtTarget = false;
    this->bDelayVelocityCamera = false;
    this->DelayVelocityTimeLookAtTarget = 0.00f;
    this->DelayVelocityTimeCamera = 0.00f;
    this->DelayVelocityScaleLookAtTarget = 1.00f;
    this->DelayVelocityScaleCamera = 1.00f;
    this->LookAtTargetSpeed = 0.00f;
    this->CameraSpeed = 0.00f;
    this->InertiaTimeLat = 0.00f;
    this->InertiaTimeCam = 0.00f;
    this->BezierTimeLat = 0.00f;
    this->BezierTimeCam = 0.00f;
    this->BezierIncidenceYaw = 0.00f;
    this->BezierIncidenceSpeed = 100.00f;
    this->bDrawDebugLineBase = false;
    this->DebugNoizeCheckLength = 0.00f;
}

void ASSNewBattleCameraActor::CalcOverAnglePlayer(bool InPlayer, float& OutOverAngleH, float& OutOverAngleV, float& OutEnemyOverCamLength, float InSplitRateU, float InSplitRateV) {
}

void ASSNewBattleCameraActor::CalcOverAngleEnemy(float& OutEnemyOverAngleH, float& OutEnemyOverAngleV) {
}



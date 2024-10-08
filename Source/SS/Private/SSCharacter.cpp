#include "SSCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/ForceFeedbackComponent.h"
#include "KoratCharacterAuraComponent.h"
#include "KoratCharacterMovementComponent.h"
#include "SSCharacterActionTargetComponent.h"
#include "SSCharacterCapsuleComponent.h"
#include "SSCharacterPostUpdateComponent.h"
#include "SSCharacterSocketComponent.h"
#include "SSRandom.h"
#include "SSVelocityLineEffectComponent.h"
#include "Templates/SubclassOf.h"

ASSCharacter::ASSCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USSCharacterCapsuleComponent>(TEXT("CollisionCylinder")).SetDefaultSubobjectClass<UKoratCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("CharacterRandom"));
    this->BulletRandom = CreateDefaultSubobject<USSRandom>(TEXT("BulletRandom"));
    this->LocomotionRandom = CreateDefaultSubobject<USSRandom>(TEXT("LocomotionRandom"));
    this->VoiceRandom = CreateDefaultSubobject<USSRandom>(TEXT("VoiceRandom"));
    this->AsyncTransitionDemo = NULL;
    this->AsyncTransitionPlayAction = NULL;
    this->AsyncTransitionTurn = NULL;
    this->AsyncTransitionWaitMontageEnd = NULL;
    this->AsyncTransitionNoContinuation = NULL;
    this->AsyncTransitionRush = NULL;
    this->AsyncTransitionRushHighSpeedMove = NULL;
    this->AsyncTransitionFastAvoidance = NULL;
    this->AsyncTransitionHeavyFinish = NULL;
    this->AsyncTransitionHeavyCrush1 = NULL;
    this->AsyncTransitionHeavyCrush2 = NULL;
    this->AsyncTransitionHeavyCrush3 = NULL;
    this->AsyncTransitionMidAirKick = NULL;
    this->AsyncTransitionCannon = NULL;
    this->AsyncTransitionCannonSmash = NULL;
    this->AsyncTransitionCannonAttack1 = NULL;
    this->AsyncTransitionCannonAttack2 = NULL;
    this->AsyncTransitionCannonAttack3 = NULL;
    this->AsyncTransitionRollingHammer = NULL;
    this->AsyncTransitionRollingHurricane1 = NULL;
    this->AsyncTransitionRollingHurricane2 = NULL;
    this->AsyncTransitionRollingPress1 = NULL;
    this->AsyncTransitionRollingPress2 = NULL;
    this->AsyncTransitionLiftStrike = NULL;
    this->AsyncTransitionGrandSlash = NULL;
    this->AsyncTransitionKidan = NULL;
    this->AsyncTransitionCharge = NULL;
    this->AsyncTransitionGuard = NULL;
    this->AsyncTransitionGuardClear = NULL;
    this->AsyncTransitionBlast = NULL;
    this->AsyncTransitionBaseReaction = NULL;
    this->AsyncTransitionRevengeCounter = NULL;
    this->AsyncTransitionAscertain = NULL;
    this->AsyncTransitionParry = NULL;
    this->AsyncTransitionParrySmash = NULL;
    this->AsyncTransitionSuperZCounterPosture = NULL;
    this->AsyncTransitionSuperZCounterCatch = NULL;
    this->AsyncTransitionSuperZCounterShakeOff = NULL;
    this->AsyncTransitionSuperZCounterSmash = NULL;
    this->AsyncTransitionUltimateBlast = NULL;
    this->AsyncTransitionDragonDashAttack = NULL;
    this->AsyncTransitionDashAttack = NULL;
    this->AsyncTransitionDragonSmash = NULL;
    this->AsyncTransitionVanishingAssault = NULL;
    this->AsyncTransitionVanishingAttack = NULL;
    this->AsyncTransitionLocomotion = NULL;
    this->AsyncTransitionDragonDash = NULL;
    this->AsyncTransitionDragonHoming = NULL;
    this->AsyncTransitionShortDash = NULL;
    this->AsyncTransitionStepIn = NULL;
    this->AsyncTransitionStepAvoidance = NULL;
    this->LoadCharacterCounter = 0;
    this->bSupporterUnlockBlock = false;
    this->bWaitCheckDemonstrationFinish = false;
    this->bEarlyFinishHD = false;
    this->InvincibleLevelSequence = NULL;
    this->InstanceType = EKoratCharacterInstanceType::Battle;
    this->Stencil = EKoratCharacterStencil::None;
    this->bReuseBattleCamera = false;
    this->Camera = NULL;
    this->CameraDirector = NULL;
    this->CutCameraDirector = NULL;
    this->RootCameraDirector = NULL;
    this->CameraParameter = NULL;
    this->ViewingController = NULL;
    this->ReplaceAnimation = NULL;
    this->CombinationAnimation = NULL;
    this->Numeric = NULL;
    this->NumericManager = NULL;
    this->Aura = NULL;
    this->Outline = NULL;
    this->Charge = NULL;
    this->FormChange = NULL;
    this->Movement = NULL;
    this->steps = NULL;
    this->DragonDash = NULL;
    this->DragonHoming = NULL;
    this->ZBurstDash = NULL;
    this->RevengeDash = NULL;
    this->EnergyBullet = NULL;
    this->Combatives = NULL;
    this->Armor = NULL;
    this->BlastForte = NULL;
    this->BlastSkill = NULL;
    this->BlastUltimate = NULL;
    this->FaceChipTextureP1 = NULL;
    this->FaceChipTextureP2 = NULL;
    this->ActionEffect = NULL;
    this->EffectColorData = NULL;
    this->FigureTransform = NULL;
    this->EffectHighSpeedMove = NULL;
    this->Trail = NULL;
    this->Announce = NULL;
    this->Screen = NULL;
    this->MapAttribute = NULL;
    this->BrkAttribute = NULL;
    this->DashUpDown = NULL;
    this->SearchParam = NULL;
    this->LookatOperationType = EKoratActionLookatOperationType::ActionData;
    this->LookatPartFlags = EKoratActionLookatPartFlags::None;
    this->Buff = NULL;
    this->ItemEquipment = NULL;
    this->AccessoryManager = NULL;
    this->OutlineStencilParams = NULL;
    this->SiletStencilParam = NULL;
    this->CapsuleDamageComponent = NULL;
    this->CapsulePushingComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsulePushingCollision"));
    this->GiantCharaCapsulePushingComponents_00 = NULL;
    this->GiantCharaCapsulePushingComponents_01 = NULL;
    this->GiantCharaCapsulePushingComponents_02 = NULL;
    this->GiantCharaCapsulePushingComponents_03 = NULL;
    this->GiantCharaCapsulePushingComponents_04 = NULL;
    this->GiantCharaCapsulePushingComponents_05 = NULL;
    this->GiantCharaCapsulePushingComponents_06 = NULL;
    this->GiantCharaCapsulePushingComponents_07 = NULL;
    this->GiantCharaCapsulePushingComponents_08 = NULL;
    this->GiantCharaCapsulePushingComponents_09 = NULL;
    this->GiantCharaCapsulePushingComponents_10 = NULL;
    this->GiantCharaCapsulePushingComponents_11 = NULL;
    this->GiantCharaCapsulePushingComponents_12 = NULL;
    this->GiantCharaCapsulePushingComponents_13 = NULL;
    this->GiantCharaCapsulePushingComponents_14 = NULL;
    this->GiantCharaCapsulePushingComponents_15 = NULL;
    this->GiantCharaCapsulePushingComponents_16 = NULL;
    this->GiantCharaCapsulePushingComponents_17 = NULL;
    this->GiantCharaCapsulePushingComponents_18 = NULL;
    this->GiantCharaCapsulePushingComponents_19 = NULL;
    this->CharacterActionTargetComponent = CreateDefaultSubobject<USSCharacterActionTargetComponent>(TEXT("CharacterActionTargetComponent"));
    this->CharacterSocketComponent = CreateDefaultSubobject<USSCharacterSocketComponent>(TEXT("CharacterSocketComponent"));
    this->CharacterPostUpdateComponent = CreateDefaultSubobject<USSCharacterPostUpdateComponent>(TEXT("CharacterPostUpdateComponent"));
    this->ForceFeedbackComponent = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("ForceFeedbackComponent"));
    this->bSetupCharacterDataList = false;
    this->MontageComponent = NULL;
    this->AnimInstFootIK = NULL;
    this->AnimInstLookat = NULL;
    this->bHiddenInGameCamera = false;
    this->bHiddenInGameSequencer = false;
    this->bHiddenInGameBlueprint = false;
    this->bHiddenInGameDither = false;
    this->bHiddenInGameEvent = false;
    this->bHiddenInGameProgram = false;
    this->bHiddenInGameDebug = false;
    this->bHiddenInGameDefault = false;
    this->bTickStopDeprecated = false;
    this->bTickStopVanishing = false;
    this->bTickStopDemonstrationHalt = false;
    this->bTickStopHalt = false;
    this->bTickStopMapChange = false;
    this->bTickStopKnockdownTaketurns = false;
    this->bTickStopTutorialBattleFinish = false;
    this->bTickStopMapDataSpawn = false;
    this->bTickStopGameState = false;
    this->bTickStopBodyChange = false;
    this->bStopTickCharacterEffects = false;
    this->bHiddenCharacterEffects = false;
    this->bIsDemo = false;
    this->bCameraPlayerSafeLocaionUpdated = false;
    this->CameraDragonHomingElapsedTime = 0.00f;
    this->CameraDragonHomingElapsedTimeMax = 0.25f;
    this->CameraDragonHomingFarScale = 10.00f;
    this->CameraDragonHomingNearScale = 8.00f;
    this->CurrentLocomotionDetailStatus = EKoratCharacterLocomotionDetailStatus::IdleMove;
    this->PreActionCategory = EKoratActionCategoryType::WaitOrMove;
    this->PreActionSubCategory = EKoratActionSubCategoryType::None;
    this->WaterMoveEffect = NULL;
    this->BattleState = ECharacterBattleState::Normal;
    this->PreBattleState = ECharacterBattleState::Normal;
    this->bPreNumbState = false;
    this->bPreSunFistState = false;
    this->bDisableDamageCollisionSetVanishingCollisionEnable = false;
    this->bDisableDamageCollisionOutside = false;
    this->InvincibleStatus = EKoratCharacterInvincibleStatus::None;
    this->ChargeLv = 0;
    this->CostumeDamageLv = 0;
    this->WaitingCostumeDamage = 0;
    this->CostumeScratchLv = 0;
    this->SetCustomTimeDilationReason = EKoratSetCustomTimeDilationReason::Combine_EffectAffect;
    this->HPGaugeValue = 0.00f;
    this->SPGaugeValue = 0.00f;
    this->bCanAutoRecoverSpGauge = true;
    this->LimitBoostGaugeValue = 0.00f;
    this->SparkingGaugeValue = 0.00f;
    this->bCanStopTimeConsumeSparkingGauge = false;
    this->bIsSparkingModeEndReserve = false;
    this->bForcedSparkingDesired = false;
    this->ForcedSparkingChangeTime = 0.00f;
    this->ForcedSparkingElapsedTime = 0.00f;
    this->BlastGaugeValue = 0.00f;
    this->bCanRecoverBlastGauge = true;
    this->bBlastCombo = false;
    this->BlastStockCount = 0;
    this->NextSkillGaugeGainHP = 0.00f;
    this->bPrepareConsumeSkillStockCost = false;
    this->PrepareConsumeSkillSlot = EKoratSkillSlot::Slot1;
    this->BoostSPGaugeValue = 0.00f;
    this->BeforeBoostCount = 0;
    this->BoostCount = 0;
    this->BoostThresholdUI = 0;
    this->bInpactTrig = false;
    this->InpactGaugeValue = 0.00f;
    this->BeforeInputTime = 0.00f;
    this->ImpactPumpTimer = 0.00f;
    this->StyleChangeWaitSecond = 0.00f;
    this->ChangeWaitSecond = 0.00f;
    this->StyleChangeWaitSecondMax = 5.00f;
    this->ChangeWaitSecondMax = 5.00f;
    this->bDecideChangeCharacter = false;
    this->EmoteChangeWaitSecond = 0.00f;
    this->EmoteChangeWaitSecondMax = 2.00f;
    this->bStyleChangeOperationFlg = false;
    this->CharacterStyleChangeRequest = EKoratCharacterChangeMode::None;
    this->CharacterStyleChangeRequestNo = 0;
    this->CharacterChangeRequest = -2;
    this->bForceChangeByBattleDirectingRequest = false;
    this->SafeSpawnCharacterChangeMode = EKoratCharacterChangeMode::None;
    this->CharacterHUDStatusReq = EKoratCharacterHUDStatusReq::None;
    this->bCharacterHUDTickEnable = true;
    this->bDemoStopHUDDisable = false;
    this->bDemoStopCharacterDisable = false;
    this->bDemoHideBullets = false;
    this->TargetPawn = NULL;
    this->LastDamageAttackType = EKoratActionAttackType::None;
    this->SuperAscertainSuccessAttackType = EKoratActionAttackType::None;
    this->AnimEventDispatcher = NULL;
    this->PlayableAnimType = EKoratPlayableAnimType::All;
    this->bCharge = false;
    this->bExplosionHit_CamUnSync = false;
    this->ExplosionHitLevel_CamUnSync = ECameraZoomType::ZoomNone;
    this->ExplosionHitElapsedTime_CamUnSync = 0.00f;
    this->ExplosionHitTimeout_CamUnSync = 0.00f;
    this->bCombo = false;
    this->ComboNum = 0;
    this->ComboDamage = 0.00f;
    this->DownValue = 0;
    this->DamageReactionRemainingTime = 0.00f;
    this->bAttackHit = false;
    this->bAttackHitAfterAttackAct = false;
    this->bDuringDamage = false;
    this->SmashLevel = 0;
    this->bLockSmashLevel = false;
    this->bOpportunitySpeedImpact = false;
    this->ReactionDirection = EKoratReactionDirection::Default;
    this->RequestReactionDirection = EKoratReactionDirection::Default;
    this->AttackDiretion = EKoratDirection::Front;
    this->RequestAttackDiretion = EKoratDirection::Front;
    this->GuardDirection = EKoratGuardDirection::None;
    this->InterruptGuardDirection = EKoratGuardDirection::None;
    this->PursuitCountOfDragonHoming = 0;
    this->PursuitCountOfVanishingAttack = 0;
    this->PursuitCountOfLightningAttack = 0;
    this->bKnockDown = false;
    this->bCanKnockDown = false;
    this->PerfectAvoidanceTime = 0.00f;
    this->EmoteDuration = 0.00f;
    this->bWillStunWhenEndSparking = false;
    this->bPushingCollisionAutoAdjust = true;
    this->bResetMoveSpeed = false;
    this->bResetAction = false;
    this->bFlyingAutoLanding = false;
    this->bFluffyMove = false;
    this->bProhibitionFluffyMove = false;
    this->KoratCharacterAuraComponent = CreateDefaultSubobject<UKoratCharacterAuraComponent>(TEXT("KoratCharacterAurComponent"));
    this->VelocityLineEffectComponent = CreateDefaultSubobject<USSVelocityLineEffectComponent>(TEXT("VelocityLineEffectComponent"));
    this->ToonDirectionalLightBaseSocketName = TEXT("NULL");
    this->bOutlineEnable = false;
    this->bOutlineFillEnable = false;
    this->OutlineFillRate = 0.00f;
    this->bDebugDrawAim = false;
    this->bDebugDrawZSearchStatus = false;
    this->bBoneTransformFinalized = false;
    this->bBoneTransformFinalizedEx = false;
    this->KoratSelectEffectColorComponent = NULL;
    this->SSCharacterActionManagerForLevelSequence = NULL;
    this->CameraIndex = 0;
    this->bCheckCameraModeDistance = false;
    this->bCameraModeChangeDisable = false;
    this->bEnergyBulletNeedsChaosInitialize = false;
    this->TargetKeepViewSec = 0.00f;
    this->CurrentToTargetDistance = 0.00f;
    this->KeepAutoSearchDistanceSec = 0.00f;
    this->AuraSearchKeepSec = 0.00f;
    this->AuraLostKeepSec = 0.00f;
    this->BulletManager = NULL;
    this->CharacterBulletID = -1;
    this->BuffFormManager = NULL;
    this->CurrentBlastChargeTime = 0.00f;
    this->BlastBoostStatus = EKoratCharacterBlastBoostStatus::None;
    this->bBlastBoostStop = false;
    this->BlastBoostSlot = EKoratBlastSlotType::None;
    this->bBlastImpactBulletOverride = false;
    this->BlastImpactBulletRate = 1.00f;
    this->DelayDemoDeleteBlastBulletCount = 0;
    this->bDrawAttackCollision = false;
    this->DrawAttackCollisionTime = 0.00f;
    this->bDrawHitPosition = false;
    this->DrawHitPositionTime = 0.00f;
    this->bDrawHitArea = false;
    this->DrawHitAreaTime = 0.00f;
    this->bDebugArmorAddtiveReaction = false;
    this->DebugArmorAddtiveReactionInterval = 0.00f;
    this->bIsDebugNoDamage = false;
    this->bIsDebugNoDead = false;
    this->bIsDebugNoSkillConsume = false;
    this->bShouldTickIfViewportsOnly = false;
    this->bIsDebugNoStyleChangeWait = false;
    this->bDebugNoLockOnCharacter = false;
    this->bIsDrawEmbedHitData = false;
    this->WinType = ECharacterWinType::CompleteVictory;
    this->bRingOut = false;
    this->SectionElapsedTime = 0.00f;
    this->ActDragonDashElapsedTime = 0.00f;
    this->PlayInvincibleEffectCount = 0;
    this->CounterDamageScale = 0.00f;
    this->bIsBlastImpact = false;
    this->ActionMontageLDFirstEndRestTime = 0.00f;
    this->ActionMontageLDFirstEndRequiredTime = 0.00f;
    this->bCurrentActionsCanDrownOutForExplosion = false;
    this->bGuardCancellable = false;
    this->bSmashCombativeCharging = false;
    this->bSmashCombativeTargetIsActionTarget = false;
    this->bImpactBoost = false;
    this->PowerImpactStatus = EKoratCharacterPowerImpactStatus::None;
    this->PowerImpactStatusUI_1 = EKoratCharacterPowerImpactStatus::None;
    this->PowerImpactStatusUI_2 = EKoratCharacterPowerImpactStatus::None;
    this->PowerImpactWinCount = 0;
    this->PowerImpactValue = 0.00f;
    this->PowerImpactJudgeValue = 0.00f;
    this->PowerImpactResult = ESSPowerGaugeResult::None;
    this->PowerImpactMaxValue = 0.00f;
    this->PenaltyValue = 0.00f;
    this->InScale = 0.00f;
    this->PowerImpactPenaltyLine = 0.00f;
    this->CrashImpactWinCount = 0;
    this->bCrashImpactAttacker = false;
    this->bCrashImpactInput = false;
    this->bCrashImpactSuccess = false;
    this->CrashImpactJudgeValue = 0.00f;
    this->bCrashImpactInputStart = false;
    this->bCrashImpactInputFinish = false;
    this->CrashImpactResult = ESSCrashImpactUiResult::None;
    this->CrashImpactInputTime = 0.00f;
    this->CrashImpactInputWait = 0.00f;
    this->bCrashImpactUIIsIdle = false;
    this->bCrashImpactUIClose = false;
    this->CrashImpactBoostTime = 0.00f;
    this->bCrashImpactUIRun = false;
    this->CrashImpactJudgeValueReduction = 0.00f;
    this->CrashImpactEnemyJudgeValueReduction = 0.00f;
    this->CrashImpactStatus = EKoratCharacterCrashImpactStatus::None;
    this->SpeedImpactInputCount = 0.00f;
    this->SpeedImpactNextProgress = 0.00f;
    this->SpeedImpactJustTimingLength = 0.00f;
    this->SpeedImpactStatus = EKoratCharacterSpeedImpactStatus::None;
    this->SpeedImpactStatusUI = EKoratCharacterSpeedImpactStatus::None;
    this->SpeedImpactStartedUI = false;
    this->SpeedImpactJustLengthUI = 0.00f;
    this->SpeedImpactJustTimingUI = false;
    this->SpeedImpactProgressCurveUI = 0.00f;
    this->SpeedImpactInJudgeUI = ESSSpeedImpactTimingUiJudge::None;
    this->JustSpeedImpactInputUI = false;
    this->SpeedImpactTimingDecide = 0.00f;
    this->bSpeedImpactisDecided = false;
    this->SpeedImpactJustTimingPosition = 0.00f;
    this->bSpeedImpactTimingisStarted = false;
    this->SpeedImpactTimingTime = 0.00f;
    this->bSpeedImpactRapidisStarted = false;
    this->SpeedImpactRapidInputTime = 0.00f;
    this->SpeedImpactProgress = 0.00f;
    this->SpeedImpactNextProgressRapid = 0.00f;
    this->SpeedImpactJudgeTimingValue = 0.00f;
    this->bSpeedImpactUIFinish = false;
    this->SpeedImpactOkTimingEnd = 0.00f;
    this->SpeedImpactJustTimingEnd = 0.00f;
    this->SpeedImpactOneBlowJudgeTime = 0.20f;
    this->SpeedImpactRapidComboJudgeTime = 0.36f;
    this->bSpeedImpactForcedWinner = false;
    this->BlastImpactValueTotal = 0.00f;
    this->BlastImpactAttackPower = 0.00f;
    this->BlastImpactValue = 0.50f;
    this->BlastImpactTime = 0.00f;
    this->bBlastImpactResultFinish = false;
    this->BlastImpactMeterMax = 0.00f;
    this->BlastImpactMeter = 0.00f;
    this->BlastImpactResult = ESSBlastImpactUiResult::None;
    this->BlastImpactStatus = EKoratCharacterBlastImpactStatus::None;
    this->BlastImpactStatusUI = EKoratCharacterBlastImpactStatus::None;
    this->BattleImpactPhase = EBattleImpactPhase::kBegin;
    this->bBattleImpactDamageScalable = false;
    this->BattleImpactDamageScale = 1.00f;
    this->CameraAlpha = 0.00f;
    this->FreeCameraTurnSpeed = 180.00f;
    this->FreeCameraPitchMax = 67.00f;
    this->FreeCameraPitchMin = -67.00f;
    this->SearchSphereTraceRadius = 10.00f;
    this->BuffEffectRenderer = NULL;
    this->bIsBodyChanged = false;
    this->SuperHighSpeedMoveSideStatus = EKoratCharacterSuperHighSpeedMoveSideStatus::None;
    this->SuperHighSpeedMoveSideStatusClearTime = 0.00f;
    this->bIsDisableLipSyncFromSequencer = false;
    this->TransientAttackPowerMagnification = 1.00f;
    this->HitCount = 0;
    this->bReduceZSearch = false;
    this->ReduceZSearchEffectTime = 0.00f;
    this->bRefreshZSearchEffect = false;
    this->UnderWaterStatus = EKoratCharacterUnderWaterStatus::None;
    this->PrevFrameEachUnderWaterStatus = EKoratEachCharacterUnderWaterStatus::None;
    this->UnderWaterDepth = 0.00f;
    this->LipsAnalyzer = NULL;
    this->ReferenceLipsAnalyzer = NULL;
    this->FacialControlRig = NULL;
    this->bIsFinishDemo = false;
    this->bIsChangeHiddenCharacter = false;
    this->SpawnedLevelSequenceActor = NULL;
    this->CapsulePushingComponent->SetupAttachment(RootComponent);
    this->ForceFeedbackComponent->SetupAttachment(RootComponent);
}




void ASSCharacter::UpdateSearchScaleInAction(FKoratActionDataList InAction) {
}

void ASSCharacter::UpdateRushDerivedUsedHistory(float DeltaTime) {
}

void ASSCharacter::UpdateInputKoratBattleKey() {
}


void ASSCharacter::UpdateGiantCharaTargetTransformNearestTarget(bool bInForceSearchNearParts) {
}


void ASSCharacter::UpdateCurrentBlastChargeTime(EKoratBlastSlotType InSlot, float InTime) {
}

void ASSCharacter::UpdateCameraMode() {
}

void ASSCharacter::UpdateAutoRecoverSpGaugeAndSkillStock(const FKoratActionDataList& InAction) {
}

void ASSCharacter::UnsetChangedStates(EKoratBattleDirectingCharacterStateType InStateType) {
}

void ASSCharacter::UnForceFinishEarlyHD() {
}

void ASSCharacter::TurnBulletBlastHTSection() {
}

void ASSCharacter::TurnBulletBlastCGSection() {
}

void ASSCharacter::Turn(float InTurnAngle) {
}

bool ASSCharacter::TryPlayUnbreakableThrowWarning() {
    return false;
}

bool ASSCharacter::TryPlayUnblockableWarning() {
    return false;
}

bool ASSCharacter::TryPlayHyperSmashSequence() {
    return false;
}






void ASSCharacter::StopTurning() {
}

void ASSCharacter::StopTickForVanishing() {
}

void ASSCharacter::StopTickForTutorialBattleFinish() {
}

void ASSCharacter::StopTickForMapDataSpawn() {
}

void ASSCharacter::StopTickForMapChange(bool bInDelayStopSkeletalMesh) {
}

void ASSCharacter::StopTickForKnockdownTaketurns(bool bInDelayStopSkeletalMesh) {
}

void ASSCharacter::StopTickForHalt(bool bInDelayStopSkeletalMesh) {
}

void ASSCharacter::StopTickForGameState() {
}

void ASSCharacter::StopTickForDemonstrationHalt() {
}

void ASSCharacter::StopSPGaugeAutoRecovery() {
}

void ASSCharacter::StopSequenceSoundPlayerAll() {
}


void ASSCharacter::StopInvincibleStatusManagement(const EKoratCharacterInvincibleStatus InInvincibleStatus) {
}

void ASSCharacter::StopInvincibleEffect() {
}

void ASSCharacter::StopBlastGaugeRecovery() {
}





void ASSCharacter::StartSPGaugeAutoRecovery() {
}


void ASSCharacter::StartMapChange(const EKoratMapChangeType InMapChangeType, const EKoratMapChangeStartTiming InStartTiming, const float InStartDelayTime) {
}

void ASSCharacter::StartLoadSupporter(const FKoratActionDataList InAction, const ESSBlastDemoBranchType InBranchType) {
}

void ASSCharacter::StartInvincibleStatusManagement(const EKoratCharacterInvincibleStatus InInvincibleStatus) {
}

void ASSCharacter::StartCheckBlastBoostOnCharacter() {
}

void ASSCharacter::StartChangeTargetCharacter() {
}

void ASSCharacter::StartBlastGaugeRecovery() {
}

void ASSCharacter::StartBlastCombo() {
}

void ASSCharacter::SpawnSupporter() {
}

void ASSCharacter::SpawnCharacterActionSequenceActor(FKoratCharacterActionSpawnSequenceParameter InSpawnParameter) {
}

void ASSCharacter::ShowMapChangeNewLoadedMap() {
}

void ASSCharacter::ShowDuringMapChange() {
}

void ASSCharacter::SetWinType(const ECharacterWinType InType) {
}

void ASSCharacter::SetWaitingCostumeDamage(const int32 InWaitingCostumeDamage) {
}

void ASSCharacter::SetVisibilityCharacterActionSequenceActor(FKoratActionDataList InAction, bool InVisibility) {
}

void ASSCharacter::SetVanishingCollisionEnable(bool bEnable) {
}


void ASSCharacter::SetupCharacterDataList() {
}

void ASSCharacter::SetupBlastDemoBranchType(const EKoratBlastSlotType InBlastSlotType) {
}

void ASSCharacter::SetThereHyperArmor(const bool bInThereHyperArmor) {
}

void ASSCharacter::SetTargetPawn(APawn* InPawn) {
}

void ASSCharacter::SetSupporters(const TArray<ASSCharacter*>& InSupporters) {
}

void ASSCharacter::SetSuperHighSpeedMoveTransform(const FTransform& InStartTransform, const FTransform& InEndTransform) {
}

void ASSCharacter::SetSuperHighSpeedMoveSideStatus(const EKoratCharacterSuperHighSpeedMoveSideStatus Status, float TimeToLive) {
}

void ASSCharacter::SetSuperAscertainSuccessAttackType(EKoratActionAttackType InType) {
}

void ASSCharacter::SetStyleChangeWaitSecondMax(float InStyleChangeWaitSecondMax) {
}

void ASSCharacter::SetStyleChangeWaitSecond(float InStyleChangeWaitSecond) {
}

void ASSCharacter::SetStyleChangeOperationFlg(bool InStyleChangeOperationFlg) {
}

void ASSCharacter::SetSPGaugeValue(const float InSPGaugeValue) {
}

void ASSCharacter::SetSparkingTimeConsumeStop(const bool bInIsStop) {
}

void ASSCharacter::SetSparkingModeEndReserveOn() {
}

void ASSCharacter::SetSparkingModeEndReserveOff() {
}

void ASSCharacter::SetSparkingModeEndReserve(const bool bInEndReserve) {
}

void ASSCharacter::SetSparkingGaugeValue(float InSparkingGaugeValue) {
}

void ASSCharacter::SetSparkingGaugeMax() {
}

void ASSCharacter::SetSafeSpawnAreaSize(EKoratSafeSpawnAreaSize InAreaSize) {
}

void ASSCharacter::SetPushingCollisionEnable(bool bEnable) {
}

void ASSCharacter::SetProhibitionFluffyMove(bool bInProhibit) {
}

void ASSCharacter::SetProgramHiddenInGame(bool bNewHidden) {
}

void ASSCharacter::SetPreAction(const FKoratActionDataList& InAction) {
}

void ASSCharacter::SetPowerImpactWaistMovement(float Value) {
}

void ASSCharacter::SetPlayerStartKey(const FKoratPlayerStartDataList& InStartKey) {
}

void ASSCharacter::SetPlayableAnimType(const EKoratPlayableAnimType InPlayableAnimType) {
}

void ASSCharacter::SetP2FaceChipTexture(UTexture* InTexture) {
}

void ASSCharacter::SetP1FaceChipTexture(UTexture* InTexture) {
}

void ASSCharacter::SetOverrideAppealVoice(const FText& InTextID) {
}

void ASSCharacter::SetOutlineFillRate(const float InOutlineFullRate) {
}

void ASSCharacter::SetOutlineFillEnable(const bool bInOutlineFillFlag) {
}

void ASSCharacter::SetOutlineEnable(const bool InbNewOutlineEnable) {
}

void ASSCharacter::SetOutlineColorType(const FKoratCharacterEffectColorSetDataTypeDataList& InColorType) {
}

void ASSCharacter::SetNoHitMonitoringAction(const EKoratActionAttackType InAttackType) {
}

void ASSCharacter::SetNoHitAttack(EKoratActionAttackType InAttackType, bool InWithRemoveSurveillance) {
}

void ASSCharacter::SetNextSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionNameToChange, const FName InNextSectionName) {
}

void ASSCharacter::SetNextSection(const FName InNextSectionName) {
}

void ASSCharacter::SetMovementMode(EMovementMode InMovementMode) {
}

void ASSCharacter::SetLookatPartFlags(const EKoratActionLookatPartFlags& InPartFlags) {
}

void ASSCharacter::SetLookatOverrideBlendTime(const bool bInEnableOverride, const float InOverrideBlendTime) {
}

void ASSCharacter::SetLookatOperationType(const EKoratActionLookatOperationType& InOperationType) {
}

bool ASSCharacter::SetLookatLocation(const FVector& InLocation) {
    return false;
}

void ASSCharacter::SetLockOnCharacter(bool bLockon) {
}

void ASSCharacter::SetLinkOpponentPlayCharacterActionMontage(FKoratActionDataList InAction, FKoratActionDataList InLinkOpponentAction) {
}

void ASSCharacter::SetLimitBoostGaugeValue(const float InLimitBoostGaugeValue) {
}

void ASSCharacter::SetLDEndLength(float InLength) {
}

void ASSCharacter::SetLastDamageAttackType(EKoratActionAttackType InType) {
}

void ASSCharacter::SetKoratHitBackMovementData(FKoratHitBackMovementData& InHitBackMovement, FName InKey) {
}

void ASSCharacter::SetKoratCharacterMontageComponent(UKoratCharacterMontageComponent* InMontageComponent) {
}

void ASSCharacter::SetJumpSectionlayCharacterActionMontage(FKoratActionDataList InAction, FName InJumpSectionName) {
}

void ASSCharacter::SetIsSkipUpdateInputInDramaticBattle(bool InIsSkip) {
}

void ASSCharacter::SetIsBodyChanged(bool NewIsBodyChanged) {
}

void ASSCharacter::SetInvincible(const EKoratCharacterInvincibleStatus InInvincibleStatus) {
}

void ASSCharacter::SetInpactTrig(bool InFlg) {
}

void ASSCharacter::SetInpactGaugeValue(float InValue) {
}

void ASSCharacter::SetImpactPumpTimer(float InTime) {
}

void ASSCharacter::SetHPGaugeValue(const float InHPGaugeValue) {
}

void ASSCharacter::SetGuardDirection(EKoratGuardDirection InGuardDirection) {
}

void ASSCharacter::SetGuardCancellableState(bool InCancellable) {
}

void ASSCharacter::SetEquipmentAppealVoice(FKoratActionDataList InCheckAction) {
}

void ASSCharacter::SetEmoteMapping(TMap<int32, int32> InEmoteMapping) {
}

void ASSCharacter::SetEmoteChangeWaitSecond(float InEmoteChangeWaitSecond) {
}

void ASSCharacter::SetEffectColorBranch(const FKoratCharacterEffectColorSetDataTypeDataList& InColorType) {
}

void ASSCharacter::SetEarlyFinishHD(bool InFinish) {
}

void ASSCharacter::SetDrawEmbedHitData(bool InFlag) {
}

void ASSCharacter::SetDitherProgrammableStart(float InStartDitherRatio, float InEndDitherRatio, float InDitherTime, bool InDitherKeep) {
}

void ASSCharacter::SetDitherDefaultRatio(const float InDitherRatio) {
}

void ASSCharacter::SetDither(const float InDitherRatio) {
}

void ASSCharacter::SetDemonstrationState(bool bHudDisplay, bool bTargetHudDisplay, bool bTargetPawnDisplay) {
}

void ASSCharacter::SetDecideChangeCharacter(bool InFlg) {
}

void ASSCharacter::SetDebugSaveTransform(bool InFlag) {
}

void ASSCharacter::SetDebugResetTransform(bool InFlag) {
}

void ASSCharacter::SetDebugNoStyleChangeWait(bool InFlag) {
}

void ASSCharacter::SetDebugNoSkillConsume(const bool bIsNoSkillConsume) {
}

void ASSCharacter::SetDebugNoLockOnCharacter(bool bActive) {
}

void ASSCharacter::SetDebugNoDead(const bool bIsNoDead) {
}

void ASSCharacter::SetDebugNoDamage(const bool bIsNoDamage) {
}

void ASSCharacter::SetDebugEachUnderWaterStatus(bool InIsEnable, EKoratEachCharacterUnderWaterStatus InNewStatus) {
}

bool ASSCharacter::SetDebugArmorDetail(const FKoratArmorDataList InArmor, int32 InLevel) {
    return false;
}

bool ASSCharacter::SetDebugArmor(const int32 InLevel) {
    return false;
}

void ASSCharacter::SetDamageCollisionEnable(bool bEnable) {
}

void ASSCharacter::SetCutCameraDirector(ASSCutCameraDirector* InCameraDirector) {
}

void ASSCharacter::SetCustomTimeDilationInner(const float InTimeDilation, const EKoratSetCustomTimeDilationReason InReason) {
}

void ASSCharacter::SetCustomTimeDilationExternal() {
}

void ASSCharacter::SetCustomTimeDilation(const float InTimeDilation, const EKoratSetCustomTimeDilationReason InReason) {
}

void ASSCharacter::SetCounterConditionInvincible(bool InInvincible) {
}

void ASSCharacter::SetCostumeScratchLv(const int32 InCostumeScratchLv) {
}

void ASSCharacter::SetCostumeDamageLv(const int32 InCostumeDamageLv) {
}

void ASSCharacter::SetCostumeDamageChangeReactionParam(const FSSCharacterCostumeDamageReactionParam& InReactionParam) {
}

void ASSCharacter::SetCombo(const bool bInCombo, const int32 InComboNum) {
}

void ASSCharacter::SetChargeLv(const int32 InChargeLv) {
}

void ASSCharacter::SetCharge(bool bInCharge) {
}

void ASSCharacter::SetCharacterStyleChangeRequest(EKoratCharacterChangeMode InMode, int32 InChangeNo) {
}

void ASSCharacter::SetCharacterStencil(bool bStencilValid, int32 StencilValue) {
}

void ASSCharacter::SetCharacterHUDTickEnable(bool bInTickEnable) {
}

void ASSCharacter::SetCharacterHUDStatusReq(EKoratCharacterHUDStatusReq InReq) {
}

void ASSCharacter::SetCharacterHUDChangeModeReq(ESSHUDChangeMode InHUDChangeMode) {
}

void ASSCharacter::SetCharacterCosutumeModelID(const FName InCosutumeModelID) {
}

void ASSCharacter::SetCharacterCosutumeDataList(const FKoratCharacterCostumeDataList& InCosutumeDataList) {
}

void ASSCharacter::SetCharacterCollisionEnable(bool bEnable) {
}

void ASSCharacter::SetCharacterChangeRequest(int32 InChangeCharactorNo) {
}

void ASSCharacter::SetChangeWaitSecondMax(float InChangeWaitSecondMax) {
}

void ASSCharacter::SetChangeWaitSecond(float InChangeWaitSecond) {
}

void ASSCharacter::SetChangedStates(EKoratBattleDirectingCharacterStateType InStateType) {
}

void ASSCharacter::SetCameraModeChangeDisable(const bool bInDisable) {
}


void ASSCharacter::SetBlastStockCount(const int32 InBlastStockCount) {
}

void ASSCharacter::SetBlastImpactBulletTransformTipAdjust(FTransform trans) {
}

void ASSCharacter::SetBlastImpactBulletTransformTip(FTransform trans) {
}

void ASSCharacter::SetBlastImpactBulletTransformRootAdjust(FTransform trans) {
}

void ASSCharacter::SetBlastImpactBulletTransformRoot(FTransform trans) {
}

void ASSCharacter::SetBlastGaugeValue(const float InBlastGaugeValue) {
}

void ASSCharacter::SetBlastGaugeRecoverySpeedMultiplier(const float InBlastGaugeRecoverySpeedMultiplier) {
}

void ASSCharacter::SetBlastGaugeRecoverySpeed(const float InBlastGaugeRecoverySpeed) {
}

void ASSCharacter::SetBeforeInputTime(float InTime) {
}

void ASSCharacter::SetBattleImpactDamageScale(float Scale) {
}

void ASSCharacter::SetBattleDirectingFormChangeForbidsHUD(const TArray<FKoratCharacterDataList>& InForbidForms) {
}

void ASSCharacter::SetBattleDirectingFormChangeForbids(const TArray<FKoratCharacterDataList>& InForbidForms) {
}

void ASSCharacter::SetBattleDirectingFormChangeForbid(FKoratCharacterDataList InForbidForm) {
}

void ASSCharacter::SetBattleDirectingFormChangeAllowHUD(FKoratCharacterDataList InForbidForm) {
}

void ASSCharacter::SetBattleDirectingFormChangeAllow(FKoratCharacterDataList InForbidForm) {
}

void ASSCharacter::SetBattleDirectingBulletForbid() {
}

void ASSCharacter::SetBattleDirectingBulletAllow() {
}

void ASSCharacter::SetBattleDirectingBlastForbid(EKoratBlastSlotType InType) {
}

void ASSCharacter::SetBattleDirectingBlastAllow(EKoratBlastSlotType InType) {
}

void ASSCharacter::SetAuraColorType(const FKoratCharacterEffectColorSetDataTypeDataList& InColorType) {
}

void ASSCharacter::SetAttackHit(const bool bIsAttackHit) {
}

void ASSCharacter::SetArmorLevel(const FKoratArmorLevelDataList& InArmorLevelDataList, UObject* InObject) {
}

void ASSCharacter::SetActionCameraCallback(ASSCharacter* InCharacter, ESSSetActionCameraType InSetType, const FSSActionCameraParameterData& InActionCameraParameter) {
}

void ASSCharacter::SetActionCamera(const ESSSetActionCameraType InSetType, USSActionCameraDataAsset* InActionCamera) {
}

void ASSCharacter::SequentialAttackStateStart(ASSCharacter* InDamageTarget, FKoratActionDataList InAction, FKoratCombativesKeyDataList InCombativesKey, float InAttackRatio, int32 InHitNum, float InHitSpanSec, bool bInNoKnockDownAttack, bool bInDrain) {
}

void ASSCharacter::ResumeChangedStates(const TArray<EKoratBattleDirectingCharacterStateType>& InChangedStates, const TArray<EKoratBattleDirectingCharacterStateType>& InChangedPreStates) {
}

void ASSCharacter::ResumeBattleDirectingBlastForbidAllow(const FKoratCharacterForbidParameter& InForbid, const FKoratCharacterForbidParameter& InAllow) {
}

void ASSCharacter::RestartTickForVanishing() {
}

void ASSCharacter::RestartTickForTutorialBattleFinish() {
}

void ASSCharacter::RestartTickForMapDataSpawn() {
}

void ASSCharacter::RestartTickForMapChange() {
}

void ASSCharacter::RestartTickForHalt() {
}

void ASSCharacter::RestartTickForGameState() {
}

void ASSCharacter::RestartTickForDemonstrationHalt() {
}

void ASSCharacter::ResetRushDerivedUsedHistory() {
}

void ASSCharacter::ResetPursuitCount() {
}

void ASSCharacter::ResetJumpFlag() {
}

void ASSCharacter::ResetHitBulletCount() {
}

void ASSCharacter::ResetGiantCharaTargetTransformToCenter() {
}

void ASSCharacter::ResetFinishedBulletCount() {
}

void ASSCharacter::ResetDragonDashElapsedTime() {
}

void ASSCharacter::ResetDelayStartMapChange() {
}

void ASSCharacter::ResetCounterCondition() {
}

void ASSCharacter::ResetArmorLevel(UObject* InObject) {
}

void ASSCharacter::ResetAnimInstance() {
}

void ASSCharacter::RequestVisibilitySwirchFromMapChangeToDemo() {
}



void ASSCharacter::RequestResetMoveSpeed(bool InFlag) {
}

void ASSCharacter::RequestResetAction(bool InFlag) {
}


void ASSCharacter::RequestBulletToFinish() {
}

void ASSCharacter::RequestBlastBoostOnCharacter() {
}


void ASSCharacter::RefreshZSearchEffect() {
}


void ASSCharacter::RecoverSparkingGaugeValue(const float InRecoverValue) {
}

void ASSCharacter::RecoverSPAndSparkingGaugeValue(const float InRecoverValue) {
}

void ASSCharacter::RecoverSP(const float InRecoverValue, const float InLimit) {
}

void ASSCharacter::RecoverLimitBoost(const float InRecoverValue) {
}

void ASSCharacter::RecoverHP(const float InRecover) {
}

void ASSCharacter::RecoverBlastStock(const int32 InRecover) {
}

void ASSCharacter::RecoverBlastGaugeValueByDragonHomingChangeTrajectory() {
}

bool ASSCharacter::ReceivedDamageBySequentialAttack(AActor* InGaveDamageActor, FKoratActionDataList InAction, FKoratCombativesKeyDataList InCombativesKey, float InDamage, float InSPDamage, bool bInNoKnockDownAttack, bool bInDrain) {
    return false;
}

bool ASSCharacter::ReceivedDamageBySelf(AActor* InGaveDamageActor, const FKoratActionDataList& InAction, const bool bUseBulletParam) {
    return false;
}

void ASSCharacter::PrepareConsumeSkillStockCost(EKoratSkillSlot InSkillSlot) {
}

void ASSCharacter::PlayInvincibleEffect() {
}

void ASSCharacter::PlayDamageEffectExplosionByEnergyBulletActor(ASSBulletActor* InBulletActor, const FKoratActionDataList& InAction, const FTransform& InEffectTransform) {
}


void ASSCharacter::OverwriteMontageLevelSequenceInRequestAnimData(FKoratRequestAnimData& InOutRequestAnimData) {
}

void ASSCharacter::OnUkemi() {
}



void ASSCharacter::OnThrowBreak() {
}




void ASSCharacter::OnReloadChangedParameter() {
}

void ASSCharacter::OnReaction(const FKoratActionDataList& InCurrentAction) {
}

void ASSCharacter::OnPureBattleStart() {
}










void ASSCharacter::OnEndUIActionMontageLevelSequence_Implementation(FKoratGroupIdDataList InGroupId) {
}

void ASSCharacter::OnEndMontageLevelSequence_Implementation(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason) {
}



void ASSCharacter::OnEndAction(const FKoratActionDataList& InEndAction) {
}






void ASSCharacter::OnChangeCurrentAction(const FKoratActionDataList& InAction) {
}

void ASSCharacter::OnBuffEvent(const FKoratBuffId& InHandle, const FKoratUnitBuffInfo& InBuffInfo, EKoratBuffNotifyType InNotifyType) {
}

void ASSCharacter::OnBoneTransformsFinalizedEx() {
}

void ASSCharacter::OnBoneTransformsFinalized() {
}

void ASSCharacter::OnBeginUIActionMontageLevelSequence_Implementation(FKoratGroupIdDataList InGroupId) {
}

void ASSCharacter::OnBeginMontageLevelSequence_Implementation(FKoratActionDataList InAction) {
}

void ASSCharacter::OnAddWarpOffset(const FVector& InWarpOffsetPos, const FRotator& InWarpOffsetRot, const FVector& InWarpOffsetRotCenterPos) {
}

void ASSCharacter::OnActorHitEventCallback(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASSCharacter::OnActionStandby() {
}

void ASSCharacter::OccurOffset(AActor* InOpponentOffsetActor, const FKoratActionDataList& InAction, const EKoratOffsetType InOffsetType, const FTransform& InOffsetTransform, const FKoratReceivedDamageParameter& InReceivedDamageParameter) {
}

void ASSCharacter::NotifyRunSpecialFatePreBattleProduction() {
}

void ASSCharacter::NotifyRunSparkingCombo() {
}

void ASSCharacter::NotifyRunRevengeCounter() {
}

void ASSCharacter::MapChangeDestructDelete() {
}

void ASSCharacter::LogBtlSyncFromBP(int32 syncLogLv, const FString& Text) const {
}


void ASSCharacter::KoratDrawHitPosition(const float InDrawHitPositionTime) {
}

void ASSCharacter::KoratDrawHitArea(const float InDrawHitAreaTime) {
}

void ASSCharacter::KoratDrawAttackCollision(const float InDrawAttackCollisionTime) {
}

void ASSCharacter::KoratDebugArmorAddtiveReaction(const float InDebugArmorAddtiveReactionInterval) {
}

void ASSCharacter::KoratCharacterDebugCommandDraw() {
}

float ASSCharacter::KnockbackMovementStart(FVector WorldDirection, float InHitbackTime, float InInitialSpeed, float InMaxSpeed, float InMaxAcceleration, float InBrakingDeceleration) {
    return 0.0f;
}

void ASSCharacter::KnockbackMovementInput(FVector WorldDirection, float InAlpha, float ScaleValue) {
}

void ASSCharacter::KnockbackMovementApply(FVector WorldDirection, float InDeltaTime, float InKnockbackTime) {
}



void ASSCharacter::JumpSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionName) {
}

bool ASSCharacter::IsZBurstSmash(bool InStart, bool InLoop) {
    return false;
}

bool ASSCharacter::IsZBurstDash(bool InStart, bool InLoop) {
    return false;
}



bool ASSCharacter::IsUseNativeProcess() {
    return false;
}

bool ASSCharacter::IsUseeComboActionTarget() const {
    return false;
}

bool ASSCharacter::IsUseActionTarget() const {
    return false;
}

bool ASSCharacter::IsUsableRushHighSpeedMoveRevenge() const {
    return false;
}

bool ASSCharacter::IsUsableRevengeCounter() const {
    return false;
}

bool ASSCharacter::IsUnconscious() const {
    return false;
}

bool ASSCharacter::IsUIActionPlaying() const {
    return false;
}

bool ASSCharacter::IsTurning() const {
    return false;
}

bool ASSCharacter::IsTurnBeforeTransition(const FKoratActionDataList InAction) const {
    return false;
}

bool ASSCharacter::IsTransitionFlyingMode() const {
    return false;
}

bool ASSCharacter::IsTransitionableAction(const FKoratActionDataList InAction) const {
    return false;
}

bool ASSCharacter::IsThrowActionRunning(bool InIsCheckDoubleSided) const {
    return false;
}

bool ASSCharacter::IsThrowAction2P(FKoratActionDataList InAction) const {
    return false;
}

bool ASSCharacter::IsThrowAction1P(FKoratActionDataList InAction) const {
    return false;
}

bool ASSCharacter::IsTargetRepelStopAction() const {
    return false;
}

bool ASSCharacter::IsTargetGiantChara() const {
    return false;
}

bool ASSCharacter::IsTaketurns() {
    return false;
}

bool ASSCharacter::IsSuperZCounterPosture() const {
    return false;
}

bool ASSCharacter::IsStyleChangeOK() const {
    return false;
}

bool ASSCharacter::IsStunState() const {
    return false;
}

bool ASSCharacter::IsStopTickForVanishing() const {
    return false;
}

bool ASSCharacter::IsStopTickForDemonstrationHalt() {
    return false;
}

bool ASSCharacter::IsStopTick() {
    return false;
}

bool ASSCharacter::IsStayActionTarget() const {
    return false;
}

bool ASSCharacter::IsSPGaugeValueMax() const {
    return false;
}

bool ASSCharacter::IsSPEnoghToVanishingAssault(ESSVanishingAssaultType InType) const {
    return false;
}

bool ASSCharacter::IsSPEnoghToRushHighSpeedMoveRevenge() const {
    return false;
}

bool ASSCharacter::IsSPEnoghToRushHighSpeedMove() const {
    return false;
}

bool ASSCharacter::IsSparkingTimeConsumeStop() const {
    return false;
}

bool ASSCharacter::IsSparkingModeState() const {
    return false;
}

bool ASSCharacter::IsSparkingModeEndReserve() const {
    return false;
}

bool ASSCharacter::IsSparkingConditionKeeping_Implementation() const {
    return false;
}

bool ASSCharacter::IsSkipUpdateInputInDramaticBattle() const {
    return false;
}

bool ASSCharacter::IsRunningAction(FKoratActionDataList InAction) const {
    return false;
}

bool ASSCharacter::IsRequestResetMoveSpeed() {
    return false;
}

bool ASSCharacter::IsRequestResetAction() {
    return false;
}

bool ASSCharacter::IsRequestBulletToFinish_Implementation(FKoratActionDataList InAction) const {
    return false;
}

bool ASSCharacter::IsReplaceAnimation(const FKoratActionDataList InAnimation) const {
    return false;
}

bool ASSCharacter::IsRepelActionContinueDistance(bool InIsJump) const {
    return false;
}

bool ASSCharacter::IsReceiveSelfDamage(const FKoratActionDataList& InAction) {
    return false;
}

bool ASSCharacter::IsPursuitPossible(const EKoratPursuitType InPursuitType) const {
    return false;
}

bool ASSCharacter::IsPreSparkingModeState() const {
    return false;
}

bool ASSCharacter::IsPotara() {
    return false;
}

bool ASSCharacter::IsPossibleThrowEscape() const {
    return false;
}

bool ASSCharacter::IsPossibleSparkingCharge() const {
    return false;
}

bool ASSCharacter::IsPlayAddtiveReactionAction(const FKoratActionDataList& InAction) const {
    return false;
}

bool ASSCharacter::IsNumbState() const {
    return false;
}

bool ASSCharacter::IsNearModeOnCharacter() const {
    return false;
}

bool ASSCharacter::IsMovementGround() const {
    return false;
}


bool ASSCharacter::IsMemberChangeOK() const {
    return false;
}

bool ASSCharacter::IsMapChangeDestructDemoGuard(const EKoratBlastSlotType& InBlastSlot) const {
    return false;
}

bool ASSCharacter::IsLookatEnabledAction(const FKoratActionDataList& InAction) const {
    return false;
}

bool ASSCharacter::IsLockOnCharacter() const {
    return false;
}

bool ASSCharacter::IsLimitBoost() {
    return false;
}

bool ASSCharacter::IsLastSectionFinished(const EKoratAnimType InAnimType, int32 InOffsetFrame) const {
    return false;
}

bool ASSCharacter::IsLastDamageReactionBySameRushDerived() const {
    return false;
}

bool ASSCharacter::IsKnockDown() const {
    return false;
}

bool ASSCharacter::IsInUnderWaterDepth() const {
    return false;
}

bool ASSCharacter::IsInUnderWater() const {
    return false;
}

bool ASSCharacter::IsInterruptibleExplosionSkill() const {
    return false;
}

bool ASSCharacter::IsInterruptibleBarrierSkill() const {
    return false;
}

bool ASSCharacter::IsInputRestrictedToTargetRevengeSmashNative(const EKoratBattleKey Key, const float SincePressTime, const float TargetActionTime, const bool TargetIsRevengeSmash) const {
    return false;
}

bool ASSCharacter::IsInputRestricted(const EKoratBattleKey InBattleKey, float InSincePressTime) const {
    return false;
}

bool ASSCharacter::IsInputPadKeyBattleKey() const {
    return false;
}

bool ASSCharacter::IsInAirOnCharacter() const {
    return false;
}

bool ASSCharacter::IsHitDemoFar() {
    return false;
}


bool ASSCharacter::IsGuardCancellable() const {
    return false;
}

bool ASSCharacter::IsGroundWalkingOnCharacter() const {
    return false;
}

bool ASSCharacter::IsGroundRunningOnCharacter() const {
    return false;
}

bool ASSCharacter::IsGroundMoveOnCharacter() const {
    return false;
}

bool ASSCharacter::IsGround() const {
    return false;
}

bool ASSCharacter::IsGiantChara() const {
    return false;
}

bool ASSCharacter::IsFusion() {
    return false;
}

bool ASSCharacter::IsFormChange() {
    return false;
}

bool ASSCharacter::IsForceFinishEarlyHD() {
    return false;
}

bool ASSCharacter::IsForbiddenForm(FKoratCharacterDataList InForm) const {
    return false;
}

bool ASSCharacter::IsFlyingAutoLanding() const {
    return false;
}

bool ASSCharacter::IsFluffyMoveNow() const {
    return false;
}

bool ASSCharacter::IsFarLowAltitudeFlightOnCharacter() const {
    return false;
}

bool ASSCharacter::IsFarCanFlyOnCharacter() const {
    return false;
}

bool ASSCharacter::IsEquippedScouter() const {
    return false;
}

bool ASSCharacter::IsEquipEmote(FKoratActionDataList InCheckAction) {
    return false;
}

bool ASSCharacter::IsEnergyBulletUsable(const FKoratActionDataList InEnergyBulletActionData, bool bInJumpRushKidan, bool bInDashRushKidan, bool& bOutCannotShoot) {
    return false;
}

bool ASSCharacter::IsEnergyBulletSmashUsable(const FKoratActionDataList InEnergyBulletActionData, bool& bOutCannotShoot) {
    return false;
}

bool ASSCharacter::IsEnergyBulletDrain() const {
    return false;
}

bool ASSCharacter::IsEnabledUIActionFootIK() {
    return false;
}

bool ASSCharacter::IsEnableAimLookatLocation() {
    return false;
}

bool ASSCharacter::IsEnableAimLocation() {
    return false;
}

bool ASSCharacter::IsEarlyFinishHD() {
    return false;
}

bool ASSCharacter::IsDrawHitPosition() const {
    return false;
}

bool ASSCharacter::IsDrawHitArea() const {
    return false;
}

bool ASSCharacter::IsDrawEmbedHitData() const {
    return false;
}

bool ASSCharacter::IsDrawAttackCollision() const {
    return false;
}

bool ASSCharacter::IsDoVanishingWhenDoBlastCombo() {
    return false;
}

bool ASSCharacter::IsDisableLipSync_Implementation() const {
    return false;
}

bool ASSCharacter::IsDestructedToMapDamage() const {
    return false;
}

bool ASSCharacter::IsDelayStartMapChange() const {
    return false;
}

bool ASSCharacter::IsDecreasingSmashLevelGauge() const {
    return false;
}

bool ASSCharacter::IsDebugSaveTransform() const {
    return false;
}

bool ASSCharacter::IsDebugResetTransform() const {
    return false;
}

bool ASSCharacter::IsDebugNoStyleChangeWait() const {
    return false;
}

bool ASSCharacter::IsDebugNoSkillConsume() const {
    return false;
}

bool ASSCharacter::IsDebugNoDead() const {
    return false;
}

bool ASSCharacter::IsDebugNoDamage() const {
    return false;
}

bool ASSCharacter::IsDebugBlastImpact() {
    return false;
}

bool ASSCharacter::IsDebugArmorAddtiveReaction() const {
    return false;
}

bool ASSCharacter::IsDashJumpTransitionableHeight() const {
    return false;
}

bool ASSCharacter::IsDamageReactionAction(const FKoratActionDataList& InAction) const {
    return false;
}

bool ASSCharacter::IsDamageReaction() const {
    return false;
}

bool ASSCharacter::IsCurrentActionsCanDrownOutForExplosion() const {
    return false;
}

bool ASSCharacter::IsCounterConditionSuccessZCounter() const {
    return false;
}

bool ASSCharacter::IsCounterConditionSuccessSuperCounter() const {
    return false;
}

bool ASSCharacter::IsCounterConditionSuccessSonicSway() const {
    return false;
}

bool ASSCharacter::IsCounterConditionSuccessSelfishness() const {
    return false;
}

bool ASSCharacter::IsCounterConditionSuccessFastAvoidance() const {
    return false;
}

bool ASSCharacter::IsCounterConditionSuccessAscertain() const {
    return false;
}

bool ASSCharacter::IsCostumeDamaged() {
    return false;
}

bool ASSCharacter::IsController1P() const {
    return false;
}

bool ASSCharacter::IsCombo() const {
    return false;
}

bool ASSCharacter::IsCombinationAnimation(const FKoratActionDataList& InAction) const {
    return false;
}


bool ASSCharacter::IsClassicMode() {
    return false;
}

bool ASSCharacter::IsCharacterStatusInBattle() const {
    return false;
}

bool ASSCharacter::IsChaosActive() const {
    return false;
}

bool ASSCharacter::IsCantFlyKidanOnCharacter() const {
    return false;
}

bool ASSCharacter::IsCanSuperHighSpeedMove() const {
    return false;
}

bool ASSCharacter::IsCanSpeedImpactByCurrentAction() {
    return false;
}

bool ASSCharacter::IsCanSpeedImpactByAction(const FKoratActionDataList& InAction) const {
    return false;
}

bool ASSCharacter::IsCanSelfishness() const {
    return false;
}

bool ASSCharacter::IsCannotThrowTransitionInStandby() const {
    return false;
}

bool ASSCharacter::IsCannotPowerImpact() const {
    return false;
}

bool ASSCharacter::IsCannotCrashImpact() const {
    return false;
}

bool ASSCharacter::IsCannotCharge() const {
    return false;
}

bool ASSCharacter::IsCannotActionFlagSuperZCounter() const {
    return false;
}

bool ASSCharacter::IsCannotActionFlagBlastRepel() const {
    return false;
}

bool ASSCharacter::IsCanHighSpeedMove() const {
    return false;
}

bool ASSCharacter::IsCanFly() const {
    return false;
}

bool ASSCharacter::IsCancelableSparkingCombo(const FKoratActionDataList& InAction) const {
    return false;
}

bool ASSCharacter::IsCancelableBlastCombo(const FKoratActionDataList& InAction) const {
    return false;
}

bool ASSCharacter::IsBoneFinalized() {
    return false;
}

bool ASSCharacter::IsBodyChanged() {
    return false;
}

bool ASSCharacter::IsBlowoutBrakeTimeReduction() const {
    return false;
}

bool ASSCharacter::IsBlastUltimateUsable() const {
    return false;
}

bool ASSCharacter::IsBlastUltimateGaveAfterStateToBlowFallingAlsoSIOT() const {
    return false;
}

bool ASSCharacter::IsBlastUltimateGaveAfterStateToBlowFalling() const {
    return false;
}

bool ASSCharacter::IsBlastSkillUsable(EKoratBlastSlot InSlot) const {
    return false;
}

bool ASSCharacter::IsBlastSkillConsumeSkillStockImmediately(const FKoratActionDataList& InAction) const {
    return false;
}

bool ASSCharacter::IsBlastNonLockUsable(const EKoratBlastSlotType& InSlot) const {
    return false;
}

bool ASSCharacter::IsBlastMoveSpeedGuardBreak() const {
    return false;
}

bool ASSCharacter::IsBlastLungeMovement() {
    return false;
}

bool ASSCharacter::IsBlastImpactBulletOverride() const {
    return false;
}

void ASSCharacter::IsBlastImpactBulletActive(EKoratBranch& OutResult) {
}

bool ASSCharacter::IsBlastFullCharge(EKoratBlastSlotType InSlot) const {
    return false;
}

bool ASSCharacter::IsBlastForteUsable(EKoratSkillSlot InSlot) const {
    return false;
}

bool ASSCharacter::IsBlastForteInterruptible(EKoratSkillSlot InSlot) const {
    return false;
}

bool ASSCharacter::IsBlastDrain() const {
    return false;
}

bool ASSCharacter::IsBlastDemoBranchTarget(const ESSBlastDemoBranchType InBranchType) const {
    return false;
}

bool ASSCharacter::IsBlastCombo() const {
    return false;
}

bool ASSCharacter::IsBattleKeyReleased(const EKoratBattleKey InBattleKey) const {
    return false;
}

bool ASSCharacter::IsBattleKeyPressed(const EKoratBattleKey InBattleKey) const {
    return false;
}

bool ASSCharacter::IsBackstepWhenNearMode(const FKoratActionDataList InAction) const {
    return false;
}

bool ASSCharacter::IsAutoUkemiMode() const {
    return false;
}

bool ASSCharacter::IsAttackSuccessAngle(const ASSCharacter* InOpponentCharacter) const {
    return false;
}

bool ASSCharacter::IsAttackSideBlastAction(const FKoratActionDataList& InAction) const {
    return false;
}

bool ASSCharacter::IsAnimationOfCurrentActionMontage(UAnimSequenceBase* InAnimation, bool& OutNoMontage) {
    return false;
}

bool ASSCharacter::IsActiveAttackCollision(EKoratActionAttackType InAttackType) const {
    return false;
}


bool ASSCharacter::IsActionMontageFirstLDPassed() const {
    return false;
}

bool ASSCharacter::IsActionFlagSpiralSlash() const {
    return false;
}


void ASSCharacter::InheritSettings(const ASSCharacter* InFrom) {
}

void ASSCharacter::InheritDebugSettings(const ASSCharacter* InFrom) {
}




void ASSCharacter::HideDuringMapChange() {
}

bool ASSCharacter::HasPossibleThrowEscapeThrow() const {
    return false;
}

bool ASSCharacter::HasOpportunitySpeedImpact() const {
    return false;
}

bool ASSCharacter::HasLocomotionControl(FKoratActionDataList InAction) const {
    return false;
}

bool ASSCharacter::HasDetectedCounterConditionSignCombatives() const {
    return false;
}

void ASSCharacter::GetZBurstDashParameter(FKoratCharacterDataZBurstDashParameter& OutZBurstDashParameter) const {
}

float ASSCharacter::GetZBurstDashArrivalSecond() {
    return 0.0f;
}

ECharacterWinType ASSCharacter::GetWinType() const {
    return ECharacterWinType::NormalVictory;
}

bool ASSCharacter::GetWalkFlying() const {
    return false;
}

int32 ASSCharacter::GetWaitingCostumeDamage() const {
    return 0;
}

AController* ASSCharacter::GetViewingController() const {
    return NULL;
}

FKoratActionDataList ASSCharacter::GetVictoryProductionAction() {
    return FKoratActionDataList{};
}

EVictoryAppealWarpType ASSCharacter::GetVictoryAppealWarpType() const {
    return EVictoryAppealWarpType::MyselfSafeArea;
}


int32 ASSCharacter::GetUltimateBlastSpCostWhenHitting() const {
    return 0;
}

int32 ASSCharacter::GetUltimateBlastSpCostWhenFiring() const {
    return 0;
}

int32 ASSCharacter::GetUltimateBlastSpCost() const {
    return 0;
}

float ASSCharacter::GetTransitionPossibleTimeFromDashAttackToShortDash() const {
    return 0.0f;
}

float ASSCharacter::GetTeleportationCounterWaitTime() const {
    return 0.0f;
}

float ASSCharacter::GetTeleportationCounterStopRequestTime() const {
    return 0.0f;
}

float ASSCharacter::GetTeleportationCounterInputTime() const {
    return 0.0f;
}

APawn* ASSCharacter::GetTargetPawn() const {
    return NULL;
}

ASSCharacter* ASSCharacter::GetTargetCharacter() const {
    return NULL;
}

void ASSCharacter::GetSupportRequestAnimData(FKoratActionDataList InBaseAction, FKoratActionDataList InSupportAction, int32 InSupportIndex, FKoratRequestAnimData& OutRequestAnimData, EKoratBranch& OutResult) {
}

TArray<ASSCharacter*> ASSCharacter::GetSupporters() const {
    return TArray<ASSCharacter*>();
}

bool ASSCharacter::GetSupporterRebindDescriptionUsingIndex(int32 InIndex, FKoratRebindDescription& OutDescription) {
    return false;
}

void ASSCharacter::GetSupporterRebindDescription(TArray<FKoratRebindDescription>& OutDescription) {
}

void ASSCharacter::GetSuperHighSpeedMoveTransform(FTransform& OutStartTransform, FTransform& OutEndTransform) const {
}

EKoratCharacterSuperHighSpeedMoveSideStatus ASSCharacter::GetSuperHighSpeedMoveSideStatus() {
    return EKoratCharacterSuperHighSpeedMoveSideStatus::None;
}


EKoratActionAttackType ASSCharacter::GetSuperAscertainSuccessAttackType() const {
    return EKoratActionAttackType::None;
}

float ASSCharacter::GetStyleChangeWaitSecondMax() const {
    return 0.0f;
}

float ASSCharacter::GetStyleChangeWaitSecond() const {
    return 0.0f;
}

bool ASSCharacter::GetStyleChangeOperationFlg() {
    return false;
}

int32 ASSCharacter::GetStyleChangeActiveCount() {
    return 0;
}

float ASSCharacter::GetStunReactionMaxRecoverySP() const {
    return 0.0f;
}

float ASSCharacter::GetStunReactionInputRecoverySpeed() const {
    return 0.0f;
}

void ASSCharacter::GetStepsParameter(FKoratCharacterDataStepParameter& Front, FKoratCharacterDataStepParameter& FlyBackIN, FKoratCharacterDataStepParameter& FlyBackOT, FKoratCharacterDataStepParameter& FlyLeftRightIN, FKoratCharacterDataStepParameter& FlyLeftRightOT, FKoratCharacterDataStepParameter& GroundBackIN, FKoratCharacterDataStepParameter& GroundBackOT, FKoratCharacterDataStepParameter& GroundLeftRightIN, FKoratCharacterDataStepParameter& GroundLeftRightOT, FKoratCharacterDataStepParameter& LongFrontIN, FKoratCharacterDataStepParameter& LongFrontOT, FKoratCharacterDataStepParameter& LongBackIN, FKoratCharacterDataStepParameter& LongBackOT, FKoratCharacterDataShortDashParameter& ShortDash) const {
}

float ASSCharacter::GetSPGaugeValue() const {
    return 0.0f;
}

void ASSCharacter::GetSpeedImpactOkJustTimingEnd(float& OutOkEnd, float& OutJustEnd) {
}

float ASSCharacter::GetSpeedImpactInputCount() const {
    return 0.0f;
}

void ASSCharacter::GetSpeedImpact(EKoratCharacterSpeedImpactStatus& OutStatus, float& OutProgress, float& OutLength, float& OutDecide, float& OutProgressRapid, float& OutPosition) const {
}

bool ASSCharacter::GetSocketTransformSyncUnSafe(FTransform& OutTransform, const FName SocketName, const ERelativeTransformSpace TransformSpace) const {
    return false;
}

bool ASSCharacter::GetSocketTransformSyncSafe(FTransform& OutTransform, const FName InSocketName, const ERelativeTransformSpace InTransformSpace) const {
    return false;
}

bool ASSCharacter::GetSocketTransform(FTransform& OutTransform, const FName SocketName, const ERelativeTransformSpace TransformSpace) const {
    return false;
}

FRotator ASSCharacter::GetSocketRotatorSyncSafe(FName InSocketName) const {
    return FRotator{};
}

FVector ASSCharacter::GetSocketLocationSyncSafe(FName InSocketName) const {
    return FVector{};
}

float ASSCharacter::GetSmashLevelGaugeDecrementDelayTime() const {
    return 0.0f;
}

int32 ASSCharacter::GetSmashLevel() const {
    return 0;
}

int32 ASSCharacter::GetSkillStockCost(EKoratSkillSlot InSkillSlot) const {
    return 0;
}

float ASSCharacter::GetShortDashSpeedDownDistance() const {
    return 0.0f;
}

void ASSCharacter::GetShortDashParameter(FKoratCharacterDataShortDashParameter& OutShortDash) const {
}

EBattleSettleAttackType ASSCharacter::GetSettleAttackType() const {
    return EBattleSettleAttackType::None;
}

FString ASSCharacter::GetSequencePlayingLabel(ASSLevelSequenceActor* InSequenceActor) {
    return TEXT("");
}

float ASSCharacter::GetSectionElapsedTime() const {
    return 0.0f;
}

EKoratCharacterChangeMode ASSCharacter::GetSafeSpawnCharacterChangeMode() const {
    return EKoratCharacterChangeMode::None;
}

EKoratSafeSpawnAreaSize ASSCharacter::GetSafeSpawnAreaSize() const {
    return EKoratSafeSpawnAreaSize::None;
}


bool ASSCharacter::GetRotatedNullSyncUnSafe(FTransform& OutTransform) const {
    return false;
}

bool ASSCharacter::GetRotatedNull(FTransform& OutTransform) const {
    return false;
}

ASSRootCameraDirector* ASSCharacter::GetRootCameraDirector() const {
    return NULL;
}

void ASSCharacter::GetRevengeDashParameter(FKoratCharacterDataRevengeDashParameter& OutRevengeDashParameter) const {
}

float ASSCharacter::GetRevengeCounterShortAttackTransitionRange() const {
    return 0.0f;
}

float ASSCharacter::GetRevengeCounterMediumUpAttackTransitionRange() const {
    return 0.0f;
}

float ASSCharacter::GetRevengeCounterMediumAttackStartRange() const {
    return 0.0f;
}

float ASSCharacter::GetRevengeCounterLongAttackTransitionRange() const {
    return 0.0f;
}

float ASSCharacter::GetRevengeCounterLongAttackStartRange() const {
    return 0.0f;
}


void ASSCharacter::GetReplacePartsAnimationPtr(const FKoratReplaceAnimationDataList InReplaceAnimation, int32 InIndex, TArray<FSSPartsAnimationPtr>& OutPartsAnimation) const {
}

void ASSCharacter::GetReplaceAnimationPointerArray(const FKoratReplaceAnimationDataList InReplaceAnimation, TArray<UAnimMontage*>& OutMontage, TArray<ULevelSequence*>& OutLevelSequence) const {
}

int32 ASSCharacter::GetRepelActionContinueCount() const {
    return 0;
}

float ASSCharacter::GetReactionSplitMidBorder() const {
    return 0.0f;
}

float ASSCharacter::GetReactionSplitLowBorder() const {
    return 0.0f;
}

float ASSCharacter::GetReactionSplitHighBorder() const {
    return 0.0f;
}

bool ASSCharacter::GetPushingCollisionEnable() {
    return false;
}

float ASSCharacter::GetPursuitPossibleTime() const {
    return 0.0f;
}

float ASSCharacter::GetPureChangeWaitSecondValue() const {
    return 0.0f;
}

FKoratActionDataList ASSCharacter::GetPreBattleProductionAction(bool& bOutIsSpecialFate) {
    return FKoratActionDataList{};
}

void ASSCharacter::GetPreAction(FKoratActionDataList& OutAction) const {
}

float ASSCharacter::GetPowerImpactValue() const {
    return 0.0f;
}

FKoratPlayerStartDataList ASSCharacter::GetPlayerStartKey() const {
    return FKoratPlayerStartDataList{};
}

int32 ASSCharacter::GetPlayerSide() const {
    return 0;
}

EKoratPlayableAnimType ASSCharacter::GetPlayableAnimType() const {
    return EKoratPlayableAnimType::All;
}

bool ASSCharacter::GetParamCharacterActionSequenceActor(FKoratActionDataList InAction, float& OutTime, FString& OutName, FString& OutSection, float& OutMaxTime) const {
    return false;
}

UTexture* ASSCharacter::GetP2FaceChipTexture() const {
    return NULL;
}

UTexture* ASSCharacter::GetP1FaceChipTexture() const {
    return NULL;
}

float ASSCharacter::GetNumbRecoverySpeedScale() const {
    return 0.0f;
}

bool ASSCharacter::GetNoRotatedNull(FTransform& OutTransform) const {
    return false;
}

FTransform ASSCharacter::GetNoLockVirtualTargetTransform(float InDistance) const {
    return FTransform{};
}

float ASSCharacter::GetMovementParameterWallAngle() const {
    return 0.0f;
}

bool ASSCharacter::GetMovementParameterWalkFlying() const {
    return false;
}

float ASSCharacter::GetMovementParameterVanishingTraceShiftDistance() const {
    return 0.0f;
}

EMovementMode ASSCharacter::GetMovementParameterStartMovementMode() const {
    return MOVE_None;
}

float ASSCharacter::GetMovementParameterSpeedInterpolateRange() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterSlideAngleWall() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterSlideAngleGround() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterSlideAngleAirWall() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterSlideAngleAirGround() const {
    return 0.0f;
}

FRotator ASSCharacter::GetMovementParameterRotationRate() const {
    return FRotator{};
}

float ASSCharacter::GetMovementParameterNormalWalkSpeed() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterNormalSpeed() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterNoActionPitchHeight() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterNearWalkSpeed() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterNearSpeed() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterNearDistance() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterMaxAcceleration() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterJumpZVelocity() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterJumpToFlySeconds() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterJumpMaxHoldTime() const {
    return 0.0f;
}

int32 ASSCharacter::GetMovementParameterJumpMaxCount() const {
    return 0;
}

bool ASSCharacter::GetMovementParameterIsAutoJumpToFly() const {
    return false;
}

FKoratCharacterGroundMoveParameter ASSCharacter::GetMovementParameterGroundMoveParameter() const {
    return FKoratCharacterGroundMoveParameter{};
}

float ASSCharacter::GetMovementParameterGravityScale() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterEmbedInWallMinElapsedTime() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterEmbedInWallMaxElapsedTime() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterEmbedInWallAngle() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterEmbedInGroundMinElapsedTime() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterEmbedInGroundMaxElapsedTime() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterEmbedInGroundAngle() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterClimbDistance() const {
    return 0.0f;
}

bool ASSCharacter::GetMovementParameterCanFlyMyself() const {
    return false;
}

bool ASSCharacter::GetMovementParameterCanFly() const {
    return false;
}

float ASSCharacter::GetMovementParameterBrakingDecelerationFlying() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterAutoLandingNoMotionHeight() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterAutoLandingHeight() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterAutoLandingFallScale() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterAirControlBoostVelocityThreshold() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterAirControlBoostMultiplier() const {
    return 0.0f;
}

float ASSCharacter::GetMovementParameterAirControl() const {
    return 0.0f;
}

void ASSCharacter::GetMovementParameter(FKoratCharacterDataMovementParameter& OutMovementParameter) const {
}

EMovementMode ASSCharacter::GetMovementMode() const {
    return MOVE_None;
}

bool ASSCharacter::GetMovementFloorDistance(float& OutFloorDistance) const {
    return false;
}

float ASSCharacter::GetMaxSPGaugeValue() const {
    return 0.0f;
}

float ASSCharacter::GetMaxHPGaugeValue() const {
    return 0.0f;
}

int32 ASSCharacter::GetMaxBlastStockCount() const {
    return 0;
}

EKoratMapChangeType ASSCharacter::GetMapChangeType(const EKoratMapChangeStartTiming InStartTiming, const EKoratBlastSlotType& InBlastSlot, bool InSkipCheckNearGround) const {
    return EKoratMapChangeType::None;
}

FKoratMapDataList ASSCharacter::GetMapChangeData(const EKoratMapChangeType InMapChangeType, TSoftObjectPtr<ULevelSequence>& OutLevelSequence, TSoftObjectPtr<ULevelSequence>& OutOTLevelSequence) const {
    return FKoratMapDataList{};
}

EKoratActionLookatPartFlags ASSCharacter::GetLookatPartFlagsFromActionData() const {
    return EKoratActionLookatPartFlags::None;
}

EKoratActionLookatPartFlags ASSCharacter::GetLookatPartFlags() const {
    return EKoratActionLookatPartFlags::None;
}

EKoratActionLookatOperationType ASSCharacter::GetLookatOperationType() const {
    return EKoratActionLookatOperationType::None;
}

void ASSCharacter::GetLocomotionSectionData(FKoratActionDataList InAction, TArray<FSSLocomotionSection>& OutLocomotionSection) const {
}

int32 ASSCharacter::GetLocomotionRandomIntegerInRange(int32 Min, int32 Max) {
    return 0;
}

float ASSCharacter::GetLocomotionRandomFloatInRange(float Min, float Max) {
    return 0.0f;
}

bool ASSCharacter::GetLockOnCharacter() {
    return false;
}

TArray<FSSSupportingCharacterData> ASSCharacter::GetLoadingSupporters() const {
    return TArray<FSSSupportingCharacterData>();
}

bool ASSCharacter::GetLoadedSupporterKeeping(const FKoratActionDataList& InAction) const {
    return false;
}

float ASSCharacter::GetLimitBoostGaugeValue() {
    return 0.0f;
}

float ASSCharacter::GetLiftRecoveryWaitTime() const {
    return 0.0f;
}

EKoratActionAttackType ASSCharacter::GetLastDamageAttackType() const {
    return EKoratActionAttackType::None;
}

UKoratCharacterMontageComponent* ASSCharacter::GetKoratCharacterMontageComponent() const {
    return NULL;
}


int32 ASSCharacter::GetJumpBulletSetNum() const {
    return 0;
}

int32 ASSCharacter::GetJumpBulletRapidFireNum() const {
    return 0;
}

bool ASSCharacter::GetIsStoneMoveKidan() const {
    return false;
}

bool ASSCharacter::GetIsNoMoveKidanFire() const {
    return false;
}

EKoratCharacterInvincibleStatus ASSCharacter::GetInvincible() const {
    return EKoratCharacterInvincibleStatus::None;
}

int32 ASSCharacter::GetInternalSmashLevel() const {
    return 0;
}

bool ASSCharacter::GetInpactTrig() const {
    return false;
}

float ASSCharacter::GetInpactGaugeValue() const {
    return 0.0f;
}

float ASSCharacter::GetImpactPumpTimer() {
    return 0.0f;
}

bool ASSCharacter::GetImmortal() const {
    return false;
}

float ASSCharacter::GetIdealPositionMidAirKick() const {
    return 0.0f;
}

float ASSCharacter::GetHPGaugeValue() const {
    return 0.0f;
}

FTransform ASSCharacter::GetHomingTransform() const {
    return FTransform{};
}


FVector ASSCharacter::GetHomingLocation() const {
    return FVector{};
}

FKoratHitStopData ASSCharacter::GetHitStopData(const FKoratHitStopDataList& InHitStopDataList) const {
    return FKoratHitStopData{};
}

int32 ASSCharacter::GetHitBulletCount() {
    return 0;
}

FVector ASSCharacter::GetHitAirWallNormal() const {
    return FVector{};
}


EKoratGuardDirection ASSCharacter::GetGuardDirection() const {
    return EKoratGuardDirection::None;
}


float ASSCharacter::GetGuardableAngle() const {
    return 0.0f;
}

bool ASSCharacter::GetGroundFloorDistance(float& OutFloorDistance) const {
    return false;
}


TArray<UCapsuleComponent*> ASSCharacter::GetGiantCharaCapsulePushingComponents() {
    return TArray<UCapsuleComponent*>();
}

float ASSCharacter::GetFreeCameraTurnUDReverse() {
    return 0.0f;
}

float ASSCharacter::GetFreeCameraTurnSpeedYaw() {
    return 0.0f;
}

float ASSCharacter::GetFreeCameraTurnSpeedPitch() {
    return 0.0f;
}

float ASSCharacter::GetFreeCameraTurnLRReverse() {
    return 0.0f;
}

ASSNotifyActionCameraTargetActor* ASSCharacter::GetFreeCameraTargetActor() const {
    return NULL;
}

UForceFeedbackComponent* ASSCharacter::GetForceFeedbackComponent() const {
    return NULL;
}

int32 ASSCharacter::GetFinishedBulletCount() {
    return 0;
}

float ASSCharacter::GetFallStopRecoveryWaitTime() const {
    return 0.0f;
}

float ASSCharacter::GetFallRecoveryWaitTime() const {
    return 0.0f;
}

float ASSCharacter::GetFallRecoveryToLandingBorderDistance() const {
    return 0.0f;
}

float ASSCharacter::GetExplosionDrownOutableRadius() {
    return 0.0f;
}

bool ASSCharacter::GetEnableBlastUltimateOverrideDashAnim() const {
    return false;
}

bool ASSCharacter::GetEnableBlastSkill2OverrideDashAnim() const {
    return false;
}

bool ASSCharacter::GetEnableBlastSkill1OverrideDashAnim() const {
    return false;
}

bool ASSCharacter::GetEnableBlastConsecutiveShot(const EKoratBlastSlotType InSlot) const {
    return false;
}

int32 ASSCharacter::GetEmoteIndex(int32 InEmoteSlotNo) {
    return 0;
}

float ASSCharacter::GetEmoteChangeWaitSecondMax() const {
    return 0.0f;
}

float ASSCharacter::GetEmoteChangeWaitSecond() const {
    return 0.0f;
}

float ASSCharacter::GetDrawHitPositionTime() const {
    return 0.0f;
}

float ASSCharacter::GetDrawHitAreaTime() const {
    return 0.0f;
}

float ASSCharacter::GetDrawAttackCollisionTime() const {
    return 0.0f;
}

float ASSCharacter::GetDragonSmashTransitionDistance() const {
    return 0.0f;
}

float ASSCharacter::GetDragonSmashChargeEndDistance() const {
    return 0.0f;
}

void ASSCharacter::GetDragonHomingParameter(FKoratCharacterDataDragonHomingParameter& OutDragonHomingParameter) const {
}

float ASSCharacter::GetDragonHomingKeepDistanceInputInfluence() const {
    return 0.0f;
}

float ASSCharacter::GetDragonHomingKeepDistance() const {
    return 0.0f;
}

float ASSCharacter::GetDragonHomingInputInfluenceAttenuationDistance() const {
    return 0.0f;
}

float ASSCharacter::GetDragonHomingInputInfluence() const {
    return 0.0f;
}

float ASSCharacter::GetDragonHomingDecelerationDistance() const {
    return 0.0f;
}

void ASSCharacter::GetDragonDashParameter(FKoratCharacterDataDragonDashParameter& OutDragonDashParameter) const {
}

float ASSCharacter::GetDragonDashInterval() const {
    return 0.0f;
}

float ASSCharacter::GetDragonDashElapsedTime() const {
    return 0.0f;
}


int32 ASSCharacter::GetDownValueLimit() const {
    return 0;
}

int32 ASSCharacter::GetDownValue() const {
    return 0;
}

bool ASSCharacter::GetDecideChangeCharacter() const {
    return false;
}

bool ASSCharacter::GetDebugNoLockOnCharacter() const {
    return false;
}

EKoratEachCharacterUnderWaterStatus ASSCharacter::GetDebugEachUnderWaterStatus(bool& OutIsValid) {
    return EKoratEachCharacterUnderWaterStatus::None;
}

FKoratCharacterDataArmorLevelParameter ASSCharacter::GetDebugArmorDetail() const {
    return FKoratCharacterDataArmorLevelParameter{};
}

float ASSCharacter::GetDebugArmorAddtiveReactionInterval() const {
    return 0.0f;
}

void ASSCharacter::GetDashUpDownParameter(FKoratCharacterDataDashUpDownParameter& OutDashUpDownParameter) const {
}

float ASSCharacter::GetDashJumpZVelocity() const {
    return 0.0f;
}

float ASSCharacter::GetDashJumpXYVelocity() const {
    return 0.0f;
}

float ASSCharacter::GetDashJumpTransitionableHeight() const {
    return 0.0f;
}

int32 ASSCharacter::GetDashBulletNum() const {
    return 0;
}

FKoratActionDataList ASSCharacter::GetDamageReactionActionDataList(const FKoratDamageReactionDataList& InDamageReactionDataList, const bool bInFront) const {
    return FKoratActionDataList{};
}

bool ASSCharacter::GetDamageCollisionEnable() const {
    return false;
}

void ASSCharacter::GetDamageAction(const FKoratDamage& InDamage, FKoratActionDataList& OutAction) const {
}

ASSCutCameraDirector* ASSCharacter::GetCutCameraDirector() const {
    return NULL;
}

float ASSCharacter::GetCustomTimeDilation(EKoratSetCustomTimeDilationReason& OutReason) {
    return 0.0f;
}

TArray<FKoratActionDataList> ASSCharacter::GetCurrentRunningActionList() const {
    return TArray<FKoratActionDataList>();
}

EKoratOffsetType ASSCharacter::GetCurrentOffsetTypeOfDefense() const {
    return EKoratOffsetType::None;
}

EKoratOffsetType ASSCharacter::GetCurrentOffsetTypeOfAttack() const {
    return EKoratOffsetType::None;
}

float ASSCharacter::GetCurrentMontagePosition() const {
    return 0.0f;
}

EKoratCharacterLocomotionDetailStatus ASSCharacter::GetCurrentLocomotionDetailStatus() const {
    return EKoratCharacterLocomotionDetailStatus::IdleMove;
}

float ASSCharacter::GetCurrentLevelSequencePosition() const {
    return 0.0f;
}


float ASSCharacter::GetCurrentBlastChargeTime() const {
    return 0.0f;
}

float ASSCharacter::GetCurrentBlastChargeRatio(EKoratBlastSlotType InSlot) const {
    return 0.0f;
}

float ASSCharacter::GetCurrentBlastChargeDamageScale(EKoratActionAttackType InAttackType) const {
    return 0.0f;
}


float ASSCharacter::GetCurrentActionAttackCollisionScale() const {
    return 0.0f;
}

void ASSCharacter::GetCurrentAction(FKoratActionDataList& OutAction) const {
}

float ASSCharacter::GetCrashImpactInputTime() {
    return 0.0f;
}

EKoratSuperZCounterTakeType ASSCharacter::GetCounterConditionSuccessSuperZCounter() const {
    return EKoratSuperZCounterTakeType::None;
}

int32 ASSCharacter::GetCostumeScratchLv() const {
    return 0;
}

int32 ASSCharacter::GetCostumeDamageLv() const {
    return 0;
}

FSSCharacterCostumeDamageReactionParam ASSCharacter::GetCostumeDamageChangeReactionParam() {
    return FSSCharacterCostumeDamageReactionParam{};
}

FKoratCharacterDataList ASSCharacter::GetConstCharacterDataList() const {
    return FKoratCharacterDataList{};
}

FRotator ASSCharacter::GetConfrontRotator(float AdditionalAngle) const {
    return FRotator{};
}

EKoratActionConditionDown ASSCharacter::GetConditionDown() const {
    return EKoratActionConditionDown::None;
}

int32 ASSCharacter::GetComboNum() const {
    return 0;
}

int32 ASSCharacter::GetChargeLv() const {
    return 0;
}

int32 ASSCharacter::GetCharacterStyleChangeRequestNo() const {
    return 0;
}

EKoratCharacterChangeMode ASSCharacter::GetCharacterStyleChangeRequest() const {
    return EKoratCharacterChangeMode::None;
}

USSCharacterSocketComponent* ASSCharacter::GetCharacterSocketComponent() const {
    return NULL;
}

USSCharacterPostUpdateComponent* ASSCharacter::GetCharacterPostUpdateComponent() const {
    return NULL;
}


bool ASSCharacter::GetCharacterHUDTickEnable() const {
    return false;
}

EKoratCharacterHUDStatusReq ASSCharacter::GetCharacterHUDStatusReq() const {
    return EKoratCharacterHUDStatusReq::None;
}

ESSHUDChangeMode ASSCharacter::GetCharacterHUDChangeModeReq() const {
    return ESSHUDChangeMode::None;
}

FKoratCharacterFigureDataList ASSCharacter::GetCharacterFigureDataList() const {
    return FKoratCharacterFigureDataList{};
}

FKoratCharacterDataList ASSCharacter::GetCharacterDataList() {
    return FKoratCharacterDataList{};
}

FName ASSCharacter::GetCharacterCosutumeModelID() const {
    return NAME_None;
}

FKoratCharacterCostumeDataList ASSCharacter::GetCharacterCosutumeDataList() const {
    return FKoratCharacterCostumeDataList{};
}

bool ASSCharacter::GetCharacterCollisionEnable() {
    return false;
}

int32 ASSCharacter::GetCharacterChangeRequest() const {
    return 0;
}

USSCharacterBlastBulletComponent* ASSCharacter::GetCharacterBlastBulletComponent() const {
    return NULL;
}

USSCharacterBattleAssistComponent* ASSCharacter::GetCharacterBattleAssistComponent() const {
    return NULL;
}

USSCharacterActionTargetComponent* ASSCharacter::GetCharacterActionTargetComponent() const {
    return NULL;
}

ASSLevelSequenceActor* ASSCharacter::GetCharacterActionSequenceActor(FKoratActionDataList InAction) const {
    return NULL;
}

float ASSCharacter::GetChangeWaitSecondMax() const {
    return 0.0f;
}

float ASSCharacter::GetChangeWaitSecondCountUpPerSec() const {
    return 0.0f;
}

float ASSCharacter::GetChangeWaitSecond() const {
    return 0.0f;
}

TArray<EKoratBattleDirectingCharacterStateType> ASSCharacter::GetChangedStates() const {
    return TArray<EKoratBattleDirectingCharacterStateType>();
}

EKoratChangeDirectionOfActionStartType ASSCharacter::GetChangeDirectionOfActionStartType(const FKoratActionDataList& InAction) const {
    return EKoratChangeDirectionOfActionStartType::None;
}

FKoratActionDataList ASSCharacter::GetChangeCharacterAction(FKoratChangeCharacterActionDataList InChangeCharacterActionSlot) const {
    return FKoratActionDataList{};
}

UCapsuleComponent* ASSCharacter::GetCapsulePushingComponent() {
    return NULL;
}

bool ASSCharacter::GetCannotThrow() const {
    return false;
}

bool ASSCharacter::GetCannotStyleChange() const {
    return false;
}

bool ASSCharacter::GetCannotPotara() const {
    return false;
}

bool ASSCharacter::GetCannotNormalFormChange() const {
    return false;
}

bool ASSCharacter::GetCannotFusion() const {
    return false;
}

bool ASSCharacter::GetCannotEmote() const {
    return false;
}

bool ASSCharacter::GetCannotCharacterTaketurns() const {
    return false;
}

bool ASSCharacter::GetCannotBlastUlt() const {
    return false;
}

bool ASSCharacter::GetCannotBlastSkill(EKoratBlastSlot InSlot) const {
    return false;
}

bool ASSCharacter::GetCannotBlastForte(EKoratSkillSlot InSlot) const {
    return false;
}

bool ASSCharacter::GetCannotBlastCombo() const {
    return false;
}

float ASSCharacter::GetBulletRapidFireNum() const {
    return 0.0f;
}

int32 ASSCharacter::GetBoostCount() const {
    return 0;
}

float ASSCharacter::GetBodyPitchAngleJumpAction() const {
    return 0.0f;
}


int32 ASSCharacter::GetBlastUltimateTransitionConditionHitBulletCount() const {
    return 0;
}

int32 ASSCharacter::GetBlastUltimateTransitionConditionFinishedBulletCount() const {
    return 0;
}

FKoratBlastSkillTypeDataList ASSCharacter::GetBlastUltimateSkillType() const {
    return FKoratBlastSkillTypeDataList{};
}

TArray<FKoratActionDataList> ASSCharacter::GetBlastUltimateReceivedActionDataList() const {
    return TArray<FKoratActionDataList>();
}

UAnimSequence* ASSCharacter::GetBlastUltimateOverrideDashAnim() const {
    return NULL;
}

float ASSCharacter::GetBlastUltimateMoveLimitTime() const {
    return 0.0f;
}

float ASSCharacter::GetBlastUltimateMoveHitDistance() const {
    return 0.0f;
}

bool ASSCharacter::GetBlastUltimateIsBodyChange() const {
    return false;
}

FKoratHitBackMovementDataList ASSCharacter::GetBlastUltimateGaveAfterHitBackMovementDataList() const {
    return FKoratHitBackMovementDataList{};
}

void ASSCharacter::GetBlastUltimateGaveAfterHitBackMovementData(FKoratHitBackMovementData& OutMovementData) const {
}

FKoratActionDataList ASSCharacter::GetBlastUltimateGaveAfterActionDataList() const {
    return FKoratActionDataList{};
}

TArray<FKoratActionDataList> ASSCharacter::GetBlastUltimateGaveActionDataList() const {
    return TArray<FKoratActionDataList>();
}

int32 ASSCharacter::GetBlastStockCount() const {
    return 0;
}

int32 ASSCharacter::GetBlastSpCostWhenHitting(EKoratBlastSlot InBlastSlot) const {
    return 0;
}

int32 ASSCharacter::GetBlastSpCostWhenFiring(EKoratBlastSlot InBlastSlot) const {
    return 0;
}

int32 ASSCharacter::GetBlastSpCost(EKoratBlastSlot InBlastSlot) const {
    return 0;
}

EKoratBlastSlotType ASSCharacter::GetBlastSlot(FKoratActionDataList InAction) const {
    return EKoratBlastSlotType::None;
}

int32 ASSCharacter::GetBlastSkill2TransitionConditionHitBulletCount() const {
    return 0;
}

int32 ASSCharacter::GetBlastSkill2TransitionConditionFinishedBulletCount() const {
    return 0;
}

FKoratBlastSkillTypeDataList ASSCharacter::GetBlastSkill2SkillType() const {
    return FKoratBlastSkillTypeDataList{};
}

UAnimSequence* ASSCharacter::GetBlastSkill2OverrideDashAnim() const {
    return NULL;
}

int32 ASSCharacter::GetBlastSkill1TransitionConditionHitBulletCount() const {
    return 0;
}

int32 ASSCharacter::GetBlastSkill1TransitionConditionFinishedBulletCount() const {
    return 0;
}

FKoratBlastSkillTypeDataList ASSCharacter::GetBlastSkill1SkillType() const {
    return FKoratBlastSkillTypeDataList{};
}

UAnimSequence* ASSCharacter::GetBlastSkill1OverrideDashAnim() const {
    return NULL;
}


float ASSCharacter::GetBlastMoveSpeed() const {
    return 0.0f;
}

float ASSCharacter::GetBlastMaxChargeTime(EKoratBlastSlotType InSlot) const {
    return 0.0f;
}

float ASSCharacter::GetBlastImpactMeterMax() const {
    return 0.0f;
}

float ASSCharacter::GetBlastImpactMeter() const {
    return 0.0f;
}

EKoratBlastImpactCameraType ASSCharacter::GetBlastImpactCameraType(const EKoratBlastSlotType& InSlot) {
    return EKoratBlastImpactCameraType::None;
}

FTransform ASSCharacter::GetBlastImpactBulletTransformTipAdjust() const {
    return FTransform{};
}

FTransform ASSCharacter::GetBlastImpactBulletTransformTip() const {
    return FTransform{};
}

FTransform ASSCharacter::GetBlastImpactBulletTransformRootAdjust() const {
    return FTransform{};
}

FTransform ASSCharacter::GetBlastImpactBulletTransformRoot() const {
    return FTransform{};
}

FVector ASSCharacter::GetBlastImpactBulletTransformOffset() const {
    return FVector{};
}

float ASSCharacter::GetBlastImpactBulletRate() const {
    return 0.0f;
}

float ASSCharacter::GetBlastGaugeValue() const {
    return 0.0f;
}

float ASSCharacter::GetBlastGaugeRecoverySpeedMultiplier() const {
    return 0.0f;
}

float ASSCharacter::GetBlastGaugePlainRecoverySpeed() const {
    return 0.0f;
}

ESSBlastDemoBranchType ASSCharacter::GetBlastDemoBranchType() const {
    return ESSBlastDemoBranchType::None;
}


EKoratBlastSlotType ASSCharacter::GetBlastComboSlotType() {
    return EKoratBlastSlotType::None;
}

EKoratCharacterBlastBoostStatus ASSCharacter::GetBlastBoostState() const {
    return EKoratCharacterBlastBoostStatus::None;
}

float ASSCharacter::GetBlastBoostMagnification() const {
    return 0.0f;
}

FKoratBlastActionCategoryDataList ASSCharacter::GetBlastActionCategory(FKoratActionDataList InAction) const {
    return FKoratBlastActionCategoryDataList{};
}

FKoratActionDataList ASSCharacter::GetBlastAction(EKoratBlastSlotType InBlastSlot, FKoratBlastActionCategoryDataList InActionCategory) const {
    return FKoratActionDataList{};
}

float ASSCharacter::GetBeforeInputTime() const {
    return 0.0f;
}

int32 ASSCharacter::GetBeforeBoostCount() const {
    return 0;
}

bool ASSCharacter::GetbCrashImpactInputStart() {
    return false;
}

bool ASSCharacter::GetbCrashImpactInputFinish() {
    return false;
}

bool ASSCharacter::GetbCrashImpactAttacker() {
    return false;
}

float ASSCharacter::GetBattleKeyUpdateDeltaTime() const {
    return 0.0f;
}

float ASSCharacter::GetBattleKeyTimeSinceReleasedInSection(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float ASSCharacter::GetBattleKeyTimeSinceReleasedInAction(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float ASSCharacter::GetBattleKeyTimeSinceReleased(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float ASSCharacter::GetBattleKeyTimeSincePressedInSection(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float ASSCharacter::GetBattleKeyTimeSincePressedInAction(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float ASSCharacter::GetBattleKeyTimeSincePressedAtInterval(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float ASSCharacter::GetBattleKeyTimeSincePressed(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

float ASSCharacter::GetBattleKeyHoldTime(const EKoratBattleKey InBattleKey) const {
    return 0.0f;
}

EBattleImpactPhase ASSCharacter::GetBattleImpactPhase() const {
    return EBattleImpactPhase::kEnd;
}

ASSNewBattleCameraActor* ASSCharacter::GetBattleIdleCamera() const {
    return NULL;
}

ASSNewBattleCameraActor* ASSCharacter::GetBattleFreeCamera() const {
    return NULL;
}

TArray<FKoratCharacterDataList> ASSCharacter::GetBattleDirectingFormChangeForbidHUD() const {
    return TArray<FKoratCharacterDataList>();
}

TArray<FKoratCharacterDataList> ASSCharacter::GetBattleDirectingFormChangeForbid() const {
    return TArray<FKoratCharacterDataList>();
}

bool ASSCharacter::GetAutoRecoverSPGauge() const {
    return false;
}

float ASSCharacter::GetAutoLandingNoMotionHeight() const {
    return 0.0f;
}

float ASSCharacter::GetAutoLandingHeight() const {
    return 0.0f;
}

float ASSCharacter::GetAutoLandingFallScale() const {
    return 0.0f;
}

void ASSCharacter::GetAttackHoming(const FKoratAttackHomingDataList& InAttackHomingDataList, FKoratAttackHomingData& OutAttackHoming) const {
}

EKoratDirection ASSCharacter::GetAttackDirectionOfCombativesParameter(const FKoratActionDataList& InAction, const FKoratCombativesKeyDataList& InAdditionalData) const {
    return EKoratDirection::Front;
}

void ASSCharacter::GetArmorLevelParameter(FKoratCharacterDataArmorLevelParameter& OutArmorLevelParameter, bool bInIsBulletDamage) const {
}

void ASSCharacter::GetArmorData(const FKoratArmorDataList& InArmorDataList, FKoratArmorData& OutArmorData) const {
}

void ASSCharacter::GetArmorBreakLevelData(FKoratArmorBreakLevelData& OutArmorBreakLevelParameter, const FKoratArmorBreakLevelDataList& InArmorBreakLevelDataList) const {
}

int32 ASSCharacter::GetArmorBreakLevel(const FKoratArmorBreakLevelDataList& InArmorBreakLevelDataList, const FKoratActionDataList& InAttackAction) const {
    return 0;
}

USSCharacterAntiBulletComponent* ASSCharacter::GetAntiBulletComponent() const {
    return NULL;
}

TSubclassOf<UAnimInstance> ASSCharacter::GetAnimationSubInstance(const FName InName, FName& OutTagName) {
    return NULL;
}

void ASSCharacter::GetAnimations(const FKoratActionDataList& InAction, TArray<FSSMontageLevelSequence>& OutMontageLevelSequences) const {
}

void ASSCharacter::GetAnimationCurrentSection(FName& OutSection) const {
}

TArray<FText> ASSCharacter::GetAllFormChangeNames() const {
    return TArray<FText>();
}

FRotator ASSCharacter::GetAimRotator() {
    return FRotator{};
}

FVector ASSCharacter::GetAimLookatLocation() {
    return FVector{};
}

FVector ASSCharacter::GetAimLocation() {
    return FVector{};
}

USSAiCharacterStatusComponent* ASSCharacter::GetAiCharacterStatusComponent() {
    return NULL;
}

void ASSCharacter::GetAddtiveReactionAnimations(FKoratActionDataList InAction, bool InArmor, TArray<UAnimMontage*>& OutMontage) const {
}

EKoratActionTiltTimingType ASSCharacter::GetActionTiltTimingType(const FKoratActionDataList& InAction) const {
    return EKoratActionTiltTimingType::None;
}

FKoratActionTiltParameter ASSCharacter::GetActionTiltParameter(const FKoratActionDataList& InAction) const {
    return FKoratActionTiltParameter{};
}

FTransform ASSCharacter::GetActionTargetTransform() const {
    return FTransform{};
}

FSSCharacterActionTargetStruct ASSCharacter::GetActionTargetStruct() const {
    return FSSCharacterActionTargetStruct{};
}

bool ASSCharacter::GetActionTargetSocketTransform(const FName& Name, FTransform& OutTransform, bool bIgnoreActionTarget) const {
    return false;
}


EKoratActionSubCategoryType ASSCharacter::GetActionSubCategoryType(const FKoratActionDataList& InAction) const {
    return EKoratActionSubCategoryType::None;
}

EKoratActionRushDerivativeCategoryType ASSCharacter::GetActionRushDerivativeCategoryType(const FKoratActionDataList& InAction) const {
    return EKoratActionRushDerivativeCategoryType::Undefined;
}

EKoratActionRotationBaseDirection ASSCharacter::GetActionRotationBaseDirection(FKoratActionDataList InAction) const {
    return EKoratActionRotationBaseDirection::Front;
}

EKoratActionPenetrationMode ASSCharacter::GetActionPenetrationMode(FKoratActionDataList InAction) const {
    return EKoratActionPenetrationMode::None;
}

float ASSCharacter::GetActionMontageFirstLDEndTime() const {
    return 0.0f;
}

bool ASSCharacter::GetActionIsResetMove(const FKoratActionDataList& InAction) const {
    return false;
}

EKoratActionIdleType ASSCharacter::GetActionIdleType(const FKoratActionDataList& InAction) const {
    return EKoratActionIdleType::Normal;
}

EKoratActionCategoryType ASSCharacter::GetActionCategoryType(const FKoratActionDataList& InAction) const {
    return EKoratActionCategoryType::WaitOrMove;
}

EKoratActionBodyYawMode ASSCharacter::GetActionBodyYawMode(FKoratActionDataList InAction) const {
    return EKoratActionBodyYawMode::Primary;
}

EKoratActionBodyPitchMode ASSCharacter::GetActionBodyPitchMode(FKoratActionDataList InAction) const {
    return EKoratActionBodyPitchMode::Opponent;
}

FName ASSCharacter::GetActionAlNumId(const FKoratActionDataList& InAction) const {
    return NAME_None;
}

float ASSCharacter::GetAbsorptionEnergyGainRate() const {
    return 0.0f;
}

float ASSCharacter::GetAbsorptionBlastEnergyGainRate() const {
    return 0.0f;
}

FKoratCharacterDataAbilityFlag ASSCharacter::GetAbilityFlag() const {
    return FKoratCharacterDataAbilityFlag{};
}

void ASSCharacter::GaveDestructedDamage() {
}

void ASSCharacter::ForceUnlockCharacter() {
}

void ASSCharacter::ForceFinishEarlyHD() {
}

void ASSCharacter::FlushAnimEvent() {
}

void ASSCharacter::FinishDemonstration() {
}

bool ASSCharacter::FindOverrideAction(FKoratActionDataList InAction, FKoratActionDataList& OutAction) const {
    return false;
}

void ASSCharacter::ExplosionDrownOut() {
}

void ASSCharacter::ExecuteSpawnAndDestroyRequestCharacterActionSequenceActor() {
}


bool ASSCharacter::ExecNative() {
    return false;
}


void ASSCharacter::EndOpportunitySpeedImpact() {
}

void ASSCharacter::EndForcedSparkingDesired() {
}

void ASSCharacter::EndCheckBlastBoostOnCharacter() {
}

void ASSCharacter::EndBodyChange() {
}

void ASSCharacter::EndBlastCombo() {
}

void ASSCharacter::EndBlastBoostOnCharacter() {
}


bool ASSCharacter::EnableLookat() {
    return false;
}

void ASSCharacter::EnableHidden() {
}



bool ASSCharacter::EnableAbsorptionBullet() {
    return false;
}

void ASSCharacter::DisconnectActionCamera(const FKoratActionDataList& InAction) {
}

void ASSCharacter::DisableReconnectManualCameraAllSlot(bool InDisable) const {
}

void ASSCharacter::DisableReconnectManualCamera(ECameraGlobalSlot InSlot, bool InDisable) const {
}


bool ASSCharacter::DisableLookat() {
    return false;
}

void ASSCharacter::DisableHidden() {
}



void ASSCharacter::DestroySupporter() {
}

void ASSCharacter::DestroyRequestCharacterActionSequenceActor(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason) {
}

void ASSCharacter::DestroyCharacterActionSequenceActor(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason) {
}

void ASSCharacter::DestroyActionSequenceActorAll() {
}

void ASSCharacter::DemoSkipDeleteBullet() {
}

void ASSCharacter::DemoDeleteBullet() {
}


void ASSCharacter::DebugToSparkingMode() {
}

void ASSCharacter::DebugRunFormChange(int32 InIndex) {
}

bool ASSCharacter::DebugReplaceToNext(bool bCirculation) {
    return false;
}

bool ASSCharacter::DebugReplaceMember(int32 InIndex) {
    return false;
}

int32 ASSCharacter::DebugNowTeamPosition() const {
    return 0;
}

void ASSCharacter::DebugGetTeamMembers(int32& OutNowPlayer, TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter>& OutPlayerTeam, TArray<FKoratBattleTeamChangeMembers>& OutMembers) {
}



void ASSCharacter::DebugDrawDragonHomingTargetSphere(bool InIsCalledFromHomingUpdate) {
}

void ASSCharacter::DebugBlastImpactClear() {
}

void ASSCharacter::DebugBlastImpact() {
}

void ASSCharacter::DamageSP(const float InDamage) {
}

void ASSCharacter::DamageOverTimeSP(float InValue, float InTime) {
}

float ASSCharacter::DamageHP(const float InDamage, const bool bInCanKnockDown) {
    return 0.0f;
}

void ASSCharacter::CreateRequestAnimData(const FKoratActionDataList InAction, int32 InAnimIndex, const EKoratAnimType InAnimType, const EKoratPlayableAnimType InPlayableAnimType, bool bInSoonStart, bool bInTurn, bool bInCancelableOnly, FName InTurningSection, FKoratRequestAnimData& OutRequestAnimData, EKoratBranch& OutResult) {
}

FKoratCharacterActionSpawnSequenceParameter ASSCharacter::CreateCharacterActionSpawnSequenceParameter(FKoratActionDataList InAction) const {
    return FKoratCharacterActionSpawnSequenceParameter{};
}

void ASSCharacter::CountUpUseBlast(const EKoratBlastSlotType InSlot) {
}

void ASSCharacter::CountUpThrowFinish() {
}

void ASSCharacter::CountUpBlastHitDemo(const EKoratBlastSlotType InSlot) {
}

void ASSCharacter::CountTransitAction(const FKoratActionDataList& InAction) {
}

void ASSCharacter::CostumeDamageChangeReaction(const FSSCharacterCostumeDamageReactionParam& InReactionParam) {
}

void ASSCharacter::CopyChangedStates(TArray<EKoratBattleDirectingCharacterStateType>& OutChangedStates, TArray<EKoratBattleDirectingCharacterStateType>& OutPreChangedStates) const {
}

void ASSCharacter::CopyBattleDirectingBlastForbidAllow(FKoratCharacterForbidParameter& OutForbid, FKoratCharacterForbidParameter& OutAllow) const {
}

bool ASSCharacter::ContainsRunningAction(const TArray<FKoratActionDataList>& InActions) const {
    return false;
}

bool ASSCharacter::ContainsBlastAction(const FKoratActionDataList& InAction) const {
    return false;
}

void ASSCharacter::ConsumeSPCostZCounter() {
}

void ASSCharacter::ConsumeSPCostSuperCounter() {
}

void ASSCharacter::ConsumeSPCostSelfishness() {
}

void ASSCharacter::ConsumeSPByVanishingAssault(ESSVanishingAssaultType InType) {
}

void ASSCharacter::ConsumeSPByRushHighSpeedMoveRevenge() {
}

void ASSCharacter::ConsumeSPByRushHighSpeedMove() {
}

void ASSCharacter::ConsumeSPByDashAttack(float DeltaTime, ESSDashAttackType InType) {
}

void ASSCharacter::ConsumeSPByBlast(float InSpCost) {
}

void ASSCharacter::ConsumeSP(float InSpCost, bool bIsConsumeSparkingMode, bool bCanCrossOverFromSparkingToSp) {
}

void ASSCharacter::ConsumeSkillStockCostIfPrepared() {
}

void ASSCharacter::ConsumeOverTimeSP(float InValue, float InTime) {
}

void ASSCharacter::ConsumeBlastStockSuperZCounter(EKoratSuperZCounterTakeType InType) {
}

void ASSCharacter::ConsumeBlastStockRevengeCounter() {
}

void ASSCharacter::ConsumeBlastStock(int32 InBlastCost) {
}

void ASSCharacter::ClearSparkingGaugeValue() {
}

void ASSCharacter::ClearEquipmentAppealVoice() {
}

void ASSCharacter::ClearCheckBlastBoostOnCharacter() {
}

void ASSCharacter::ClearChangedStates() {
}

void ASSCharacter::ClearBuffWithTag(const FName& InTag) {
}

void ASSCharacter::ClearBoneFinalized() {
}

void ASSCharacter::ClearBattleDirectingFormChangeForbidHUD() {
}

void ASSCharacter::ClearBattleDirectingFormChangeForbid() {
}

bool ASSCharacter::CheckSphereSweepHitMap(const FVector InStartPos, const FVector InEndPos, const float InSize, FHitResult& OutResult) {
    return false;
}

bool ASSCharacter::CheckSPCosumable(float InSpCost, bool bIsConsumeSparkingMode, bool bCanCrossOverFromSparkingToSp) const {
    return false;
}

bool ASSCharacter::CheckSPCostZCounter() const {
    return false;
}

bool ASSCharacter::CheckSPCostSuperCounter() const {
    return false;
}

bool ASSCharacter::CheckSPCostSelfishness() const {
    return false;
}

bool ASSCharacter::CheckNoHitAttack(EKoratActionAttackType InCheckType) const {
    return false;
}

bool ASSCharacter::CheckLoopTiming() {
    return false;
}

bool ASSCharacter::CheckLoadedSupporter() {
    return false;
}

bool ASSCharacter::CheckInvincibleAgainstCombatives(ASSCharacter* FiredCharacter, const FKoratActionDataList& InAction, const FKoratCombativesKeyDataList& InAdditionalData) const {
    return false;
}

bool ASSCharacter::CheckHomingTargetIsActionTarget() const {
    return false;
}

bool ASSCharacter::CheckExistCombatives(const FKoratActionDataList& InAction, const FKoratReceivedDamageParameter& InReceivedDamageParameter) const {
    return false;
}

bool ASSCharacter::CheckExistChangedState(EKoratBattleDirectingCharacterStateType InStateType) const {
    return false;
}

void ASSCharacter::CheckDemonstrationFinish(FKoratActionDataList InNewAction, FKoratActionDataList InOldAction) {
}

bool ASSCharacter::CheckCanEverLookTarget() const {
    return false;
}

bool ASSCharacter::CheckBlastStockSuperZCounter(EKoratSuperZCounterTakeType InType) const {
    return false;
}

bool ASSCharacter::CheckBlastStockRevengeCounter() const {
    return false;
}

bool ASSCharacter::CheckBlastStockCosumable(int32 InBlastCost) const {
    return false;
}

bool ASSCharacter::CheckBlastDemoBranchSpDeriveType_Implementation(const FSSBlastDemoBranchCondition& InCondition) {
    return false;
}

bool ASSCharacter::CheckAimBodyBlendTimeZero() const {
    return false;
}

void ASSCharacter::ChangeToStunState() {
}

void ASSCharacter::ChangeTargetCharacter(FKoratActionDataList InAction) {
}

void ASSCharacter::ChangeRootCamera(float InLerpTime) const {
}


void ASSCharacter::ChangedSectionCharacterActionSequenceActor_Implementation(FKoratActionDataList InAction, const FName InSectionName, const float InPlayRatio) {
}

void ASSCharacter::ChangeCameraModeAction(const FKoratActionDataList& InAction) {
}

bool ASSCharacter::CanRecoverBlastGauge() const {
    return false;
}

void ASSCharacter::CancelForcedSparkingDesired() {
}

bool ASSCharacter::CanBlastConsecutiveShot(const EKoratBlastSlotType InSlot, const int32 InCurrentShotNum) const {
    return false;
}

bool ASSCharacter::CanAutoRecoverSPGauge() const {
    return false;
}

FTransform ASSCharacter::CalcTransformTarget(const FVector TargetLocation, FRotator TargetRotation, const FName SocketName, bool bIgnorePitchRotation) const {
    return FTransform{};
}

FRotator ASSCharacter::CalcRotatorTarget(FVector RotateTarget, bool bIgnorePitchRotation, FRotator AdditionalRotation) const {
    return FRotator{};
}

FVector ASSCharacter::CalcLocationTarget(const FVector TargetLocation, const FName SocketName) const {
    return FVector{};
}

bool ASSCharacter::CalcLocationAndRotationTargets(const FVector TargetLocation, const FName SocketName, bool bIgnorePitchRotation, FVector& OutLocation, FRotator& OutRotation) const {
    return false;
}


void ASSCharacter::BeginOpportunitySpeedImpact() {
}

void ASSCharacter::BeginForcedSparkingDesired(float InEstimatedDuration) {
}



void ASSCharacter::BattleKeyTimeSinceReleasedInSectionImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment) {
}

void ASSCharacter::BattleKeyTimeSinceReleasedInActionImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment) {
}

void ASSCharacter::BattleKeyTimeSinceReleasedImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment) {
}


void ASSCharacter::BattleKeyTimeSincePushOrInActionNotLessThanImpl(EKoratBattleKey InBattleKey, float InTime, ESSFlowConditionsJudgmentType& OutJudgment) {
}

void ASSCharacter::BattleKeyTimeSincePushInSectionImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment) {
}


void ASSCharacter::BattleKeyTimeSincePushInActionImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment) {
}


void ASSCharacter::BattleKeyTimeSincePushImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment) {
}


void ASSCharacter::BattleKeyReleaseImpl(EKoratBattleKey InBattleKey, ESSFlowConditionsJudgmentType& OutJudgment) {
}


void ASSCharacter::BattleKeyPushImpl(EKoratBattleKey InBattleKey, ESSFlowConditionsJudgmentType& OutJudgment) {
}


void ASSCharacter::BattleKeyHoldImpl(EKoratBattleKey InBattleKey, ESSFlowConditionsJudgmentType& OutJudgment) {
}


void ASSCharacter::AttackBlastImpact(float InPower) {
}

void ASSCharacter::AppendLoadingSupporter(TArray<FSSSupportingCharacterData>& InSupportCharacters) {
}

void ASSCharacter::AddPursuitCount(const EKoratPursuitType InPursuitType) {
}

void ASSCharacter::AdditionLimitBoost(float InLimitBoostCost) {
}



void ASSCharacter::AddDirectBuff(const FKoratActionDataList& InAction, bool& bOutIsDelayAction) {
}

void ASSCharacter::AddActionBuff(const FKoratActionDataList& InAction, int32 InBuffIndex, ASSCharacter* InWho) {
}

void ASSCharacter::AddAcceptedInputsType(const TArray<EBattlePracticeAcceptedInputsType> InTypes) {
}



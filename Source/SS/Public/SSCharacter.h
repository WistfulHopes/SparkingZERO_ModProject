#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "BulletDirectionIndexData.h"
#include "CharacterDamageEffectByEnergyBulletParamater.h"
#include "CharacterFootIK.h"
#include "CharacterHandIK.h"
#include "EBattleImpactPhase.h"
#include "EBattlePracticeAcceptedInputsType.h"
#include "EBattleSettleAttackType.h"
#include "ECameraGlobalSlot.h"
#include "ECameraZoomType.h"
#include "ECharacterBattleState.h"
#include "ECharacterWinType.h"
#include "EKoratActionAttackType.h"
#include "EKoratActionBodyPitchMode.h"
#include "EKoratActionBodyYawMode.h"
#include "EKoratActionCategoryType.h"
#include "EKoratActionConditionDown.h"
#include "EKoratActionIdleType.h"
#include "EKoratActionLookatOperationType.h"
#include "EKoratActionLookatPartFlags.h"
#include "EKoratActionPenetrationMode.h"
#include "EKoratActionRotationBaseDirection.h"
#include "EKoratActionRushDerivativeCategoryType.h"
#include "EKoratActionSubCategoryType.h"
#include "EKoratActionTiltTimingType.h"
#include "EKoratAnimType.h"
#include "EKoratBattleDirectingCharacterStateType.h"
#include "EKoratBattleKey.h"
#include "EKoratBlastImpactCameraType.h"
#include "EKoratBlastSlot.h"
#include "EKoratBlastSlotType.h"
#include "EKoratBranch.h"
#include "EKoratBuffNotifyType.h"
#include "EKoratChangeDirectionOfActionStartType.h"
#include "EKoratCharacterActionFinishReason.h"
#include "EKoratCharacterBlastBoostStatus.h"
#include "EKoratCharacterBlastImpactStatus.h"
#include "EKoratCharacterChangeMode.h"
#include "EKoratCharacterCrashImpactStatus.h"
#include "EKoratCharacterHUDStatusReq.h"
#include "EKoratCharacterInstanceType.h"
#include "EKoratCharacterInvincibleStatus.h"
#include "EKoratCharacterLocomotionDetailStatus.h"
#include "EKoratCharacterMovementTransition.h"
#include "EKoratCharacterPowerImpactStatus.h"
#include "EKoratCharacterSpeedImpactStatus.h"
#include "EKoratCharacterStencil.h"
#include "EKoratCharacterSuperHighSpeedMoveSideStatus.h"
#include "EKoratCharacterUnderWaterStatus.h"
#include "EKoratDirection.h"
#include "EKoratEachCharacterUnderWaterStatus.h"
#include "EKoratFreeTimelineType.h"
#include "EKoratGuardDirection.h"
#include "EKoratInequalitySignType.h"
#include "EKoratMapChangeStartTiming.h"
#include "EKoratMapChangeType.h"
#include "EKoratOffsetType.h"
#include "EKoratPlayableAnimType.h"
#include "EKoratPursuitType.h"
#include "EKoratReactionDirection.h"
#include "EKoratSafeSpawnAreaSize.h"
#include "EKoratSetCustomTimeDilationReason.h"
#include "EKoratSkillSlot.h"
#include "EKoratSuperZCounterTakeType.h"
#include "ESSBlastDemoBranchType.h"
#include "ESSBlastImpactUiResult.h"
#include "ESSCrashImpactUiResult.h"
#include "ESSDashAttackType.h"
#include "ESSFlowConditionsJudgmentType.h"
#include "ESSHUDChangeMode.h"
#include "ESSPowerGaugeResult.h"
#include "ESSSetActionCameraType.h"
#include "ESSSpeedImpactTimingUiJudge.h"
#include "ESSVanishingAssaultType.h"
#include "ESituationOfOpponentWhenAttackHit.h"
#include "EVictoryAppealWarpType.h"
#include "KoratActionDataList.h"
#include "KoratActionTiltParameter.h"
#include "KoratAddtiveReactionParameter.h"
#include "KoratArmorBreakLevelData.h"
#include "KoratArmorBreakLevelDataList.h"
#include "KoratArmorData.h"
#include "KoratArmorDataList.h"
#include "KoratArmorLevelDataList.h"
#include "KoratAttackHomingData.h"
#include "KoratAttackHomingDataList.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratBattleTeamChangeMembers.h"
#include "KoratBlastActionCategoryDataList.h"
#include "KoratBlastSkillTypeDataList.h"
#include "KoratBlowReactionBrakeParameter.h"
#include "KoratBuffId.h"
#include "KoratChangeCharacterActionDataList.h"
#include "KoratCharacterActionSpawnSequenceParameter.h"
#include "KoratCharacterCombativesParameter.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterCostumeIdData.h"
#include "KoratCharacterCounterCondition.h"
#include "KoratCharacterDataAbilityFlag.h"
#include "KoratCharacterDataArmorLevelParameter.h"
#include "KoratCharacterDataDashUpDownParameter.h"
#include "KoratCharacterDataDragonDashParameter.h"
#include "KoratCharacterDataDragonHomingParameter.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterDataMovementParameter.h"
#include "KoratCharacterDataRevengeDashParameter.h"
#include "KoratCharacterDataShortDashParameter.h"
#include "KoratCharacterDataStepParameter.h"
#include "KoratCharacterDataZBurstDashParameter.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratCharacterFigureDataList.h"
#include "KoratCharacterForbidParameter.h"
#include "KoratCharacterGroundMoveParameter.h"
#include "KoratCombativesKeyDataList.h"
#include "KoratDamage.h"
#include "KoratDamageReactionDataList.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratGroupIdDataList.h"
#include "KoratHitBackMovementData.h"
#include "KoratHitBackMovementDataList.h"
#include "KoratHitEffectAfterHitStop.h"
#include "KoratHitStopData.h"
#include "KoratHitStopDataList.h"
#include "KoratMapAttributeDataList.h"
#include "KoratMapDataList.h"
#include "KoratPlayerStartDataList.h"
#include "KoratRebindDescription.h"
#include "KoratReceivedDamageParameter.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratRequestAnimData.h"
#include "KoratSPGaugeVariation.h"
#include "KoratUnitBuffInfo.h"
#include "MaterialInstanceSetData.h"
#include "OnActivatedCharacterDelegate.h"
#include "OnCharacterBattleAttackHitDelegate.h"
#include "OnCharacterBattleDamageReceivedDelegate.h"
#include "OnCharacterBattleKnockDownDelegate.h"
#include "OnCharacterBattleRecoverReceivedDelegate.h"
#include "OnCharacterBattleSPDownDelegate.h"
#include "OnCharacterBattleSPUpDelegate.h"
#include "OnCharacterBattleSparkingDownDelegate.h"
#include "OnCharacterBattleStateChangedDelegate.h"
#include "OnCharacterBattleUpdateHpDelegate.h"
#include "OnCharacterBattleUpdateSkillStockDelegate.h"
#include "OnCharacterBattleUpdateSpDelegate.h"
#include "OnSearchStateChangedDelegate.h"
#include "OnSearchTypeChangedDelegate.h"
#include "OnSetActionCameraDelegate.h"
#include "OnSparkingBGMDelegate.h"
#include "SSActionCameraParameterData.h"
#include "SSAnimEventDispatcherInterface.h"
#include "SSBlastDemoBranchCondition.h"
#include "SSCharacterActionTargetStruct.h"
#include "SSCharacterBattleSearchScaleParameter.h"
#include "SSCharacterCostumeDamageReactionParam.h"
#include "SSCharacterFormChangeParam.h"
#include "SSCharacterGiantCharaCapsulePushingParam.h"
#include "SSCharacterInterface.h"
#include "SSCharacterSmashLevelGauge.h"
#include "SSEffectUpdateToonPointLightParam.h"
#include "SSLocomotionSection.h"
#include "SSMontageLevelSequence.h"
#include "SSPartsAnimationPtr.h"
#include "SSSimpleAimLookatLookatParameter.h"
#include "SSSupportingCharacterData.h"
#include "SSToonLightingInterface.h"
#include "Templates/SubclassOf.h"
#include "SSCharacter.generated.h"

class AActor;
class ACameraActor;
class AController;
class AKoratFreeTimelineActor;
class APawn;
class APlayerController;
class ASSBulletActor;
class ASSCharacter;
class ASSCharacterBuffEffectRenderer;
class ASSCutCameraDirector;
class ASSLevelSequenceActor;
class ASSNewBattleCameraActor;
class ASSNewBattleCameraDirector;
class ASSNotifyActionCameraTargetActor;
class ASSRootCameraDirector;
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
class UAnimSequenceBase;
class UAtomComponent;
class UCanvas;
class UCapsuleComponent;
class UForceFeedbackComponent;
class UKoratAsyncTransitionAscertain;
class UKoratAsyncTransitionBaseReaction;
class UKoratAsyncTransitionBlast;
class UKoratAsyncTransitionCannon;
class UKoratAsyncTransitionCannonAttack1;
class UKoratAsyncTransitionCannonAttack2;
class UKoratAsyncTransitionCannonAttack3;
class UKoratAsyncTransitionCannonSmash;
class UKoratAsyncTransitionCharge;
class UKoratAsyncTransitionDashAttack;
class UKoratAsyncTransitionDemo;
class UKoratAsyncTransitionDragonDash;
class UKoratAsyncTransitionDragonDashAttack;
class UKoratAsyncTransitionDragonHoming;
class UKoratAsyncTransitionDragonSmash;
class UKoratAsyncTransitionFastAvoidance;
class UKoratAsyncTransitionGrandSlash;
class UKoratAsyncTransitionGuard;
class UKoratAsyncTransitionGuardClear;
class UKoratAsyncTransitionHeavyCrush1;
class UKoratAsyncTransitionHeavyCrush2;
class UKoratAsyncTransitionHeavyCrush3;
class UKoratAsyncTransitionHeavyFinish;
class UKoratAsyncTransitionKidan;
class UKoratAsyncTransitionLiftStrike;
class UKoratAsyncTransitionLocomotion;
class UKoratAsyncTransitionMidAirKick;
class UKoratAsyncTransitionNoContinuation;
class UKoratAsyncTransitionParry;
class UKoratAsyncTransitionParrySmash;
class UKoratAsyncTransitionPlayAction;
class UKoratAsyncTransitionRevengeCounter;
class UKoratAsyncTransitionRollingHammer;
class UKoratAsyncTransitionRollingHurricane1;
class UKoratAsyncTransitionRollingHurricane2;
class UKoratAsyncTransitionRollingPress1;
class UKoratAsyncTransitionRollingPress2;
class UKoratAsyncTransitionRush;
class UKoratAsyncTransitionRushHighSpeedMove;
class UKoratAsyncTransitionShortDash;
class UKoratAsyncTransitionStepAvoidance;
class UKoratAsyncTransitionStepIn;
class UKoratAsyncTransitionSuperZCounterCatch;
class UKoratAsyncTransitionSuperZCounterPosture;
class UKoratAsyncTransitionSuperZCounterShakeOff;
class UKoratAsyncTransitionSuperZCounterSmash;
class UKoratAsyncTransitionTurn;
class UKoratAsyncTransitionUltimateBlast;
class UKoratAsyncTransitionVanishingAssault;
class UKoratAsyncTransitionVanishingAttack;
class UKoratAsyncTransitionWaitMontageEnd;
class UKoratCharacterAuraComponent;
class UKoratCharacterLocomotionComponent;
class UKoratCharacterMontageComponent;
class UKoratCharacterTransitionFlowComponent;
class UKoratFacialControlRig;
class UKoratSelectEffectColorComponent;
class ULevelSequence;
class ULipsAtomAnalyzer;
class UObject;
class USSActionCameraDataAsset;
class USSAiCharacterStatusComponent;
class USSAnimEventDispatcher;
class USSCharacterAccessoryManager;
class USSCharacterActionEffect;
class USSCharacterActionManagerForLevelSequence;
class USSCharacterActionTargetComponent;
class USSCharacterAnnounce;
class USSCharacterAntiBulletComponent;
class USSCharacterArmor;
class USSCharacterAura;
class USSCharacterBattleAssistComponent;
class USSCharacterBlastBulletComponent;
class USSCharacterBlastForte;
class USSCharacterBlastSkill;
class USSCharacterBlastUltimate;
class USSCharacterBrkAttribute;
class USSCharacterBuff;
class USSCharacterBuffFormManager;
class USSCharacterBulletManager;
class USSCharacterCamera;
class USSCharacterCharge;
class USSCharacterCombatives;
class USSCharacterCombinationAnimation;
class USSCharacterDashUpDown;
class USSCharacterDitherComponent;
class USSCharacterDragonDash;
class USSCharacterDragonHoming;
class USSCharacterEffectColorData;
class USSCharacterEffectFigureTransform;
class USSCharacterEffectHighSpeedMove;
class USSCharacterEnergyBullet;
class USSCharacterFormChange;
class USSCharacterInverseKinematicsAnimInstance;
class USSCharacterItemEquipment;
class USSCharacterLatentHelper;
class USSCharacterMapAttribute;
class USSCharacterMovement;
class USSCharacterNumeric;
class USSCharacterNumericManager;
class USSCharacterOutline;
class USSCharacterPostUpdateComponent;
class USSCharacterReplaceAnimation;
class USSCharacterRevengeDash;
class USSCharacterScreen;
class USSCharacterSearch;
class USSCharacterSimpleAimInstance;
class USSCharacterSocketComponent;
class USSCharacterStencilComponent;
class USSCharacterStencilParams;
class USSCharacterSteps;
class USSCharacterTrail;
class USSCharacterZBurstDash;
class USSLevelSequencePlayer;
class USSRandom;
class USSVelocityLineEffectComponent;
class UTexture;

UCLASS(Blueprintable, MinimalAPI)
class ASSCharacter : public ACharacter, public ISSCharacterInterface, public ISSAnimEventDispatcherInterface, public ISSToonLightingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* BulletRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* LocomotionRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* VoiceRandom;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDemo* AsyncTransitionDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionPlayAction* AsyncTransitionPlayAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionTurn* AsyncTransitionTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionWaitMontageEnd* AsyncTransitionWaitMontageEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionNoContinuation* AsyncTransitionNoContinuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRush* AsyncTransitionRush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRushHighSpeedMove* AsyncTransitionRushHighSpeedMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionFastAvoidance* AsyncTransitionFastAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionHeavyFinish* AsyncTransitionHeavyFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionHeavyCrush1* AsyncTransitionHeavyCrush1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionHeavyCrush2* AsyncTransitionHeavyCrush2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionHeavyCrush3* AsyncTransitionHeavyCrush3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionMidAirKick* AsyncTransitionMidAirKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannon* AsyncTransitionCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannonSmash* AsyncTransitionCannonSmash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannonAttack1* AsyncTransitionCannonAttack1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannonAttack2* AsyncTransitionCannonAttack2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCannonAttack3* AsyncTransitionCannonAttack3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingHammer* AsyncTransitionRollingHammer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingHurricane1* AsyncTransitionRollingHurricane1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingHurricane2* AsyncTransitionRollingHurricane2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingPress1* AsyncTransitionRollingPress1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRollingPress2* AsyncTransitionRollingPress2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionLiftStrike* AsyncTransitionLiftStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionGrandSlash* AsyncTransitionGrandSlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionKidan* AsyncTransitionKidan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionCharge* AsyncTransitionCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionGuard* AsyncTransitionGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionGuardClear* AsyncTransitionGuardClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionBlast* AsyncTransitionBlast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionBaseReaction* AsyncTransitionBaseReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionRevengeCounter* AsyncTransitionRevengeCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionAscertain* AsyncTransitionAscertain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionParry* AsyncTransitionParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionParrySmash* AsyncTransitionParrySmash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionSuperZCounterPosture* AsyncTransitionSuperZCounterPosture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionSuperZCounterCatch* AsyncTransitionSuperZCounterCatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionSuperZCounterShakeOff* AsyncTransitionSuperZCounterShakeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionSuperZCounterSmash* AsyncTransitionSuperZCounterSmash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionUltimateBlast* AsyncTransitionUltimateBlast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDragonDashAttack* AsyncTransitionDragonDashAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDashAttack* AsyncTransitionDashAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDragonSmash* AsyncTransitionDragonSmash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionVanishingAssault* AsyncTransitionVanishingAssault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionVanishingAttack* AsyncTransitionVanishingAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionLocomotion* AsyncTransitionLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDragonDash* AsyncTransitionDragonDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionDragonHoming* AsyncTransitionDragonHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionShortDash* AsyncTransitionShortDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionStepIn* AsyncTransitionStepIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAsyncTransitionStepAvoidance* AsyncTransitionStepAvoidance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleStateChanged OnCharacterBattleStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleDamageReceived OnCharacterBattleDamageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleAttackHit OnCharacterBattleAttackHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleDamageReceived OnCharacterBattleGuardBreak;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleRecoverReceived OnCharacterBattleRecoverReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleUpdateHp OnCharacterBattleUpdateHp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleUpdateSp OnCharacterBattleUpdateSp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleUpdateSkillStock OnCharacterBattleUpdateSkillStock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleKnockDown OnCharacterBattleKnockDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleSPDown OnCharacterBattleSPDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleSPUp OnCharacterBattleSPUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBattleSparkingDown OnCharacterBattleSparkingDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetActionCamera OnSetActionCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSearchStateChanged OnSearchStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSearchTypeChanged OnSearchTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSparkingBGM OnSparkingBGM;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivatedCharacter OnActivatedCharacter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LoadCharacterCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSupporterUnlockBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaitCheckDemonstrationFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList WaitCheckDemonstrationFinishNewAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList WaitCheckDemonstrationFinishOldAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEarlyFinishHD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* InvincibleLevelSequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterInstanceType InstanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratCharacterStencil Stencil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList PlayerStartKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList EventDemoPlayStartKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform DebugSavedTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReuseBattleCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSNewBattleCameraDirector* CameraDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraDirector* CutCameraDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSRootCameraDirector* RootCameraDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterCamera* CameraParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* ViewingController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterReplaceAnimation* ReplaceAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterCombinationAnimation* CombinationAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UAnimInstance>> AnimationSubInstanceClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AnimationSubInstanceTagNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterNumeric* Numeric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterNumericManager* NumericManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterAura* Aura;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterOutline* Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterCharge* Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterFormChange* FormChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterMovement* Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterSteps* steps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterDragonDash* DragonDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterDragonHoming* DragonHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterZBurstDash* ZBurstDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterRevengeDash* RevengeDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterEnergyBullet* EnergyBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterCombatives* Combatives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterArmor* Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterBlastForte* BlastForte;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterBlastSkill* BlastSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterBlastUltimate* BlastUltimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratBlastActionCategoryDataList> BlastActionCategoryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EKoratBlastSlotType, bool> BlastIsUnblockable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* FaceChipTextureP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* FaceChipTextureP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSCharacterFormChangeParam> FormChangeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSCharacterFormChangeParam> Fusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSCharacterFormChangeParam> Potara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterActionEffect* ActionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterEffectColorData* EffectColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterEffectFigureTransform* FigureTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterEffectHighSpeedMove* EffectHighSpeedMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterTrail* Trail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterAnnounce* Announce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterScreen* Screen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterMapAttribute* MapAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterBrkAttribute* BrkAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterDashUpDown* DashUpDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterSearch* SearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratActionLookatOperationType LookatOperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratActionLookatPartFlags LookatPartFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSSimpleAimLookatLookatParameter LookatParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterBuff* Buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterItemEquipment* ItemEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterAccessoryManager* AccessoryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSCharacterDitherComponent> SSCharacterDitherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterStencilParams* OutlineStencilParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterStencilParams* SiletStencilParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSCharacterStencilComponent> CharacterStencilComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsulePushingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCharacterGiantCharaCapsulePushingParam> GiantCharaCapsulePushingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_06;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_07;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_08;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_09;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_11;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_12;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_13;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_14;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_15;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_16;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_17;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_18;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GiantCharaCapsulePushingComponents_19;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UKoratCharacterLocomotionComponent> KoratCharacterLocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterActionTargetComponent* CharacterActionTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterSocketComponent* CharacterSocketComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterPostUpdateComponent* CharacterPostUpdateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UForceFeedbackComponent* ForceFeedbackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSCharacterBattleAssistComponent> CharacterBattleAssistComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UKoratCharacterTransitionFlowComponent> KoratCharacterTransitionFlowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterCostumeDataList CostumeDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CostumeModelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSetupCharacterDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratCharacterMontageComponent* MontageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMaterialInstanceSetData> MaterialInstanceSetDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterFootIK CharacterFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterInverseKinematicsAnimInstance* AnimInstFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterHandIK CharacterHandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterSimpleAimInstance* AnimInstLookat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList BodyChengedCharacterDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSCharacterAntiBulletComponent> AntiBulletComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHiddenInGameCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    bool bHiddenInGameSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHiddenInGameBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHiddenInGameDither;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHiddenInGameEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHiddenInGameProgram;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHiddenInGameDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHiddenInGameDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopDeprecated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopVanishing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopDemonstrationHalt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopHalt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopMapChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopKnockdownTaketurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopTutorialBattleFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopMapDataSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTickStopBodyChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStopTickCharacterEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHiddenCharacterEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCameraPlayerSafeLocaionUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CameraPlayerSafeLocaionLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CameraPlayerSafeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraDragonHomingElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraDragonHomingElapsedTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraDragonHomingFarScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraDragonHomingNearScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> CurrentRunningActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratCharacterLocomotionDetailStatus CurrentLocomotionDetailStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList PreAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList DeleteEffectActionAtDestroySequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratActionCategoryType PreActionCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratActionSubCategoryType PreActionSubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* WaterMoveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterBattleState BattleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterBattleState PreBattleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreNumbState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreSunFistState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSSupportingCharacterData> LoadingSupporters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSCharacter*> Supporters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableDamageCollisionSetVanishingCollisionEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableDamageCollisionOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterInvincibleStatus InvincibleStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargeLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeDamageLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitingCostumeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeScratchLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterCostumeDamageReactionParam CostumeDamageReactionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCharacterDamageEffectByEnergyBulletParamater> ChangeDamageCostumeTimingDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSetCustomTimeDilationReason SetCustomTimeDilationReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SPGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAutoRecoverSpGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSPGaugeVariation SPGaugeVariationOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitBoostGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SparkingGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStopTimeConsumeSparkingGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSparkingModeEndReserve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcedSparkingDesired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcedSparkingChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcedSparkingElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRecoverBlastGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlastCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlastStockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextSkillGaugeGainHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrepareConsumeSkillStockCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSkillSlot PrepareConsumeSkillSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSPGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeforeBoostCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoostCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoostThresholdUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInpactTrig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InpactGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactPumpTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StyleChangeWaitSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeWaitSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StyleChangeWaitSecondMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeWaitSecondMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecideChangeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteChangeWaitSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteChangeWaitSecondMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStyleChangeOperationFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterChangeMode CharacterStyleChangeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterStyleChangeRequestNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterChangeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceChangeByBattleDirectingRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterChangeMode SafeSpawnCharacterChangeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterHUDStatusReq CharacterHUDStatusReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterHUDTickEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDemoStopHUDDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDemoStopCharacterDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDemoHideBullets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* TargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName GiantCharaTargetHomingBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleDirectingCharacterStateType> ChangedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleDirectingCharacterStateType> PreChangedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleDirectingCharacterStateType> NoClearChangedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratActionAttackType LastDamageAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList LastDamageTargetAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratActionAttackType SuperAscertainSuccessAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAnimEventDispatcher* AnimEventDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratPlayableAnimType PlayableAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bExplosionHit_CamUnSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECameraZoomType ExplosionHitLevel_CamUnSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ExplosionHitAction_CamUnSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ExplosionHitElapsedTime_CamUnSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ExplosionHitTimeout_CamUnSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ComboDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageReactionRemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackHitAfterAttackAct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDuringDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SmashLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockSmashLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpportunitySpeedImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterCounterCondition CounterCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratReactionDirection ReactionDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratReactionDirection RequestReactionDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDirection AttackDiretion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDirection RequestAttackDiretion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratGuardDirection GuardDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratGuardDirection InterruptGuardDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PursuitCountOfDragonHoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PursuitCountOfVanishingAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PursuitCountOfLightningAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKnockDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanKnockDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerfectAvoidanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWillStunWhenEndSparking;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushingCollisionAutoAdjust;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlyingAutoLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFluffyMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProhibitionFluffyMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterActionTargetStruct ActionTargetSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratCharacterAuraComponent* KoratCharacterAuraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSVelocityLineEffectComponent* VelocityLineEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform ToonDirectionalLightOverrideTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ToonDirectionalLightBaseSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutlineEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOutlineFillEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float OutlineFillRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail CurrentEffectResourceDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawZSearchStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoneTransformFinalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoneTransformFinalizedEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSLevelSequencePlayer> EffectReplaceSettingByOwnerSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail tempEffectResourceDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratSelectEffectColorComponent* KoratSelectEffectColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterActionManagerForLevelSequence* SSCharacterActionManagerForLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FBulletDirectionIndexData> BulletDirectionIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckCameraModeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList CameraModeSetAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraModeChangeDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnergyBulletNeedsChaosInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetKeepViewSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentToTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepAutoSearchDistanceSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraSearchKeepSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraLostKeepSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterBulletManager* BulletManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CharacterBulletID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterBuffFormManager* BuffFormManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentBlastChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratCharacterBlastBoostStatus BlastBoostStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBlastBoostStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratBlastSlotType BlastBoostSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bBlastImpactBulletOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlastImpactBulletRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector BlastImpactBulletVectorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform BlastImpactBulletTransformTipAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform BlastImpactBulletTransformRootAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform BlastImpactBulletTransformTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform BlastImpactBulletTransformRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DelayDemoDeleteBlastBulletCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> EmoteResourceIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList OverrideVoiceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideVoiceTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawAttackCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawAttackCollisionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawHitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawHitPositionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawHitArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawHitAreaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugArmorAddtiveReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugArmorAddtiveReactionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugNoDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugNoDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugNoSkillConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTickIfViewportsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugNoStyleChangeWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugNoLockOnCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrawEmbedHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterWinType WinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRingOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratActionAttackType, float> TargetHpAtStartOfAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectionElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActDragonDashElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayInvincibleEffectCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CounterDamageScale;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBlastImpact;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionMontageLDFirstEndRestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionMontageLDFirstEndRequiredTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentActionsCanDrownOutForExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGuardCancellable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmashCombativeCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmashCombativeTargetIsActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSCharacterSmashLevelGauge SmashLevelGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImpactBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterPowerImpactStatus PowerImpactStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterPowerImpactStatus PowerImpactStatusUI_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterPowerImpactStatus PowerImpactStatusUI_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerImpactWinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactJudgeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPowerGaugeResult PowerImpactResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenaltyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerImpactPenaltyLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrashImpactWinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrashImpactAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrashImpactInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrashImpactSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactJudgeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrashImpactInputStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrashImpactInputFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCrashImpactUiResult CrashImpactResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactInputWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrashImpactUIIsIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrashImpactUIClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactBoostTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrashImpactUIRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactJudgeValueReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashImpactEnemyJudgeValueReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterCrashImpactStatus CrashImpactStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactInputCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactNextProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactJustTimingLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterSpeedImpactStatus SpeedImpactStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterSpeedImpactStatus SpeedImpactStatusUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpeedImpactStartedUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactJustLengthUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpeedImpactJustTimingUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactProgressCurveUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSSpeedImpactTimingUiJudge SpeedImpactInJudgeUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JustSpeedImpactInputUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactTimingDecide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpeedImpactisDecided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactJustTimingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpeedImpactTimingisStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactTimingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpeedImpactRapidisStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactRapidInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactNextProgressRapid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactJudgeTimingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpeedImpactUIFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactOkTimingEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactJustTimingEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactOneBlowJudgeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedImpactRapidComboJudgeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpeedImpactForcedWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactValueTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactAttackPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlastImpactResultFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactMeterMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSBlastImpactUiResult BlastImpactResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterBlastImpactStatus BlastImpactStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterBlastImpactStatus BlastImpactStatusUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleImpactPhase BattleImpactPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleImpactDamageScalable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleImpactDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeCameraTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeCameraPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeCameraPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchSphereTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacterBuffEffectRenderer* BuffEffectRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBodyChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SuperHighSpeedMoveStartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SuperHighSpeedMoveEndTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterSuperHighSpeedMoveSideStatus SuperHighSpeedMoveSideStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuperHighSpeedMoveSideStatusClearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsDisableLipSyncFromSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransientAttackPowerMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReduceZSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReduceZSearchEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshZSearchEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterBattleSearchScaleParameter SearchScaleParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterUnderWaterStatus UnderWaterStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratEachCharacterUnderWaterStatus PrevFrameEachUnderWaterStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderWaterDepth;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterCostumeIdData CharacterCostumeIdData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAtomComponent> AtomExPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULipsAtomAnalyzer* LipsAnalyzer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULipsAtomAnalyzer* ReferenceLipsAnalyzer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratFacialControlRig* FacialControlRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFinishDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsChangeHiddenCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ChangeAction_OT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ChangeAction_STD;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AKoratFreeTimelineActor>> FreeTimelines;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* SpawnedLevelSequenceActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEffectUpdateToonPointLightParam ReadOnlyLightContext;
    
public:
    ASSCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VanishingTransport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VanishingPlayEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VanishingFinish();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSearchScaleInAction(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRushDerivedUsedHistory(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInputKoratBattleKey();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGiantCharaTargetTransformNearestTargetTestOverride(bool bInForceSearchNearParts);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGiantCharaTargetTransformNearestTarget(bool bInForceSearchNearParts);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFreeCameraTarget(const FVector2D InputVector);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentBlastChargeTime(EKoratBlastSlotType InSlot, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCameraMode();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAutoRecoverSpGaugeAndSkillStock(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable)
    void UnsetChangedStates(EKoratBattleDirectingCharacterStateType InStateType);
    
    UFUNCTION(BlueprintCallable)
    void UnForceFinishEarlyHD();
    
    UFUNCTION(BlueprintCallable)
    void TurnBulletBlastHTSection();
    
    UFUNCTION(BlueprintCallable)
    void TurnBulletBlastCGSection();
    
    UFUNCTION(BlueprintCallable)
    void Turn(float InTurnAngle);
    
    UFUNCTION(BlueprintCallable)
    bool TryPlayUnbreakableThrowWarning();
    
    UFUNCTION(BlueprintCallable)
    bool TryPlayUnblockableWarning();
    
    UFUNCTION(BlueprintCallable)
    bool TryPlayHyperSmashSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float TransitActionFromSection(FKoratActionDataList InAction, FName InJumpSectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float TransitAction(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TraceNearPhysicalAssetsCollitionByBox(const FVector InStart, const FVector InEnd, const FVector InHalfSize, const FRotator InOrientation, const AActor* InGaveDamageActor, const AActor* InReceivedDamageActor, const AActor* InRotateActor, FTransform& OutHitTransform, FName& OutHitBoneName, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TraceNearPhysicalAssetsCollition(const FVector InStart, const FVector InEnd, const float InRadius, const AActor* InGaveDamageActor, const AActor* InReceivedDamageActor, const AActor* InRotateActor, FTransform& OutHitTransform, FName& OutHitBoneName, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, const ETraceTypeQuery TraceType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuccessRepelAction();
    
    UFUNCTION(BlueprintCallable)
    void StopTurning();
    
    UFUNCTION(BlueprintCallable)
    void StopTickForVanishing();
    
    UFUNCTION(BlueprintCallable)
    void StopTickForTutorialBattleFinish();
    
    UFUNCTION(BlueprintCallable)
    void StopTickForMapDataSpawn();
    
    UFUNCTION(BlueprintCallable)
    void StopTickForMapChange(bool bInDelayStopSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void StopTickForKnockdownTaketurns(bool bInDelayStopSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void StopTickForHalt(bool bInDelayStopSkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void StopTickForGameState();
    
    UFUNCTION(BlueprintCallable)
    void StopTickForDemonstrationHalt();
    
    UFUNCTION(BlueprintCallable)
    void StopSPGaugeAutoRecovery();
    
    UFUNCTION(BlueprintCallable)
    void StopSequenceSoundPlayerAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPlayAction();
    
    UFUNCTION(BlueprintCallable)
    void StopInvincibleStatusManagement(const EKoratCharacterInvincibleStatus InInvincibleStatus);
    
    UFUNCTION(BlueprintCallable)
    void StopInvincibleEffect();
    
    UFUNCTION(BlueprintCallable)
    void StopBlastGaugeRecovery();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAllAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopActionByChangeCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartVanishingTest(const float InDisappearTime, const float InAppearTime, const FVector InAppearPosition, const FRotator InAppearDirection, const FKoratActionDataList InAppearAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartVanishing(const float InDisappearTime, const float InAppearTime, const FVector InAppearPosition, const FRotator InAppearDirection, const FKoratActionDataList InAppearAction, const bool InTraining, const bool InDramaticWarp);
    
    UFUNCTION(BlueprintCallable)
    void StartSPGaugeAutoRecovery();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartResetVanishing(const float InDisappearTime, const float InAppearTime, const FVector InAppearPosition, const FRotator InAppearDirection, const FKoratActionDataList InAppearAction);
    
    UFUNCTION(BlueprintCallable)
    void StartMapChange(const EKoratMapChangeType InMapChangeType, const EKoratMapChangeStartTiming InStartTiming, const float InStartDelayTime);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadSupporter(const FKoratActionDataList InAction, const ESSBlastDemoBranchType InBranchType);
    
    UFUNCTION(BlueprintCallable)
    void StartInvincibleStatusManagement(const EKoratCharacterInvincibleStatus InInvincibleStatus);
    
    UFUNCTION(BlueprintCallable)
    void StartCheckBlastBoostOnCharacter();
    
    UFUNCTION(BlueprintCallable)
    void StartChangeTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    void StartBlastGaugeRecovery();
    
    UFUNCTION(BlueprintCallable)
    void StartBlastCombo();
    
    UFUNCTION(BlueprintCallable)
    void SpawnSupporter();
    
    UFUNCTION(BlueprintCallable)
    void SpawnCharacterActionSequenceActor(FKoratCharacterActionSpawnSequenceParameter InSpawnParameter);
    
    UFUNCTION(BlueprintCallable)
    void ShowMapChangeNewLoadedMap();
    
    UFUNCTION(BlueprintCallable)
    void ShowDuringMapChange();
    
    UFUNCTION(BlueprintCallable)
    void SetWinType(const ECharacterWinType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetWaitingCostumeDamage(const int32 InWaitingCostumeDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityCharacterActionSequenceActor(FKoratActionDataList InAction, bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVanishingCollisionEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTickOrderDependsOnPlayerController();
    
    UFUNCTION(BlueprintCallable)
    void SetupCharacterDataList();
    
    UFUNCTION(BlueprintCallable)
    void SetupBlastDemoBranchType(const EKoratBlastSlotType InBlastSlotType);
    
    UFUNCTION(BlueprintCallable)
    void SetThereHyperArmor(const bool bInThereHyperArmor);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetPawn(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetSupporters(const TArray<ASSCharacter*>& InSupporters);
    
    UFUNCTION(BlueprintCallable)
    void SetSuperHighSpeedMoveTransform(const FTransform& InStartTransform, const FTransform& InEndTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetSuperHighSpeedMoveSideStatus(const EKoratCharacterSuperHighSpeedMoveSideStatus Status, float TimeToLive);
    
    UFUNCTION(BlueprintCallable)
    void SetSuperAscertainSuccessAttackType(EKoratActionAttackType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetStyleChangeWaitSecondMax(float InStyleChangeWaitSecondMax);
    
    UFUNCTION(BlueprintCallable)
    void SetStyleChangeWaitSecond(float InStyleChangeWaitSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetStyleChangeOperationFlg(bool InStyleChangeOperationFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetSPGaugeValue(const float InSPGaugeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSparkingTimeConsumeStop(const bool bInIsStop);
    
    UFUNCTION(BlueprintCallable)
    void SetSparkingModeEndReserveOn();
    
    UFUNCTION(BlueprintCallable)
    void SetSparkingModeEndReserveOff();
    
    UFUNCTION(BlueprintCallable)
    void SetSparkingModeEndReserve(const bool bInEndReserve);
    
    UFUNCTION(BlueprintCallable)
    void SetSparkingGaugeValue(float InSparkingGaugeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSparkingGaugeMax();
    
    UFUNCTION(BlueprintCallable)
    void SetSafeSpawnAreaSize(EKoratSafeSpawnAreaSize InAreaSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPushingCollisionEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetProhibitionFluffyMove(bool bInProhibit);
    
    UFUNCTION(BlueprintCallable)
    void SetProgramHiddenInGame(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetPreAction(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerImpactWaistMovement(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStartKey(const FKoratPlayerStartDataList& InStartKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayableAnimType(const EKoratPlayableAnimType InPlayableAnimType);
    
    UFUNCTION(BlueprintCallable)
    void SetP2FaceChipTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetP1FaceChipTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAppealVoice(const FText& InTextID);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineFillRate(const float InOutlineFullRate);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineFillEnable(const bool bInOutlineFillFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineEnable(const bool InbNewOutlineEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineColorType(const FKoratCharacterEffectColorSetDataTypeDataList& InColorType);
    
    UFUNCTION(BlueprintCallable)
    void SetNoHitMonitoringAction(const EKoratActionAttackType InAttackType);
    
    UFUNCTION(BlueprintCallable)
    void SetNoHitAttack(EKoratActionAttackType InAttackType, bool InWithRemoveSurveillance);
    
    UFUNCTION(BlueprintCallable)
    void SetNextSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionNameToChange, const FName InNextSectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetNextSection(const FName InNextSectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementMode(EMovementMode InMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void SetLookatPartFlags(const EKoratActionLookatPartFlags& InPartFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetLookatOverrideBlendTime(const bool bInEnableOverride, const float InOverrideBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLookatOperationType(const EKoratActionLookatOperationType& InOperationType);
    
    UFUNCTION(BlueprintCallable)
    bool SetLookatLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetLockOnCharacter(bool bLockon);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkOpponentPlayCharacterActionMontage(FKoratActionDataList InAction, FKoratActionDataList InLinkOpponentAction);
    
    UFUNCTION(BlueprintCallable)
    void SetLimitBoostGaugeValue(const float InLimitBoostGaugeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLDEndLength(float InLength);
    
    UFUNCTION(BlueprintCallable)
    void SetLastDamageAttackType(EKoratActionAttackType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetKoratHitBackMovementData(FKoratHitBackMovementData& InHitBackMovement, FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetKoratCharacterMontageComponent(UKoratCharacterMontageComponent* InMontageComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpSectionlayCharacterActionMontage(FKoratActionDataList InAction, FName InJumpSectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSkipUpdateInputInDramaticBattle(bool InIsSkip);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBodyChanged(bool NewIsBodyChanged);
    
    UFUNCTION(BlueprintCallable)
    void SetInvincible(const EKoratCharacterInvincibleStatus InInvincibleStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetInpactTrig(bool InFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetInpactGaugeValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetImpactPumpTimer(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetHPGaugeValue(const float InHPGaugeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGuardDirection(EKoratGuardDirection InGuardDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetGuardCancellableState(bool InCancellable);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipmentAppealVoice(FKoratActionDataList InCheckAction);
    
    UFUNCTION(BlueprintCallable)
    void SetEmoteMapping(TMap<int32, int32> InEmoteMapping);
    
    UFUNCTION(BlueprintCallable)
    void SetEmoteChangeWaitSecond(float InEmoteChangeWaitSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectColorBranch(const FKoratCharacterEffectColorSetDataTypeDataList& InColorType);
    
    UFUNCTION(BlueprintCallable)
    void SetEarlyFinishHD(bool InFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawEmbedHitData(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDitherProgrammableStart(float InStartDitherRatio, float InEndDitherRatio, float InDitherTime, bool InDitherKeep);
    
    UFUNCTION(BlueprintCallable)
    void SetDitherDefaultRatio(const float InDitherRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetDither(const float InDitherRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetDemonstrationState(bool bHudDisplay, bool bTargetHudDisplay, bool bTargetPawnDisplay);
    
    UFUNCTION(BlueprintCallable)
    void SetDecideChangeCharacter(bool InFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSaveTransform(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugResetTransform(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugNoStyleChangeWait(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugNoSkillConsume(const bool bIsNoSkillConsume);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugNoLockOnCharacter(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugNoDead(const bool bIsNoDead);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugNoDamage(const bool bIsNoDamage);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void SetDebugEachUnderWaterStatus(bool InIsEnable, EKoratEachCharacterUnderWaterStatus InNewStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetDebugArmorDetail(const FKoratArmorDataList InArmor, int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    bool SetDebugArmor(const int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageCollisionEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCutCameraDirector(ASSCutCameraDirector* InCameraDirector);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomTimeDilationInner(const float InTimeDilation, const EKoratSetCustomTimeDilationReason InReason);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomTimeDilationExternal();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomTimeDilation(const float InTimeDilation, const EKoratSetCustomTimeDilationReason InReason);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterConditionInvincible(bool InInvincible);
    
    UFUNCTION(BlueprintCallable)
    void SetCostumeScratchLv(const int32 InCostumeScratchLv);
    
    UFUNCTION(BlueprintCallable)
    void SetCostumeDamageLv(const int32 InCostumeDamageLv);
    
    UFUNCTION(BlueprintCallable)
    void SetCostumeDamageChangeReactionParam(const FSSCharacterCostumeDamageReactionParam& InReactionParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCombo(const bool bInCombo, const int32 InComboNum);
    
    UFUNCTION(BlueprintCallable)
    void SetChargeLv(const int32 InChargeLv);
    
    UFUNCTION(BlueprintCallable)
    void SetCharge(bool bInCharge);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterStyleChangeRequest(EKoratCharacterChangeMode InMode, int32 InChangeNo);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterStencil(bool bStencilValid, int32 StencilValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterHUDTickEnable(bool bInTickEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterHUDStatusReq(EKoratCharacterHUDStatusReq InReq);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterHUDChangeModeReq(ESSHUDChangeMode InHUDChangeMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCosutumeModelID(const FName InCosutumeModelID);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCosutumeDataList(const FKoratCharacterCostumeDataList& InCosutumeDataList);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCollisionEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterChangeRequest(int32 InChangeCharactorNo);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeWaitSecondMax(float InChangeWaitSecondMax);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeWaitSecond(float InChangeWaitSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetChangedStates(EKoratBattleDirectingCharacterStateType InStateType);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraModeChangeDisable(const bool bInDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBranchSection(const FName& InSection);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastStockCount(const int32 InBlastStockCount);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastImpactBulletTransformTipAdjust(FTransform trans);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastImpactBulletTransformTip(FTransform trans);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastImpactBulletTransformRootAdjust(FTransform trans);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastImpactBulletTransformRoot(FTransform trans);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastGaugeValue(const float InBlastGaugeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastGaugeRecoverySpeedMultiplier(const float InBlastGaugeRecoverySpeedMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastGaugeRecoverySpeed(const float InBlastGaugeRecoverySpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetBeforeInputTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleImpactDamageScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingFormChangeForbidsHUD(const TArray<FKoratCharacterDataList>& InForbidForms);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingFormChangeForbids(const TArray<FKoratCharacterDataList>& InForbidForms);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingFormChangeForbid(FKoratCharacterDataList InForbidForm);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingFormChangeAllowHUD(FKoratCharacterDataList InForbidForm);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingFormChangeAllow(FKoratCharacterDataList InForbidForm);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingBulletForbid();
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingBulletAllow();
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingBlastForbid(EKoratBlastSlotType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingBlastAllow(EKoratBlastSlotType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetAuraColorType(const FKoratCharacterEffectColorSetDataTypeDataList& InColorType);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackHit(const bool bIsAttackHit);
    
    UFUNCTION(BlueprintCallable)
    void SetArmorLevel(const FKoratArmorLevelDataList& InArmorLevelDataList, UObject* InObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetActionCameraCallback(ASSCharacter* InCharacter, ESSSetActionCameraType InSetType, const FSSActionCameraParameterData& InActionCameraParameter);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActionCamera(const ESSSetActionCameraType InSetType, USSActionCameraDataAsset* InActionCamera);
    
    UFUNCTION(BlueprintCallable)
    void SequentialAttackStateStart(ASSCharacter* InDamageTarget, FKoratActionDataList InAction, FKoratCombativesKeyDataList InCombativesKey, float InAttackRatio, int32 InHitNum, float InHitSpanSec, bool bInNoKnockDownAttack, bool bInDrain);
    
    UFUNCTION(BlueprintCallable)
    void ResumeChangedStates(const TArray<EKoratBattleDirectingCharacterStateType>& InChangedStates, const TArray<EKoratBattleDirectingCharacterStateType>& InChangedPreStates);
    
    UFUNCTION(BlueprintCallable)
    void ResumeBattleDirectingBlastForbidAllow(const FKoratCharacterForbidParameter& InForbid, const FKoratCharacterForbidParameter& InAllow);
    
    UFUNCTION(BlueprintCallable)
    void RestartTickForVanishing();
    
    UFUNCTION(BlueprintCallable)
    void RestartTickForTutorialBattleFinish();
    
    UFUNCTION(BlueprintCallable)
    void RestartTickForMapDataSpawn();
    
    UFUNCTION(BlueprintCallable)
    void RestartTickForMapChange();
    
    UFUNCTION(BlueprintCallable)
    void RestartTickForHalt();
    
    UFUNCTION(BlueprintCallable)
    void RestartTickForGameState();
    
    UFUNCTION(BlueprintCallable)
    void RestartTickForDemonstrationHalt();
    
    UFUNCTION(BlueprintCallable)
    void ResetRushDerivedUsedHistory();
    
    UFUNCTION(BlueprintCallable)
    void ResetPursuitCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetJumpFlag();
    
    UFUNCTION(BlueprintCallable)
    void ResetHitBulletCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetGiantCharaTargetTransformToCenter();
    
    UFUNCTION(BlueprintCallable)
    void ResetFinishedBulletCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetDragonDashElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    void ResetDelayStartMapChange();
    
    UFUNCTION(BlueprintCallable)
    void ResetCounterCondition();
    
    UFUNCTION(BlueprintCallable)
    void ResetArmorLevel(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void ResetAnimInstance();
    
    UFUNCTION(BlueprintCallable)
    void RequestVisibilitySwirchFromMapChangeToDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestTransitionOfFlowAction(const FKoratActionDataList InBeforeAction, const FKoratActionDataList InAfterAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestTransitAction(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void RequestResetMoveSpeed(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void RequestResetAction(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestJumpSectionOfFlowAction(const FKoratActionDataList InAction, const FName InSectionName);
    
    UFUNCTION(BlueprintCallable)
    void RequestBulletToFinish();
    
    UFUNCTION(BlueprintCallable)
    void RequestBlastBoostOnCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleasePlayAction();
    
    UFUNCTION(BlueprintCallable)
    void RefreshZSearchEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectRequestReactionDirection();
    
    UFUNCTION(BlueprintCallable)
    void RecoverSparkingGaugeValue(const float InRecoverValue);
    
    UFUNCTION(BlueprintCallable)
    void RecoverSPAndSparkingGaugeValue(const float InRecoverValue);
    
    UFUNCTION(BlueprintCallable)
    void RecoverSP(const float InRecoverValue, const float InLimit);
    
    UFUNCTION(BlueprintCallable)
    void RecoverLimitBoost(const float InRecoverValue);
    
    UFUNCTION(BlueprintCallable)
    void RecoverHP(const float InRecover);
    
    UFUNCTION(BlueprintCallable)
    void RecoverBlastStock(const int32 InRecover);
    
    UFUNCTION(BlueprintCallable)
    void RecoverBlastGaugeValueByDragonHomingChangeTrajectory();
    
    UFUNCTION(BlueprintCallable)
    bool ReceivedDamageBySequentialAttack(AActor* InGaveDamageActor, FKoratActionDataList InAction, FKoratCombativesKeyDataList InCombativesKey, float InDamage, float InSPDamage, bool bInNoKnockDownAttack, bool bInDrain);
    
    UFUNCTION(BlueprintCallable)
    bool ReceivedDamageBySelf(AActor* InGaveDamageActor, const FKoratActionDataList& InAction, const bool bUseBulletParam);
    
    UFUNCTION(BlueprintCallable)
    void PrepareConsumeSkillStockCost(EKoratSkillSlot InSkillSlot);
    
    UFUNCTION(BlueprintCallable)
    void PlayInvincibleEffect();
    
    UFUNCTION(BlueprintCallable)
    void PlayDamageEffectExplosionByEnergyBulletActor(ASSBulletActor* InBulletActor, const FKoratActionDataList& InAction, const FTransform& InEffectTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayAction(const FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteMontageLevelSequenceInRequestAnimData(UPARAM(Ref) FKoratRequestAnimData& InOutRequestAnimData);
    
    UFUNCTION(BlueprintCallable)
    void OnUkemi();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitActionByLocomotion(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitActionByAnimationBlueprint(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void OnThrowBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartMapChange(const EKoratMapChangeType InMapChangeType, const EKoratMapChangeStartTiming InStartTiming);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnToInGameFromDemo();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadChangedParameter();
    
    UFUNCTION(BlueprintCallable)
    void OnReaction(const FKoratActionDataList& InCurrentAction);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPureBattleStart();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKoratCharacterDebugCommandDraw();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKoratCharacterDebug(const TArray<FString>& InDebugCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputKoratBattleKeyUp(EKoratBattleKey InBattleKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputKoratBattleKeyJustReleased(EKoratBattleKey InBattleKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputKoratBattleKeyJustPressed(EKoratBattleKey InBattleKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputKoratBattleKeyDown(EKoratBattleKey InBattleKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitObjectStopped(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitObjectCollisionOccured(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndUIActionMontageLevelSequence(FKoratGroupIdDataList InGroupId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndMontageLevelSequence(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndMapChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndDemo();
    
    UFUNCTION(BlueprintCallable)
    void OnEndAction(const FKoratActionDataList& InEndAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterTookDamage(const FKoratActionDataList& InReactionAction, EKoratReactionDirection InReactionDirection, const FKoratAddtiveReactionParameter& InAddtiveReactionParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterScratchDamage(const FKoratActionDataList& InAction, int32 InAddScratchLv);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterReceivedOffset(const FRotator InRotation, const FKoratHitBackMovementData& InHitBackData, const FKoratHitStopData& InHitStopData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterGaveOffset(const FKoratHitStopData& InHitStopData, const FKoratHitEffectAfterHitStop& InHitEffectAfterHitStop, const ESituationOfOpponentWhenAttackHit InOpponentHitSituation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterGaveDamage(EKoratCharacterMovementTransition InMovementTransition, const bool bInHoming, const FKoratHitStopData& InHitStopData, const FKoratHitEffectAfterHitStop& InHitEffectAfterHitStop, const bool bInBlownAttack, const EKoratActionAttackType InAttackType, const ESituationOfOpponentWhenAttackHit InOpponentHitSituation, const FKoratActionDataList& InAttackAction);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCurrentAction(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable)
    void OnBuffEvent(const FKoratBuffId& InHandle, const FKoratUnitBuffInfo& InBuffInfo, EKoratBuffNotifyType InNotifyType);
    
    UFUNCTION(BlueprintCallable)
    void OnBoneTransformsFinalizedEx();
    
    UFUNCTION(BlueprintCallable)
    void OnBoneTransformsFinalized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginUIActionMontageLevelSequence(FKoratGroupIdDataList InGroupId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginMontageLevelSequence(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void OnAddWarpOffset(const FVector& InWarpOffsetPos, const FRotator& InWarpOffsetRot, const FVector& InWarpOffsetRotCenterPos);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorHitEventCallback(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActionStandby();
    
    UFUNCTION(BlueprintCallable)
    void OccurOffset(AActor* InOpponentOffsetActor, const FKoratActionDataList& InAction, const EKoratOffsetType InOffsetType, const FTransform& InOffsetTransform, const FKoratReceivedDamageParameter& InReceivedDamageParameter);
    
    UFUNCTION(BlueprintCallable)
    void NotifyRunSpecialFatePreBattleProduction();
    
    UFUNCTION(BlueprintCallable)
    void NotifyRunSparkingCombo();
    
    UFUNCTION(BlueprintCallable)
    void NotifyRunRevengeCounter();
    
    UFUNCTION(BlueprintCallable)
    void MapChangeDestructDelete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LogBtlSyncFromBP(int32 syncLogLv, const FString& Text) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LatentEventPreBattleProduction(USSCharacterLatentHelper* InLatentHelper);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KoratDrawHitPosition(const float InDrawHitPositionTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KoratDrawHitArea(const float InDrawHitAreaTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KoratDrawAttackCollision(const float InDrawAttackCollisionTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KoratDebugArmorAddtiveReaction(const float InDebugArmorAddtiveReactionInterval);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KoratCharacterDebugCommandDraw();
    
    UFUNCTION(BlueprintCallable)
    float KnockbackMovementStart(FVector WorldDirection, float InHitbackTime, float InInitialSpeed, float InMaxSpeed, float InMaxAcceleration, float InBrakingDeceleration);
    
    UFUNCTION(BlueprintCallable)
    void KnockbackMovementInput(FVector WorldDirection, float InAlpha, float ScaleValue);
    
    UFUNCTION(BlueprintCallable)
    void KnockbackMovementApply(FVector WorldDirection, float InDeltaTime, float InKnockbackTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void JumpSectionOfPlayAction(const FName InSectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void JumpSectionOfFlowAction(const EKoratAnimType InAnimType, const FName InSectionName);
    
    UFUNCTION(BlueprintCallable)
    void JumpSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZBurstSmash(bool InStart, bool InLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZBurstDash(bool InStart, bool InLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsWaitRequestTransitAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsVanishing() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseNativeProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseeComboActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsableRushHighSpeedMoveRevenge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsableRevengeCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnconscious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIActionPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurnBeforeTransition(const FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransitionFlyingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransitionableAction(const FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowActionRunning(bool InIsCheckDoubleSided) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowAction2P(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowAction1P(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetRepelStopAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetGiantChara() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTaketurns();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuperZCounterPosture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStyleChangeOK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopTickForVanishing() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsStopTickForDemonstrationHalt();
    
    UFUNCTION(BlueprintCallable)
    bool IsStopTick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStayActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSPGaugeValueMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSPEnoghToVanishingAssault(ESSVanishingAssaultType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSPEnoghToRushHighSpeedMoveRevenge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSPEnoghToRushHighSpeedMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSparkingTimeConsumeStop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSparkingModeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSparkingModeEndReserve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSparkingConditionKeeping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipUpdateInputInDramaticBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningAction(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRequestResetMoveSpeed();
    
    UFUNCTION(BlueprintCallable)
    bool IsRequestResetAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRequestBulletToFinish(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplaceAnimation(const FKoratActionDataList InAnimation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRepelActionContinueDistance(bool InIsJump) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsReceiveSelfDamage(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPursuitPossible(const EKoratPursuitType InPursuitType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreSparkingModeState() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPotara();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleThrowEscape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossibleSparkingCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayAddtiveReactionAction(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNumbState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearModeOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovementGround() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMetBulletBlastHitDemoCondition();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMemberChangeOK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapChangeDestructDemoGuard(const EKoratBlastSlotType& InBlastSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookatEnabledAction(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockOnCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLimitBoost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastSectionFinished(const EKoratAnimType InAnimType, int32 InOffsetFrame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastDamageReactionBySameRushDerived() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKnockDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInUnderWaterDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInUnderWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterruptibleExplosionSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterruptibleBarrierSkill() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputRestrictedToTargetRevengeSmashNative(const EKoratBattleKey Key, const float SincePressTime, const float TargetActionTime, const bool TargetIsRevengeSmash) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputRestricted(const EKoratBattleKey InBattleKey, float InSincePressTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputPadKeyBattleKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAirOnCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHitDemoFar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsGuardSuccessByParameter(const FKoratCharacterCombativesParameter& InParameter, bool& OutIsGuardBreak, bool& OutIsAttackBreak, bool& OutIsImpossibleGuard) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuardCancellable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundWalkingOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundRunningOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroundMoveOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGiantChara() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFusion();
    
    UFUNCTION(BlueprintCallable)
    bool IsFormChange();
    
    UFUNCTION(BlueprintCallable)
    bool IsForceFinishEarlyHD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForbiddenForm(FKoratCharacterDataList InForm) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyingAutoLanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFluffyMoveNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFarLowAltitudeFlightOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFarCanFlyOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippedScouter() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEquipEmote(FKoratActionDataList InCheckAction);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnergyBulletUsable(const FKoratActionDataList InEnergyBulletActionData, bool bInJumpRushKidan, bool bInDashRushKidan, bool& bOutCannotShoot);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnergyBulletSmashUsable(const FKoratActionDataList InEnergyBulletActionData, bool& bOutCannotShoot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnergyBulletDrain() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnabledUIActionFootIK();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableAimLookatLocation();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableAimLocation();
    
    UFUNCTION(BlueprintCallable)
    bool IsEarlyFinishHD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawHitPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawHitArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawEmbedHitData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawAttackCollision() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDoVanishingWhenDoBlastCombo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsDisableLipSync() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestructedToMapDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDelayStartMapChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecreasingSmashLevelGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugSaveTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugResetTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugNoStyleChangeWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugNoSkillConsume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugNoDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugNoDamage() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugBlastImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugArmorAddtiveReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashJumpTransitionableHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageReactionAction(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentActionsCanDrownOutForExplosion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounterConditionSuccessZCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounterConditionSuccessSuperCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounterConditionSuccessSonicSway() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounterConditionSuccessSelfishness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounterConditionSuccessFastAvoidance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCounterConditionSuccessAscertain() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCostumeDamaged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsController1P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombinationAnimation(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCollisionEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClassicMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterStatusInBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChaosActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCantFlyKidanOnCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanSuperHighSpeedMove() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCanSpeedImpactByCurrentAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanSpeedImpactByAction(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanSelfishness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCannotThrowTransitionInStandby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCannotPowerImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCannotCrashImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCannotCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCannotActionFlagSuperZCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCannotActionFlagBlastRepel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanHighSpeedMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanFly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCancelableSparkingCombo(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCancelableBlastCombo(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBoneFinalized();
    
    UFUNCTION(BlueprintCallable)
    bool IsBodyChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlowoutBrakeTimeReduction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastUltimateUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastUltimateGaveAfterStateToBlowFallingAlsoSIOT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastUltimateGaveAfterStateToBlowFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastSkillUsable(EKoratBlastSlot InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastSkillConsumeSkillStockImmediately(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastNonLockUsable(const EKoratBlastSlotType& InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastMoveSpeedGuardBreak() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBlastLungeMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastImpactBulletOverride() const;
    
    UFUNCTION(BlueprintCallable)
    void IsBlastImpactBulletActive(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastFullCharge(EKoratBlastSlotType InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastForteUsable(EKoratSkillSlot InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastForteInterruptible(EKoratSkillSlot InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastDrain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastDemoBranchTarget(const ESSBlastDemoBranchType InBranchType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleKeyReleased(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleKeyPressed(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackstepWhenNearMode(const FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoUkemiMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackSuccessAngle(const ASSCharacter* InOpponentCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackSideBlastAction(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAnimationOfCurrentActionMontage(UAnimSequenceBase* InAnimation, bool& OutNoMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveAttackCollision(EKoratActionAttackType InAttackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActionStandby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionMontageFirstLDPassed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionFlagSpiralSlash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputFreeCamera();
    
    UFUNCTION(BlueprintCallable)
    void InheritSettings(const ASSCharacter* InFrom);
    
    UFUNCTION(BlueprintCallable)
    void InheritDebugSettings(const ASSCharacter* InFrom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighSpeedMovementOmenToAppear(const EKoratFreeTimelineType TimeLineType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighSpeedMovementDisappear(const EKoratFreeTimelineType TimeLineType, USSActionCameraDataAsset* InActionCamera, USSActionCameraDataAsset* InOpponentActionCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighSpeedMovementAppear(USSActionCameraDataAsset* InActionCamera, USSActionCameraDataAsset* InOpponentActionCamera);
    
    UFUNCTION(BlueprintCallable)
    void HideDuringMapChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPossibleThrowEscapeThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOpportunitySpeedImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLocomotionControl(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDetectedCounterConditionSignCombatives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetZBurstDashParameter(FKoratCharacterDataZBurstDashParameter& OutZBurstDashParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZBurstDashArrivalSecond();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterWinType GetWinType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWalkFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWaitingCostumeDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetViewingController() const;
    
    UFUNCTION(BlueprintCallable)
    FKoratActionDataList GetVictoryProductionAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVictoryAppealWarpType GetVictoryAppealWarpType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetVanishingTeleportForecast(FVector& OutLocation, FRotator& OutRotator, float& OutRemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUltimateBlastSpCostWhenHitting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUltimateBlastSpCostWhenFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUltimateBlastSpCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTransitionPossibleTimeFromDashAttackToShortDash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeleportationCounterWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeleportationCounterStopRequestTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTeleportationCounterInputTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetTargetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetTargetCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSupportRequestAnimData(FKoratActionDataList InBaseAction, FKoratActionDataList InSupportAction, int32 InSupportIndex, FKoratRequestAnimData& OutRequestAnimData, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASSCharacter*> GetSupporters() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSupporterRebindDescriptionUsingIndex(int32 InIndex, FKoratRebindDescription& OutDescription);
    
    UFUNCTION(BlueprintCallable)
    void GetSupporterRebindDescription(TArray<FKoratRebindDescription>& OutDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSuperHighSpeedMoveTransform(FTransform& OutStartTransform, FTransform& OutEndTransform) const;
    
    UFUNCTION(BlueprintCallable)
    EKoratCharacterSuperHighSpeedMoveSideStatus GetSuperHighSpeedMoveSideStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetSuperHighSpeedMovementForecast(FVector& OutLocation, FRotator& OutRotator, float& OutRemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionAttackType GetSuperAscertainSuccessAttackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStyleChangeWaitSecondMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStyleChangeWaitSecond() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetStyleChangeOperationFlg();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStyleChangeActiveCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStunReactionMaxRecoverySP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStunReactionInputRecoverySpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStepsParameter(FKoratCharacterDataStepParameter& Front, FKoratCharacterDataStepParameter& FlyBackIN, FKoratCharacterDataStepParameter& FlyBackOT, FKoratCharacterDataStepParameter& FlyLeftRightIN, FKoratCharacterDataStepParameter& FlyLeftRightOT, FKoratCharacterDataStepParameter& GroundBackIN, FKoratCharacterDataStepParameter& GroundBackOT, FKoratCharacterDataStepParameter& GroundLeftRightIN, FKoratCharacterDataStepParameter& GroundLeftRightOT, FKoratCharacterDataStepParameter& LongFrontIN, FKoratCharacterDataStepParameter& LongFrontOT, FKoratCharacterDataStepParameter& LongBackIN, FKoratCharacterDataStepParameter& LongBackOT, FKoratCharacterDataShortDashParameter& ShortDash) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSPGaugeValue() const;
    
    UFUNCTION(BlueprintCallable)
    void GetSpeedImpactOkJustTimingEnd(float& OutOkEnd, float& OutJustEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedImpactInputCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpeedImpact(EKoratCharacterSpeedImpactStatus& OutStatus, float& OutProgress, float& OutLength, float& OutDecide, float& OutProgressRapid, float& OutPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSocketTransformSyncUnSafe(FTransform& OutTransform, const FName SocketName, const ERelativeTransformSpace TransformSpace) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSocketTransformSyncSafe(FTransform& OutTransform, const FName InSocketName, const ERelativeTransformSpace InTransformSpace) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSocketTransform(FTransform& OutTransform, const FName SocketName, const ERelativeTransformSpace TransformSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetSocketRotatorSyncSafe(FName InSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSocketLocationSyncSafe(FName InSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSmashLevelGaugeDecrementDelayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSmashLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillStockCost(EKoratSkillSlot InSkillSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShortDashSpeedDownDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetShortDashParameter(FKoratCharacterDataShortDashParameter& OutShortDash) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleSettleAttackType GetSettleAttackType() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetSequencePlayingLabel(ASSLevelSequenceActor* InSequenceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSectionElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratCharacterChangeMode GetSafeSpawnCharacterChangeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratSafeSpawnAreaSize GetSafeSpawnAreaSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetRunningActionList(TArray<FKoratActionDataList>& OutActionList, EKoratCharacterLocomotionDetailStatus& OutLocomotionDetailStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRotatedNullSyncUnSafe(FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRotatedNull(FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSRootCameraDirector* GetRootCameraDirector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRevengeDashParameter(FKoratCharacterDataRevengeDashParameter& OutRevengeDashParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRevengeCounterShortAttackTransitionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRevengeCounterMediumUpAttackTransitionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRevengeCounterMediumAttackStartRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRevengeCounterLongAttackTransitionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRevengeCounterLongAttackStartRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FKoratActionDataList GetRequestTransitAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetReplacePartsAnimationPtr(const FKoratReplaceAnimationDataList InReplaceAnimation, int32 InIndex, TArray<FSSPartsAnimationPtr>& OutPartsAnimation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetReplaceAnimationPointerArray(const FKoratReplaceAnimationDataList InReplaceAnimation, TArray<UAnimMontage*>& OutMontage, TArray<ULevelSequence*>& OutLevelSequence) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRepelActionContinueCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReactionSplitMidBorder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReactionSplitLowBorder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReactionSplitHighBorder() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPushingCollisionEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPursuitPossibleTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPureChangeWaitSecondValue() const;
    
    UFUNCTION(BlueprintCallable)
    FKoratActionDataList GetPreBattleProductionAction(bool& bOutIsSpecialFate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPreAction(FKoratActionDataList& OutAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerImpactValue() const;
    
    UFUNCTION(BlueprintCallable)
    FKoratPlayerStartDataList GetPlayerStartKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerSide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratPlayableAnimType GetPlayableAnimType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParamCharacterActionSequenceActor(FKoratActionDataList InAction, float& OutTime, FString& OutName, FString& OutSection, float& OutMaxTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetP2FaceChipTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetP1FaceChipTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNumbRecoverySpeedScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNoRotatedNull(FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetNoLockVirtualTargetTransform(float InDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterWallAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMovementParameterWalkFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterVanishingTraceShiftDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovementMode GetMovementParameterStartMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterSpeedInterpolateRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterSlideAngleWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterSlideAngleGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterSlideAngleAirWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterSlideAngleAirGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetMovementParameterRotationRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterNormalWalkSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterNormalSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterNoActionPitchHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterNearWalkSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterNearSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterNearDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterMaxAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterJumpZVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterJumpToFlySeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterJumpMaxHoldTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovementParameterJumpMaxCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMovementParameterIsAutoJumpToFly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterGroundMoveParameter GetMovementParameterGroundMoveParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterGravityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterEmbedInWallMinElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterEmbedInWallMaxElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterEmbedInWallAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterEmbedInGroundMinElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterEmbedInGroundMaxElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterEmbedInGroundAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterClimbDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMovementParameterCanFlyMyself() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMovementParameterCanFly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterBrakingDecelerationFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterAutoLandingNoMotionHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterAutoLandingHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterAutoLandingFallScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterAirControlBoostVelocityThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterAirControlBoostMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementParameterAirControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMovementParameter(FKoratCharacterDataMovementParameter& OutMovementParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovementMode GetMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMovementFloorDistance(float& OutFloorDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSPGaugeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHPGaugeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxBlastStockCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratMapChangeType GetMapChangeType(const EKoratMapChangeStartTiming InStartTiming, const EKoratBlastSlotType& InBlastSlot, bool InSkipCheckNearGround) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratMapDataList GetMapChangeData(const EKoratMapChangeType InMapChangeType, TSoftObjectPtr<ULevelSequence>& OutLevelSequence, TSoftObjectPtr<ULevelSequence>& OutOTLevelSequence) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionLookatPartFlags GetLookatPartFlagsFromActionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionLookatPartFlags GetLookatPartFlags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionLookatOperationType GetLookatOperationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocomotionSectionData(FKoratActionDataList InAction, TArray<FSSLocomotionSection>& OutLocomotionSection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocomotionRandomIntegerInRange(int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocomotionRandomFloatInRange(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    bool GetLockOnCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSSSupportingCharacterData> GetLoadingSupporters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoadedSupporterKeeping(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable)
    float GetLimitBoostGaugeValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLiftRecoveryWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionAttackType GetLastDamageAttackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKoratCharacterMontageComponent* GetKoratCharacterMontageComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetKnockDownReactionParameter(FKoratDamageReactionDataList& OutDamageReactionDataList, FKoratHitBackMovementData& OutHitBackData, FKoratHitStopData& OutHitStopData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJumpBulletSetNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJumpBulletRapidFireNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStoneMoveKidan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNoMoveKidanFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratCharacterInvincibleStatus GetInvincible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInternalSmashLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInpactTrig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInpactGaugeValue() const;
    
    UFUNCTION(BlueprintCallable)
    float GetImpactPumpTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetImmortal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIdealPositionMidAirKick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHPGaugeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHomingTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APawn* GetHomingLocationPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHomingLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratHitStopData GetHitStopData(const FKoratHitStopDataList& InHitStopDataList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHitBulletCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHitAirWallNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetHighSpeedMovementForecast(FVector& OutLocation, FRotator& OutRotator, float& OutRemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratGuardDirection GetGuardDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FKoratActionDataList GetGuardClearReaction(FKoratActionDataList InActionDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGuardableAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGroundFloorDistance(float& OutFloorDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FVector> GetGiantCharaTargetLocations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCapsuleComponent*> GetGiantCharaCapsulePushingComponents();
    
    UFUNCTION(BlueprintCallable)
    float GetFreeCameraTurnUDReverse();
    
    UFUNCTION(BlueprintCallable)
    float GetFreeCameraTurnSpeedYaw();
    
    UFUNCTION(BlueprintCallable)
    float GetFreeCameraTurnSpeedPitch();
    
    UFUNCTION(BlueprintCallable)
    float GetFreeCameraTurnLRReverse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSNotifyActionCameraTargetActor* GetFreeCameraTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UForceFeedbackComponent* GetForceFeedbackComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFinishedBulletCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFallStopRecoveryWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFallRecoveryWaitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFallRecoveryToLandingBorderDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExplosionDrownOutableRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableBlastUltimateOverrideDashAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableBlastSkill2OverrideDashAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableBlastSkill1OverrideDashAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableBlastConsecutiveShot(const EKoratBlastSlotType InSlot) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetEmoteIndex(int32 InEmoteSlotNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEmoteChangeWaitSecondMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEmoteChangeWaitSecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDrawHitPositionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDrawHitAreaTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDrawAttackCollisionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonSmashTransitionDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonSmashChargeEndDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDragonHomingParameter(FKoratCharacterDataDragonHomingParameter& OutDragonHomingParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonHomingKeepDistanceInputInfluence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonHomingKeepDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonHomingInputInfluenceAttenuationDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonHomingInputInfluence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonHomingDecelerationDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDragonDashParameter(FKoratCharacterDataDragonDashParameter& OutDragonDashParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonDashInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDragonDashElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDownValueLimitReactionParameter(FKoratDamageReactionDataList& OutDamageReactionDataList, FKoratHitBackMovementData& OutHitBackData, FKoratHitStopData& OutHitStopData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDownValueLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDownValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDecideChangeCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugNoLockOnCharacter() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKoratEachCharacterUnderWaterStatus GetDebugEachUnderWaterStatus(bool& OutIsValid);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterDataArmorLevelParameter GetDebugArmorDetail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDebugArmorAddtiveReactionInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDashUpDownParameter(FKoratCharacterDataDashUpDownParameter& OutDashUpDownParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDashJumpZVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDashJumpXYVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDashJumpTransitionableHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDashBulletNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratActionDataList GetDamageReactionActionDataList(const FKoratDamageReactionDataList& InDamageReactionDataList, const bool bInFront) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDamageCollisionEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDamageAction(const FKoratDamage& InDamage, FKoratActionDataList& OutAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCutCameraDirector* GetCutCameraDirector() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCustomTimeDilation(EKoratSetCustomTimeDilationReason& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratActionDataList> GetCurrentRunningActionList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratOffsetType GetCurrentOffsetTypeOfDefense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratOffsetType GetCurrentOffsetTypeOfAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMontagePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratCharacterLocomotionDetailStatus GetCurrentLocomotionDetailStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLevelSequencePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FKoratBlowReactionBrakeParameter GetCurrentHitBackBlowBrakeParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBlastChargeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBlastChargeRatio(EKoratBlastSlotType InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBlastChargeDamageScale(EKoratActionAttackType InAttackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetCurrentActionElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentActionAttackCollisionScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAction(FKoratActionDataList& OutAction) const;
    
    UFUNCTION(BlueprintCallable)
    float GetCrashImpactInputTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratSuperZCounterTakeType GetCounterConditionSuccessSuperZCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostumeScratchLv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostumeDamageLv() const;
    
    UFUNCTION(BlueprintCallable)
    FSSCharacterCostumeDamageReactionParam GetCostumeDamageChangeReactionParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterDataList GetConstCharacterDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetConfrontRotator(float AdditionalAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionConditionDown GetConditionDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetComboNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargeLv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterStyleChangeRequestNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratCharacterChangeMode GetCharacterStyleChangeRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSCharacterSocketComponent* GetCharacterSocketComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSCharacterPostUpdateComponent* GetCharacterPostUpdateComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EMovementMode GetCharacterMovementModePrioritizeSaveFromBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterHUDTickEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratCharacterHUDStatusReq GetCharacterHUDStatusReq() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSHUDChangeMode GetCharacterHUDChangeModeReq() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterFigureDataList GetCharacterFigureDataList() const;
    
    UFUNCTION(BlueprintCallable)
    FKoratCharacterDataList GetCharacterDataList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharacterCosutumeModelID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterCostumeDataList GetCharacterCosutumeDataList() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCharacterCollisionEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterChangeRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSCharacterBlastBulletComponent* GetCharacterBlastBulletComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSCharacterBattleAssistComponent* GetCharacterBattleAssistComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSCharacterActionTargetComponent* GetCharacterActionTargetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSLevelSequenceActor* GetCharacterActionSequenceActor(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChangeWaitSecondMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChangeWaitSecondCountUpPerSec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChangeWaitSecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EKoratBattleDirectingCharacterStateType> GetChangedStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratChangeDirectionOfActionStartType GetChangeDirectionOfActionStartType(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratActionDataList GetChangeCharacterAction(FKoratChangeCharacterActionDataList InChangeCharacterActionSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCapsuleComponent* GetCapsulePushingComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotStyleChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotPotara() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotNormalFormChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotFusion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotEmote() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotCharacterTaketurns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotBlastUlt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotBlastSkill(EKoratBlastSlot InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotBlastForte(EKoratSkillSlot InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCannotBlastCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBulletRapidFireNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoostCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBodyPitchAngleJumpAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetBlowHitForecast(FVector& OutLocation, float& OutHitTime, FKoratMapAttributeDataList& OutMapAttribute, FVector& OutHitNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastUltimateTransitionConditionHitBulletCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastUltimateTransitionConditionFinishedBulletCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBlastSkillTypeDataList GetBlastUltimateSkillType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratActionDataList> GetBlastUltimateReceivedActionDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetBlastUltimateOverrideDashAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastUltimateMoveLimitTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastUltimateMoveHitDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBlastUltimateIsBodyChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratHitBackMovementDataList GetBlastUltimateGaveAfterHitBackMovementDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBlastUltimateGaveAfterHitBackMovementData(FKoratHitBackMovementData& OutMovementData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratActionDataList GetBlastUltimateGaveAfterActionDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratActionDataList> GetBlastUltimateGaveActionDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastStockCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastSpCostWhenHitting(EKoratBlastSlot InBlastSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastSpCostWhenFiring(EKoratBlastSlot InBlastSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastSpCost(EKoratBlastSlot InBlastSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBlastSlotType GetBlastSlot(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastSkill2TransitionConditionHitBulletCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastSkill2TransitionConditionFinishedBulletCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBlastSkillTypeDataList GetBlastSkill2SkillType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetBlastSkill2OverrideDashAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastSkill1TransitionConditionHitBulletCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlastSkill1TransitionConditionFinishedBulletCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBlastSkillTypeDataList GetBlastSkill1SkillType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetBlastSkill1OverrideDashAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FKoratActionDataList GetBlastSIAction(const ESSBlastDemoBranchType InBranchType, const EKoratBlastSlotType InBlastSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastMaxChargeTime(EKoratBlastSlotType InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastImpactMeterMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastImpactMeter() const;
    
    UFUNCTION(BlueprintCallable)
    EKoratBlastImpactCameraType GetBlastImpactCameraType(const EKoratBlastSlotType& InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBlastImpactBulletTransformTipAdjust() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBlastImpactBulletTransformTip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBlastImpactBulletTransformRootAdjust() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBlastImpactBulletTransformRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBlastImpactBulletTransformOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastImpactBulletRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastGaugeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastGaugeRecoverySpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastGaugePlainRecoverySpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSBlastDemoBranchType GetBlastDemoBranchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FKoratActionDataList GetBlastDefaultDemoAction(EKoratBlastSlotType InBlastSlot) const;
    
    UFUNCTION(BlueprintCallable)
    EKoratBlastSlotType GetBlastComboSlotType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratCharacterBlastBoostStatus GetBlastBoostState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastBoostMagnification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBlastActionCategoryDataList GetBlastActionCategory(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratActionDataList GetBlastAction(EKoratBlastSlotType InBlastSlot, FKoratBlastActionCategoryDataList InActionCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBeforeInputTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBeforeBoostCount() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetbCrashImpactInputStart();
    
    UFUNCTION(BlueprintCallable)
    bool GetbCrashImpactInputFinish();
    
    UFUNCTION(BlueprintCallable)
    bool GetbCrashImpactAttacker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyUpdateDeltaTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSinceReleasedInSection(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSinceReleasedInAction(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSinceReleased(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSincePressedInSection(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSincePressedInAction(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSincePressedAtInterval(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyTimeSincePressed(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleKeyHoldTime(const EKoratBattleKey InBattleKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleImpactPhase GetBattleImpactPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSNewBattleCameraActor* GetBattleIdleCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSNewBattleCameraActor* GetBattleFreeCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratCharacterDataList> GetBattleDirectingFormChangeForbidHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratCharacterDataList> GetBattleDirectingFormChangeForbid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoRecoverSPGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutoLandingNoMotionHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutoLandingHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutoLandingFallScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttackHoming(const FKoratAttackHomingDataList& InAttackHomingDataList, FKoratAttackHomingData& OutAttackHoming) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratDirection GetAttackDirectionOfCombativesParameter(const FKoratActionDataList& InAction, const FKoratCombativesKeyDataList& InAdditionalData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArmorLevelParameter(FKoratCharacterDataArmorLevelParameter& OutArmorLevelParameter, bool bInIsBulletDamage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArmorData(const FKoratArmorDataList& InArmorDataList, FKoratArmorData& OutArmorData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArmorBreakLevelData(FKoratArmorBreakLevelData& OutArmorBreakLevelParameter, const FKoratArmorBreakLevelDataList& InArmorBreakLevelDataList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorBreakLevel(const FKoratArmorBreakLevelDataList& InArmorBreakLevelDataList, const FKoratActionDataList& InAttackAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSCharacterAntiBulletComponent* GetAntiBulletComponent() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UAnimInstance> GetAnimationSubInstance(const FName InName, FName& OutTagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimations(const FKoratActionDataList& InAction, TArray<FSSMontageLevelSequence>& OutMontageLevelSequences) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimationCurrentSection(FName& OutSection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetAllFormChangeNames() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetAimRotator();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAimLookatLocation();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAimLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSAiCharacterStatusComponent* GetAiCharacterStatusComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAddtiveReactionAnimations(FKoratActionDataList InAction, bool InArmor, TArray<UAnimMontage*>& OutMontage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionTiltTimingType GetActionTiltTimingType(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratActionTiltParameter GetActionTiltParameter(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetActionTargetTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSCharacterActionTargetStruct GetActionTargetStruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActionTargetSocketTransform(const FName& Name, FTransform& OutTransform, bool bIgnoreActionTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APawn* GetActionTargetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionSubCategoryType GetActionSubCategoryType(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionRushDerivativeCategoryType GetActionRushDerivativeCategoryType(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionRotationBaseDirection GetActionRotationBaseDirection(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionPenetrationMode GetActionPenetrationMode(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActionMontageFirstLDEndTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActionIsResetMove(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionIdleType GetActionIdleType(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionCategoryType GetActionCategoryType(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionBodyYawMode GetActionBodyYawMode(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionBodyPitchMode GetActionBodyPitchMode(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActionAlNumId(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbsorptionEnergyGainRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAbsorptionBlastEnergyGainRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterDataAbilityFlag GetAbilityFlag() const;
    
    UFUNCTION(BlueprintCallable)
    void GaveDestructedDamage();
    
    UFUNCTION(BlueprintCallable)
    void ForceUnlockCharacter();
    
    UFUNCTION(BlueprintCallable)
    void ForceFinishEarlyHD();
    
    UFUNCTION(BlueprintCallable)
    void FlushAnimEvent();
    
    UFUNCTION(BlueprintCallable)
    void FinishDemonstration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindOverrideAction(FKoratActionDataList InAction, FKoratActionDataList& OutAction) const;
    
    UFUNCTION(BlueprintCallable)
    void ExplosionDrownOut();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSpawnAndDestroyRequestCharacterActionSequenceActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecResetHitStop();
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool ExecNative();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecForceFinishVanishing();
    
    UFUNCTION(BlueprintCallable)
    void EndOpportunitySpeedImpact();
    
    UFUNCTION(BlueprintCallable)
    void EndForcedSparkingDesired();
    
    UFUNCTION(BlueprintCallable)
    void EndCheckBlastBoostOnCharacter();
    
    UFUNCTION(BlueprintCallable)
    void EndBodyChange();
    
    UFUNCTION(BlueprintCallable)
    void EndBlastCombo();
    
    UFUNCTION(BlueprintCallable)
    void EndBlastBoostOnCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableMapHit();
    
    UFUNCTION(BlueprintCallable)
    bool EnableLookat();
    
    UFUNCTION(BlueprintCallable)
    void EnableHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableCharacterPush();
    
    UFUNCTION(BlueprintCallable)
    static bool EnableAbsorptionBullet();
    
    UFUNCTION(BlueprintCallable)
    void DisconnectActionCamera(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisableReconnectManualCameraAllSlot(bool InDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisableReconnectManualCamera(ECameraGlobalSlot InSlot, bool InDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableMapHit();
    
    UFUNCTION(BlueprintCallable)
    bool DisableLookat();
    
    UFUNCTION(BlueprintCallable)
    void DisableHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableCharacterPush();
    
    UFUNCTION(BlueprintCallable)
    void DestroySupporter();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRequestCharacterActionSequenceActor(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason);
    
    UFUNCTION(BlueprintCallable)
    void DestroyCharacterActionSequenceActor(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason);
    
    UFUNCTION(BlueprintCallable)
    void DestroyActionSequenceActorAll();
    
    UFUNCTION(BlueprintCallable)
    void DemoSkipDeleteBullet();
    
    UFUNCTION(BlueprintCallable)
    void DemoDeleteBullet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FKoratDamageReactionDataList DecideDamageReactionByActionCategory(FKoratDamageReactionDataList InDamageReactionDataList) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugToSparkingMode();
    
    UFUNCTION(BlueprintCallable)
    void DebugRunFormChange(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool DebugReplaceToNext(bool bCirculation);
    
    UFUNCTION(BlueprintCallable)
    bool DebugReplaceMember(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 DebugNowTeamPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugGetTeamMembers(int32& OutNowPlayer, TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter>& OutPlayerTeam, TArray<FKoratBattleTeamChangeMembers>& OutMembers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugDrawText(UCanvas* Canvas, APlayerController* PlayerController, float DPIScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugDrawHitArea(float InHitHeightRate, const FVector& InCharacterUpVector, const FVector& InHitLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawDragonHomingTargetSphere(bool InIsCalledFromHomingUpdate);
    
    UFUNCTION(BlueprintCallable)
    void DebugBlastImpactClear();
    
    UFUNCTION(BlueprintCallable)
    void DebugBlastImpact();
    
    UFUNCTION(BlueprintCallable)
    void DamageSP(const float InDamage);
    
    UFUNCTION(BlueprintCallable)
    void DamageOverTimeSP(float InValue, float InTime);
    
    UFUNCTION(BlueprintCallable)
    float DamageHP(const float InDamage, const bool bInCanKnockDown);
    
    UFUNCTION(BlueprintCallable)
    void CreateRequestAnimData(const FKoratActionDataList InAction, int32 InAnimIndex, const EKoratAnimType InAnimType, const EKoratPlayableAnimType InPlayableAnimType, bool bInSoonStart, bool bInTurn, bool bInCancelableOnly, FName InTurningSection, FKoratRequestAnimData& OutRequestAnimData, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratCharacterActionSpawnSequenceParameter CreateCharacterActionSpawnSequenceParameter(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable)
    void CountUpUseBlast(const EKoratBlastSlotType InSlot);
    
    UFUNCTION(BlueprintCallable)
    void CountUpThrowFinish();
    
    UFUNCTION(BlueprintCallable)
    void CountUpBlastHitDemo(const EKoratBlastSlotType InSlot);
    
    UFUNCTION(BlueprintCallable)
    void CountTransitAction(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable)
    void CostumeDamageChangeReaction(const FSSCharacterCostumeDamageReactionParam& InReactionParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CopyChangedStates(TArray<EKoratBattleDirectingCharacterStateType>& OutChangedStates, TArray<EKoratBattleDirectingCharacterStateType>& OutPreChangedStates) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CopyBattleDirectingBlastForbidAllow(FKoratCharacterForbidParameter& OutForbid, FKoratCharacterForbidParameter& OutAllow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsRunningAction(const TArray<FKoratActionDataList>& InActions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsBlastAction(const FKoratActionDataList& InAction) const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSPCostZCounter();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSPCostSuperCounter();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSPCostSelfishness();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSPByVanishingAssault(ESSVanishingAssaultType InType);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSPByRushHighSpeedMoveRevenge();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSPByRushHighSpeedMove();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSPByDashAttack(float DeltaTime, ESSDashAttackType InType);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSPByBlast(float InSpCost);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSP(float InSpCost, bool bIsConsumeSparkingMode, bool bCanCrossOverFromSparkingToSp);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeSkillStockCostIfPrepared();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeOverTimeSP(float InValue, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeBlastStockSuperZCounter(EKoratSuperZCounterTakeType InType);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeBlastStockRevengeCounter();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeBlastStock(int32 InBlastCost);
    
    UFUNCTION(BlueprintCallable)
    void ClearSparkingGaugeValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearEquipmentAppealVoice();
    
    UFUNCTION(BlueprintCallable)
    void ClearCheckBlastBoostOnCharacter();
    
    UFUNCTION(BlueprintCallable)
    void ClearChangedStates();
    
    UFUNCTION(BlueprintCallable)
    void ClearBuffWithTag(const FName& InTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearBoneFinalized();
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleDirectingFormChangeForbidHUD();
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleDirectingFormChangeForbid();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSphereSweepHitMap(const FVector InStartPos, const FVector InEndPos, const float InSize, FHitResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSPCosumable(float InSpCost, bool bIsConsumeSparkingMode, bool bCanCrossOverFromSparkingToSp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSPCostZCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSPCostSuperCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSPCostSelfishness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNoHitAttack(EKoratActionAttackType InCheckType) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckLoopTiming();
    
    UFUNCTION(BlueprintCallable)
    bool CheckLoadedSupporter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInvincibleAgainstCombatives(ASSCharacter* FiredCharacter, const FKoratActionDataList& InAction, const FKoratCombativesKeyDataList& InAdditionalData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHomingTargetIsActionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckExistCombatives(const FKoratActionDataList& InAction, const FKoratReceivedDamageParameter& InReceivedDamageParameter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckExistChangedState(EKoratBattleDirectingCharacterStateType InStateType) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckDemonstrationFinish(FKoratActionDataList InNewAction, FKoratActionDataList InOldAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCanEverLookTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBlastStockSuperZCounter(EKoratSuperZCounterTakeType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBlastStockRevengeCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBlastStockCosumable(int32 InBlastCost) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckBlastDemoBranchSpDeriveType(const FSSBlastDemoBranchCondition& InCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAimBodyBlendTimeZero() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeToStunState();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTargetCharacter(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ChangeRootCamera(float InLerpTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeReaction(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangedSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionName, const float InPlayRatio);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraModeAction(const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRecoverBlastGauge() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelForcedSparkingDesired();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBlastConsecutiveShot(const EKoratBlastSlotType InSlot, const int32 InCurrentShotNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAutoRecoverSPGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform CalcTransformTarget(const FVector TargetLocation, FRotator TargetRotation, const FName SocketName, bool bIgnorePitchRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator CalcRotatorTarget(FVector RotateTarget, bool bIgnorePitchRotation, FRotator AdditionalRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcLocationTarget(const FVector TargetLocation, const FName SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CalcLocationAndRotationTargets(const FVector TargetLocation, const FName SocketName, bool bIgnorePitchRotation, FVector& OutLocation, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FRotator CalcHitBackRotation(const FRotator InHitRotation, const FKoratHitBackMovementData& InHitBackData) const;
    
    UFUNCTION(BlueprintCallable)
    void BeginOpportunitySpeedImpact();
    
    UFUNCTION(BlueprintCallable)
    void BeginForcedSparkingDesired(float InEstimatedDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleKeyTimeSinceReleaseInSection(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleKeyTimeSinceReleaseInAction(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyTimeSinceReleasedInSectionImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyTimeSinceReleasedInActionImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyTimeSinceReleasedImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleKeyTimeSinceRelease(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyTimeSincePushOrInActionNotLessThanImpl(EKoratBattleKey InBattleKey, float InTime, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyTimeSincePushInSectionImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleKeyTimeSincePushInSection(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyTimeSincePushInActionImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleKeyTimeSincePushInAction(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyTimeSincePushImpl(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleKeyTimeSincePush(EKoratBattleKey InBattleKey, float InTime, EKoratInequalitySignType InInequalitySign, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyReleaseImpl(EKoratBattleKey InBattleKey, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleKeyRelease(EKoratBattleKey InBattleKey, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyPushImpl(EKoratBattleKey InBattleKey, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleKeyPush(EKoratBattleKey InBattleKey, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void BattleKeyHoldImpl(EKoratBattleKey InBattleKey, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleKeyHold(EKoratBattleKey InBattleKey, ESSFlowConditionsJudgmentType& OutJudgment);
    
    UFUNCTION(BlueprintCallable)
    void AttackBlastImpact(float InPower);
    
    UFUNCTION(BlueprintCallable)
    void AppendLoadingSupporter(UPARAM(Ref) TArray<FSSSupportingCharacterData>& InSupportCharacters);
    
    UFUNCTION(BlueprintCallable)
    void AddPursuitCount(const EKoratPursuitType InPursuitType);
    
    UFUNCTION(BlueprintCallable)
    void AdditionLimitBoost(float InLimitBoostCost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddHitStop(const FKoratHitStopData& InHitStopData, const FKoratHitEffectAfterHitStop& InHitEffectAfterHitStop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddHitBack(FRotator InHitBackRotation, const FKoratHitBackMovementData& InHitBackMovementData, const FKoratActionDataList& InAction);
    
    UFUNCTION(BlueprintCallable)
    void AddDirectBuff(const FKoratActionDataList& InAction, bool& bOutIsDelayAction);
    
    UFUNCTION(BlueprintCallable)
    void AddActionBuff(const FKoratActionDataList& InAction, int32 InBuffIndex, ASSCharacter* InWho);
    
    UFUNCTION(BlueprintCallable)
    void AddAcceptedInputsType(const TArray<EBattlePracticeAcceptedInputsType> InTypes);
    

    // Fix for true pure virtual functions not being implemented
};


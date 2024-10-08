#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "EKoratBranch.h"
#include "EKoratLoop.h"
#include "EKoratSuperZCounterType.h"
#include "ESSBulletActorAfterReflectRequest.h"
#include "ESSBulletActorDestroyReason.h"
#include "ESSBulletActorStatus.h"
#include "ESSBulletAfterReflectedEffect.h"
#include "ESSBulletCharacterFirstHitType.h"
#include "ESSBulletCharacterLastHitType.h"
#include "ESSBulletGeometryFirstHitType.h"
#include "ESSBulletGeometryLastHitType.h"
#include "ESSBulletHitDirectionRule.h"
#include "ESSBulletStartPosition.h"
#include "ESSBulletStatusAtStart.h"
#include "KoratActionDataList.h"
#include "KoratBulletKeyDataList.h"
#include "KoratCharacterBoneDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratCharacterPointLightData.h"
#include "KoratCombativesKeyDataList.h"
#include "KoratEffectBulletRatParameter.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratEffectMultipleColorInterface.h"
#include "KoratEnergyBulletDirectionDataList.h"
#include "KoratHitObjectParameter.h"
#include "KoratReceivedDamageParameter.h"
#include "SSBulletCharacterCollisionInfo.h"
#include "SSBulletMoveParam.h"
#include "SSCharacterEnergyBulletExplosionEffect.h"
#include "SSCharacterEnergyBulletGroupExplosion.h"
#include "SSLine.h"
#include "Templates/SubclassOf.h"
#include "SSBulletActor.generated.h"

class ASSBulletActor;
class ASSCharacter;
class ASSLevelSequenceActor;
class ULevelSequence;
class UObject;
class UPrimitiveComponent;
class USSBulletCurveCollisionSize;
class USSBulletCurveDirection;
class USSBulletCurveSpeed;
class USSBulletShapeBase;
class USSBulletWindMotorComponent;
class USSRandom;
class USSWindMotorComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASSBulletActor : public AActor, public IKoratEffectMultipleColorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectedBeamLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBulletMoveParam MoveParamAtBeamReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OTBulletSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOTBulletMoveStopByCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TransformHistoryIntervalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BeamCollisionStraightCheckDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName OwnerCharacterBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratBulletKeyDataList BulletKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SupporterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ChargeLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> RequierdControllActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEndChargeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLifeSpanEndRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCaptureRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFirstShotHasInvalidate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTransform> TransformHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MultiHitCharacterCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MultiHitGeometryCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> ReflectedBeamLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> WaitForReflectedLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> MultiHitCharacterLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> MultiHitStateLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> BlastImpactLeadLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> BlastImpactBehindLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, ASSLevelSequenceActor*> AdditionalEffectLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletActorStatus BulletActorStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CollisionElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> GaveDamageCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName GaveDamageCharacterBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GaveDamagePlayerSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> SourceCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList SourceCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector VelocityOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator RotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRootFollowsStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRootFollowsStartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RepelSkillGaugeGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReflected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNoReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletActorAfterReflectRequest ReflectRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletAfterReflectedEffect ReflectEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* ReflectCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ReflectCharacterBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableHomingAtReflected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ApproachEvent2DDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ApproachEvent3DDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExternalNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletActorStatus StatusAfterCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseDelicateBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceDelicateBeamEnableHistoryPointSqr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HitTopLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAfterDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlayedDemoSkipExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HomingTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName HomingTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetPointDiffusionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HomingTargetLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPassedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletActorStatus StatusBeforStartingMultiHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator RotatorBeforeStartingMultiHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator VisualRotatorBeforeStartingMultiHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator HitDirectionAtMultiHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBottomHitAtMultiHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MultiHitrTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> MultiHitCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSLine MultiHitCharacterCollisionSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MultiHitCharacterTracePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AttachedControllActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletActorStatus StatusBeforStartingControll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReflectTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSCharacter*> HitIgnoreCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASSCharacter*, FSSBulletCharacterCollisionInfo> DetectedCharacterCollition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASSCharacter*, FSSBulletCharacterCollisionInfo> SplineComponentDetectedCharacterCollition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DetectedGeometryCollitionActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDestroyedByBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBeamClash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ClashActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform ClashPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PlayOTOnlyAtClash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanLifeSpanEndInMultiHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LifeSpanAfterPassedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomingAngleLimitAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomingAngleLimitAtStartYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletStatusAtStart StatusAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletStartPosition StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShotRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBulletCurveDirection* DirectionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLockRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollAngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OriginalRollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSBulletMoveParam MoveParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverrideMoveParamAtReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSBulletMoveParam MoveParamAtReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomingScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpeedRandScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HomingRandScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSBulletWindMotorComponent> BulletWindMotorComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BulletWindMotorRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BulletWindMotorSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceLead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpeedScaleforBlastImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bColorSetIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetData ColorSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail EffectMutipleColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPointLightIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData PointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectBulletRatParameter BulletGroundReactionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPointLightReflectValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData PointLightReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceWaitForReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPointLightWaitForReflectValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData PointLightWaitForReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceAutoReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPointLightAutoReflectValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData PointLightAutoReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceExplosionCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPointLightExplosionCancelValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData PointLightExplosionCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceEraseExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPointLightEraseExplosionValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData PointLightEraseExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSCharacterEnergyBulletExplosionEffect CharacterMultiHitExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceStateMultiHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSCharacterEnergyBulletExplosionEffect CharacterHitDemoReplacementExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceDemoReplacementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSCharacterEnergyBulletGroupExplosion CharacterHitDemoReplacementGroupExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBlastImpactBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlastImpactBulletShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastImpactBulletShiftRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBulletShapeBase* CollisionShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBulletCurveCollisionSize* CollisionSizeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBulletCurveCollisionSize* CollisionHeightOverriveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverrideBeamCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BeamCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CharacterCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GeometryCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ClashCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScaledCharacterCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScaledCharacterCollisionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScaledGeometryCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScaledGeometryCollisionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScaledClashCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScaledClashCollisionHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletCharacterFirstHitType CharacterFirstHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CharacterCollisionRevibeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CharacterCollisionRevibeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletCharacterLastHitType CharacterLastHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LifeSpanAfterCharacterLastHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletGeometryFirstHitType GeometryFirstHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GeometryCollisionRevibeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GeometryCollisionRevibeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletGeometryLastHitType GeometryLastHitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EnergyBullectCollisionPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnergyBullectCollisionSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnergyBullectCollisionInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSpecialShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWeakSpecialShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFinishAtOwnerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletHitDirectionRule HitDirectionRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableSplitHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SplitHitHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableHitDirectionPitchLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HitDirectionPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BottomHitDirectionPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter DamageStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter DamageStructureMultiHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter BeamDamageStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter BottomDamageStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter BottomDamageStructureMultiHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter DamageStructure_ForGiant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter DamageStructureMultiHit_ForGiant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter BeamDamageStructure_ForGiant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter BottomDamageStructure_ForGiant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter BottomDamageStructureMultiHit_ForGiant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratHitObjectParameter HitObjectStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratHitObjectParameter MultiHitObjectStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratHitObjectParameter ClashStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratHitObjectParameter BeamClashStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bImpossibleReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bImpossibleAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratSuperZCounterType SuperZCounterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bImpossibleSuperZCounterAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEnergyBulletDirectionDataList BulletDirectionAtReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterBoneDataList TargetBoneAtReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AngleLimitAtReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHomingAtReflect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEnergyBulletDirectionDataList AutoReflectDirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReceiveSelfDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSBulletActorStatus, FLinearColor> DebugDrawStatusColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UpVectorDebugDrawColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOptimizeMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRunCollisionTestThisFrame;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* BulletVisualComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform PredicateTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ClashHitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DebugPreBulletLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSBulletActorStatus DebugPreBulletStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSWindMotorComponent* BulletWindMotorComponent;
    
public:
    ASSBulletActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForTransitActionOfOwnerCharacter(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TArray<FKoratActionDataList>& InAfterActionList);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForNotify(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, int32& OutCode);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitForJumpSectionOfOwnerCharacter(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const FKoratActionDataList InAction, const FName InSectionName);
    
    UFUNCTION(BlueprintCallable)
    void StartBullet(ASSCharacter* FromCharacter, FName FromCharacterBone, FKoratEnergyBulletDirectionDataList DirectionData, AActor* InTargetActor, FKoratCharacterBoneDataList TargetBone, ESSBulletStatusAtStart StartStatus);
    
    UFUNCTION(BlueprintCallable)
    ASSLevelSequenceActor* SpawnTraceLevelSequence(FName InName, ULevelSequence* InLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    ASSLevelSequenceActor* SpawnOneShotLevelSequence(ULevelSequence* InLevelSequence, const FTransform& InOverrideTransform);
    
    UFUNCTION(BlueprintCallable)
    ASSBulletActor* SpawnBullet(TSubclassOf<ASSBulletActor> InBluePrint, FKoratActionDataList InAction, AActor* InTargetActor, FKoratBulletKeyDataList InBulletKey);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpeedScaleforBlastImpact(float InSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    bool SetSourceColor(const FKoratEffectColorDataDetail& InColor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEnableCollision(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransitionActionToOwnerCharacter(const FKoratActionDataList InBeforeAction, const FKoratActionDataList InAfterAction);
    
    UFUNCTION(BlueprintCallable)
    void RequestJumpSectionToOwnerCharacter(const FKoratActionDataList InAction, const FName InSectionName);
    
    UFUNCTION(BlueprintCallable)
    void PlayReflectLevelSequence(ESSBulletAfterReflectedEffect InReflectEffect);
    
    UFUNCTION(BlueprintCallable)
    void PlayOT();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitForReflected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitForDestroy(ESSBulletActorDestroyReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnReflect(ESSBulletAfterReflectedEffect InReflectEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnHoming();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart(ASSCharacter* FromCharacter, FName FromCharacterBone, FKoratEnergyBulletDirectionDataList DirectionData, AActor* InTargetActor, FKoratCharacterBoneDataList TargetBone, ESSBulletStatusAtStart StartStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflected(ESSBulletAfterReflectedEffect InReflectEffect, ASSCharacter* FromCharacter, FName FromCharacterBone, FKoratEnergyBulletDirectionDataList InDirectionData, AActor* InTargetActor, FKoratCharacterBoneDataList InTargetBone, bool bInHoming);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoHomingUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMultiHitStartGeometry(const TArray<AActor*>& HitObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMultiHitStartCharacter(ASSCharacter* HitCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMultiHitGeometry();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMultiHitCharacter(ASSCharacter* HitCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveByControllerStart(AActor* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveByControllerEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLifeSpanEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLastHitGeometry(const TArray<AActor*>& HitObjects, ESSBulletGeometryLastHitType LastHitType, ESSBulletActorStatus StatusBeforeHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLastHitCharacter(ASSCharacter* HitCharacter, ESSBulletCharacterLastHitType LastHitType, ESSBulletActorStatus StatusBeforeHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClashedOtherBullet(ASSBulletActor* OtherBullet, const FTransform& InHitTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClash(AActor* HitActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptured();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeamHitCharacter(ASSCharacter* HitCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApproach3D(const FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApproach2D(const FVector TargetLocation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRun() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetTargetDistance3D(FVector& OutTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    float GetTargetDistance2D(FVector& OutTargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBulletCurveSpeed* GetSpeedCurve() const;
    
public:
    UFUNCTION(BlueprintCallable)
    FKoratEffectColorDataDetail GetSourceColor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetOwnerCharacterEnemyCharacterTransform(FTransform& OutTransform, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOwnerCharacterCurrentAction(FKoratActionDataList& OutAction) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsImpossibleGuard() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetHomingTargetLocaton(FVector& OutLocation, EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBulletSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBulletEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBulletCollisionEnable() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishLevelSequence(FName InName);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void ExecuteTimeTable(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TArray<float> InTimeTable, EKoratLoop& OutResult, TArray<int32>& OutIndices);
    
    UFUNCTION(BlueprintCallable)
    void EraseLevelSequence(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void EnableApproach3DEvent(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    void EnableApproach2DEvent(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    void DeleteCollision();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawCollision2(const FVector& InLocation, float InScale, float InHeightScale, const FColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawCollision(UPrimitiveComponent* InCollision, const FColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugDraw();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ClashCombatives(AActor* InActor, ASSCharacter* InCharacter, const FKoratActionDataList& InAction, const FKoratCombativesKeyDataList& InCombativesKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeWaitForReflected(ASSCharacter* InReflectCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ChangeWaitForDestroyWithChildren();
    
    UFUNCTION(BlueprintCallable)
    void ChangeWaitForDestroy();
    
    UFUNCTION(BlueprintCallable)
    void ChangeUnReflect(ESSBulletAfterReflectedEffect InReflectEffect);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTrace(AActor* InTraceTarget, FKoratCharacterBoneDataList InTargetBone);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStop();
    
    UFUNCTION(BlueprintCallable)
    void ChangeReflected(ESSBulletAfterReflectedEffect InReflectEffect, ASSCharacter* InReflectCharacter, FName InReflectCharacterBone, FKoratEnergyBulletDirectionDataList InDirectionData, AActor* InTargetActor, FKoratCharacterBoneDataList InTargetBone, bool bInHoming);
    
    UFUNCTION(BlueprintCallable)
    void ChangeReflect();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMultiHitStartGeometry(TArray<AActor*>& HitObjects);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMultiHitStartCharacter(ASSCharacter* HitCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMultiHitGeometry();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMultiHitCharacter(ASSCharacter* HitCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMoveByController(AActor* InController);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMoveBulletUnHoming();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMoveBulletNoHomingUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMoveBullet(AActor* InTargetActor, FKoratCharacterBoneDataList TargetBone);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLifeSpanEnd();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLastHitGeometry(TArray<AActor*>& HitObjects, ESSBulletGeometryLastHitType LastHitType, ESSBulletActorStatus StatusBeforeHit);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLastHitCharacter(ASSCharacter* HitCharacter, ESSBulletCharacterLastHitType LastHitType, ESSBulletActorStatus StatusBeforeHit);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDoNothing();
    
    UFUNCTION(BlueprintCallable)
    void ChangeClash(AActor* HitActor);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharge(ESSBulletActorStatus InStatusAfterCharge);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCaptured();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBeamHitCharacter(ASSCharacter* HitCharacter);
    

    // Fix for true pure virtual functions not being implemented
};


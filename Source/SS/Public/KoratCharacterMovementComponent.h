#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SceneComponent.h"
#include "CharacterMovementComponentAsync.h"
#include "EUKoratCharacterMovementAct.h"
#include "KoratCharacterMovementComponent.generated.h"

class AActor;
class UCurveFloat;
class UCurveVector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoHomingUpwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyYawFollowAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMovementActSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMovementActAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMovementActDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingDecelerationMovementActing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingDecelerationMovementActingCrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BodyPitchAngle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableLocomotionSetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LocomotionSetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableLocomotionSetRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LocomotionSetRotator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRotateTowardTargetByBodyYaw;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRotateTowardTargetByBodyPitch;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUKoratCharacterMovementAct MovementAct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementActRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MovementActDesiredPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MovementActReferenceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MovementActReferenceVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MovementActLastReferenceLocationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFindFloorResult MovementFloorResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePushingCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecFluffy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FluffyStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FluffyEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FluffyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FluffyCurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> FluffyCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* KnockbackVelocityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* KnockbackLocationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTransform> SavedBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTransform> SavedLocalSockets;
    
public:
    UKoratCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMovementFloor();
    
    UFUNCTION(BlueprintCallable)
    void Turn(float InTurnAngle);
    
    UFUNCTION(BlueprintCallable)
    void StopTurning();
    
    UFUNCTION(BlueprintCallable)
    void SnapTransformForNextTick();
    
    UFUNCTION(BlueprintCallable)
    void SnapRotateByBodyYawForNextTick();
    
    UFUNCTION(BlueprintCallable)
    void SnapRotateByBodyPitchForNextTick();
    
    UFUNCTION(BlueprintCallable)
    void SetPushingCollisionStep();
    
    UFUNCTION(BlueprintCallable)
    void SetPushingCollisionEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementWalkableFloor(bool IsWalkableFloor);
    
    UFUNCTION(BlueprintCallable)
    void SafeMoveAndSlideAlongSurface(FVector MoveVelocity, FRotator MoveRotation);
    
    UFUNCTION(BlueprintCallable)
    void KnockbackMovementVector(FVector WorldDirection, float InAlpha, float ScaleValue);
    
    UFUNCTION(BlueprintCallable)
    float KnockbackMovementStart(FVector WorldDirection, float InHitbackTime, float InInitialSpeed, float InMaxSpeed, float InMaxAcceleration, float InBrakingDeceleration);
    
    UFUNCTION(BlueprintCallable)
    void KnockbackMovementApply(FVector WorldDirection, float InDeltaTime, float InKnockbackTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurning() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFlyingWithFluffy();
    
    UFUNCTION(BlueprintCallable)
    bool IsFluffyNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanFly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSocketTransformSyncSafe(FTransform& OutTransform, const FName SocketName, const TEnumAsByte<ERelativeTransformSpace> TransformSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPushingCollisionEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMovementFloorNormal(FVector& OutNormalVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMovementFloorDistance(float& OutFloorDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBodyYawEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBodyPitchEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBodyPitchAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float EstimateTurningDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculatMovementFloorTransformVector(const FVector& InVector) const;
    
    UFUNCTION(BlueprintCallable)
    void ActuateBodyPitch();
    
};


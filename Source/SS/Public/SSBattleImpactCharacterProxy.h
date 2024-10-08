#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EKoratActionAttackType.h"
#include "EKoratBlastSlotType.h"
#include "EKoratBranch.h"
#include "ESSBattleImpactBlastBulletStatus.h"
#include "ESSBlaseImpactCharacterSide.h"
#include "ESSSetActionCameraType.h"
#include "KoratActionDataList.h"
#include "KoratReplaceAnimationDataList.h"
#include "SSBattleImpactCharacterProxy.generated.h"

class ASSBattleImpactProcedure;
class ASSBulletActor;
class ASSCharacter;
class UKoratCharacterTransitionFlowComponent;
class USSActionCameraDataAsset;
class USSBattleImpactCharacterProxy;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class USSBattleImpactCharacterProxy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleImpactProcedure* OwnerProcedure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* PlayerCharacter;
    
public:
    USSBattleImpactCharacterProxy();

    UFUNCTION(BlueprintCallable)
    float TransitActionFromSection(FKoratActionDataList InAction, FName InJumpSectionName);
    
    UFUNCTION(BlueprintCallable)
    float TransitAction(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    float StartVanishingAction(const float InDisappearTime, const float InAppearTime, const FVector InAppearPosition, const FRotator InAppearDirection, const FKoratActionDataList InAppearAction);
    
    UFUNCTION(BlueprintCallable)
    void SetSupporterUnlockBlock(bool bBlock);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerImpactWaistMovement(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerImpactHandLocation(const FVector& Left, const FVector& Right);
    
    UFUNCTION(BlueprintCallable)
    void SetPowerImpactHandIK(bool bEnableHandIK, bool bEnableHandIKRight);
    
    UFUNCTION(BlueprintCallable)
    void SetHaveEndEvent(bool InHaveEndEvent);
    
    UFUNCTION(BlueprintCallable)
    bool SetBulletTipLocation(const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastImpactCharacterSide(TEnumAsByte<ESSBlaseImpactCharacterSide> InSide);
    
    UFUNCTION(BlueprintCallable)
    void SetBlastImpactBlastTypeByType(EKoratBlastSlotType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetActionCamera(const ESSSetActionCameraType InSetType, USSActionCameraDataAsset* InActionCamera);
    
    UFUNCTION(BlueprintCallable)
    void ResetBulletTransform(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeBulletStatus(const TEnumAsByte<ESSBattleImpactBlastBulletStatus> InStatus, const float InDominance);
    
    UFUNCTION(BlueprintCallable)
    bool MoveCharacterTransform(FTransform NewTransform, float TravelTime);
    
    UFUNCTION(BlueprintCallable)
    bool MoveCharacterLocation(FVector NewLocation, float TravelTime);
    
    UFUNCTION(BlueprintCallable)
    bool MontageJumpSection(const FKoratReplaceAnimationDataList InAnimation, const FName InSectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWinner() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMovementGround();
    
    UFUNCTION(BlueprintCallable)
    bool IsMontagePlayingBySelf(FName& OutSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHaveEndEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlastImpactBulletShift() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float IsBlastImpactBulletScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleImpactCharacterProxy* GetTargetCharacterProxy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetPtr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetPlayerCharacter();
    
    UFUNCTION(BlueprintCallable)
    float GetMontageRemainingTimeAtSection(FName& OutSection);
    
    UFUNCTION(BlueprintCallable)
    UKoratCharacterTransitionFlowComponent* GetCharacterTransitionFlowComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCharacterTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCharacterSocketTransform(const FName InSocketName, const TEnumAsByte<ERelativeTransformSpace> InTransformSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetCharacterMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBulletFiredTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBulletActorTransform() const;
    
    UFUNCTION(BlueprintCallable)
    float GetBulleCollisionSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastImpactBulletShiftSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlastImpactBulletShiftRate() const;
    
    UFUNCTION(BlueprintCallable)
    ASSBulletActor* GetBlastImpactBulletActor(EKoratBranch& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBlastSlotType GetBlastImpactBlastType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBackupTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratActionDataList GetBackupActionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratActionAttackType GetAttackType() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableCharacterCollision();
    
    UFUNCTION(BlueprintCallable)
    void DisableCharacterCollision();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawSocketBox(const FName SocketName, const FVector Offset, const FVector Extent, const FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CompareBackupActionData(const FKoratActionDataList InActionData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform CalcTransformTarget(const FVector InTargetLocation, FRotator InTargetRotation, const FName SocketName, bool bIgnorePitchRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator CalcRotatorTarget(FVector RotateTarget, bool bIgnorePitchRotation, FRotator AdditionalRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcLocationTarget(FVector InTargetLocation, FName InSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator CalcConfrontRotator(float AdditionalAngle) const;
    
    UFUNCTION(BlueprintCallable)
    void BackupActionData();
    
};


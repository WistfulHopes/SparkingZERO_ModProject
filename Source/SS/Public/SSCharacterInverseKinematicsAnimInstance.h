#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "KoratControlRigSocketInfo.h"
#include "EKoratInverseKinematicsType.h"
#include "SSAnimInstance.h"
#include "SSInverseKinematicsParameter.h"
#include "SSCharacterInverseKinematicsAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class USSCharacterInverseKinematicsAnimInstance : public USSAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisableFootIkCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootIK_LeftFootSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootIK_RightFootSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratControlRigSocketInfo LeftSocketInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratControlRigSocketInfo RightSocketInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratInverseKinematicsType, FSSInverseKinematicsParameter> LeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratInverseKinematicsType, FSSInverseKinematicsParameter> RightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowA2B;
    
public:
    USSCharacterInverseKinematicsAnimInstance();

    UFUNCTION(BlueprintCallable)
    void ThrowHandRight(const EKoratInverseKinematicsType ThrowType, const FSSInverseKinematicsParameter& HandParams);
    
    UFUNCTION(BlueprintCallable)
    void ThrowHandLeft(const EKoratInverseKinematicsType ThrowType, const FSSInverseKinematicsParameter& HandParams);
    
    UFUNCTION(BlueprintCallable)
    void SetThrowAlpha(float A2BAlpha);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovementGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledFootIK() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetThrowBoneName(const EKoratInverseKinematicsType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetRightWristBoneName() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightFootAlphaFromStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerImpactWaistMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPowerImpactRightHandLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPowerImpactLeftHandLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetLeftWristBoneName() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftFootAlphaFromStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetFootTraceLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnablePowerImpactHandIKMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCorrectWaistOffsetFromStorage() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EndThrow(const EKoratInverseKinematicsType ThrowType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugDraw(float InDeltaT) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginThrow(const EKoratInverseKinematicsType ThrowType);
    
};


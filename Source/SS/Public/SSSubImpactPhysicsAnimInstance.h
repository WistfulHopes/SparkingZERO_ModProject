#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "KoratInverseKinematicsFootResult.h"
#include "SSAnimInstance.h"
#include "SSSubImpactPhysicsAnimInstance.generated.h"

class ASSCharacter;

UCLASS(Blueprintable, NonTransient)
class USSSubImpactPhysicsAnimInstance : public USSAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHandIK;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootRangeMax;
    
public:
    USSSubImpactPhysicsAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    int32 SearchNearlyHitResult(const TArray<FHitResult>& InHitResults, const TEnumAsByte<ECollisionChannel> InConnlitionChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsGroundMode() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetTargetWaistOffset() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetTargetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightFootAlphaFromStorage() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerImpactWaistMovement() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftFootAlphaFromStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetFootLocation(const FName SocketName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetCurrentWaistOffset() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCorrectWaistOffsetFromStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FHitResult FootTraceMethod(FVector Start, FVector END);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FHitResult FootTrace(FVector Location, float Upper, float Under);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugDraw(float InDeltaT) const;
    
    UFUNCTION(BlueprintCallable)
    FKoratInverseKinematicsFootResult CalcFootOffset(const FHitResult& HitResult, const FName BaseSocket, const FName AnkleSocket, const FName RetargetToeSocket, const FName EffectorSocket);
    
};


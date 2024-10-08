#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "KoratKawaiiPhysicsParameters.h"
#include "KoratSOSpeeds.h"
#include "SSAnimInstance.generated.h"

class ASSCharacter;
class UAnimMontage;
class USSAnimInstance;

UCLASS(Blueprintable, NonTransient)
class USSAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    USSAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* TryGetCharacterOwner() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSOSpeedsTo(const FKoratSOSpeeds& InValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetStateMachine(const FName InMachineName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayStartEvent(UAnimMontage* Montage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableIK();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableFacialRig();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditing() const;
    
    UFUNCTION(BlueprintCallable)
    void GetWindParametersWithKawaiiPhysics(FVector& WindDirection, float& WindSpeed, bool& bOverwritten);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratSOSpeeds GetSOSpeedsFrom();
    
public:
    UFUNCTION(BlueprintCallable)
    USSAnimInstance* GetLinkedAnimInstanceByTag(const FName InTag, const bool bIncludeSubInstance);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetKawaiiPhysicsComponentParameters(UPARAM(Ref) FKoratKawaiiPhysicsParameters& InOut);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentRelevantAnimTimeRemainingFraction(const FName InMachineName, FName& OutCurrentStateName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentRelevantAnimTime(const FName InMachineName, FName& OutCurrentStateName);
    
};


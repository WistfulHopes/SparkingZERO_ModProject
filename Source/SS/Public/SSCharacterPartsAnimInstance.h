#pragma once
#include "CoreMinimal.h"
#include "SSAnimInstance.h"
#include "SSCharacterPartsAnimInstance.generated.h"

class ASSCharacter;
class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class USSCharacterPartsAnimInstance : public USSAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimGraphTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSAnimInstance*> AnimGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimCurveNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AnimCurveValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SimulationBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlendCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendAlpha;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontages[5];
    
public:
    USSCharacterPartsAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBlendWeight(float BlendWeight);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetOwningActorSkeletalMeshComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetCurveValueFromOwningActorSkeletalMeshComponent(const FName InCurveName);
    
    UFUNCTION(BlueprintCallable)
    USSAnimInstance* FindAnimInstance(const FName InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintUpdateParameters();
    
};


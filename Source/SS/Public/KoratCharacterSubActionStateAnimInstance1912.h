#pragma once
#include "CoreMinimal.h"
#include "EKoratAnimType.h"
#include "SSAnimInstance.h"
#include "KoratCharacterSubActionStateAnimInstance1912.generated.h"

class UAnimMontage;
class UKoratCharacterSubActionState1912;

UCLASS(Blueprintable, NonTransient)
class UKoratCharacterSubActionStateAnimInstance1912 : public USSAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterSubActionState1912* SubActionMovingAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterSubActionState1912* SubActionAction;
    
public:
    UKoratCharacterSubActionStateAnimInstance1912();

    UFUNCTION(BlueprintCallable)
    void SetSetSectionName(const EKoratAnimType InAnimType, const int32 InPlayIndex, const FString& InSetSectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetNextSectionName(const EKoratAnimType InAnimType, const int32 InPlayIndex, const FString& InNextSectionName);
    
    UFUNCTION(BlueprintCallable)
    bool SetMontageSetNextSection(const EKoratAnimType InAnimType, const int32 InPlayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMontage(const EKoratAnimType InAnimType, const int32 InPlayIndex, UAnimMontage* InMontage);
    
    UFUNCTION(BlueprintCallable)
    void SetIsContinued(const EKoratAnimType InAnimType, const int32 InPlayIndex, const bool InIsContinued);
    
    UFUNCTION(BlueprintCallable)
    void PlayMontage(const EKoratAnimType InAnimType, const int32 InPlayIndex, UAnimMontage* InMontage);
    
    UFUNCTION(BlueprintCallable)
    FString GetSetSectionName(const EKoratAnimType InAnimType, const int32 InPlayIndex);
    
    UFUNCTION(BlueprintCallable)
    FString GetNextSectionName(const EKoratAnimType InAnimType, const int32 InPlayIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMontageSlotNum(const EKoratAnimType InAnimType, const int32 InPlayIndex);
    
    UFUNCTION(BlueprintCallable)
    FName GetMontageSlotName(const EKoratAnimType InAnimType, const int32 InPlayIndex, int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetMontage(const EKoratAnimType InAnimType, const int32 InPlayIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsContinued(const EKoratAnimType InAnimType, const int32 InPlayIndex);
    
};


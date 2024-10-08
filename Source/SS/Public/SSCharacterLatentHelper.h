#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "SSCharacterLatentEventDelegateDelegate.h"
#include "SSCharacterLatentHelper.generated.h"

class ASSCharacter;

UCLASS(Blueprintable)
class USSCharacterLatentHelper : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* Character;
    
public:
    USSCharacterLatentHelper();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    static void WaitForMontageCurrentSection(const UObject* WorldContextObject, FLatentActionInfo InLatentInfo, ASSCharacter* InCharacter, FName InSection);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    static void WaitForCompletion(const UObject* WorldContextObject, FLatentActionInfo InLatentInfo, ASSCharacter* InCharacter, const FSSCharacterLatentEventDelegate& InLatentEvent);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCompletion();
    
};


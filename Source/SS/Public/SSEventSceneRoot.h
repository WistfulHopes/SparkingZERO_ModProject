#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSEventSceneRoot.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI)
class ASSEventSceneRoot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocatorDataName;
    
    ASSEventSceneRoot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLocatorDataName(const FString& InLocatorDataName);
    
};


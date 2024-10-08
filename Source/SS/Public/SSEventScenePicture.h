#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSEventScenePicture.generated.h"

class UTexture2D;

UCLASS(Blueprintable, HideDropdown)
class ASSEventScenePicture : public AActor {
    GENERATED_BODY()
public:
    ASSEventScenePicture(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture2D(const UTexture2D* InTexture);
    
};


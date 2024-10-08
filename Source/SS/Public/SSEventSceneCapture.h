#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSEventSceneCapture.generated.h"

UCLASS(Blueprintable)
class ASSEventSceneCapture : public AActor {
    GENERATED_BODY()
public:
    ASSEventSceneCapture(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestCapture();
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSUiSubLevelManager.generated.h"

UCLASS(Blueprintable)
class ASSUiSubLevelManager : public AActor {
    GENERATED_BODY()
public:
    ASSUiSubLevelManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UnloadMap();
    
    UFUNCTION(BlueprintCallable)
    bool SwitchLoadedMap();
    
    UFUNCTION(BlueprintCallable)
    bool LoadMap();
    
};


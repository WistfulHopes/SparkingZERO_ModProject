#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSEventSceneDataAsset.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI)
class USSEventSceneDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    USSEventSceneDataAsset();

protected:
    UFUNCTION(BlueprintCallable)
    void StartCreationEnv();
    
};


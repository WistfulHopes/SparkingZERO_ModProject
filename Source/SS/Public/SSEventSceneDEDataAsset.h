#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneCompileDescriptionDE.h"
#include "SSEventSceneDataAsset.h"
#include "SSEventSceneDEDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USSEventSceneDEDataAsset : public USSEventSceneDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneCompileDescriptionDE Scene;
    
public:
    USSEventSceneDEDataAsset();

};


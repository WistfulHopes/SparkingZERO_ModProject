#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMainMenuSceneDataAssetRecord.h"
#include "SSMainMenuSceneDataAsset.generated.h"

UCLASS(Blueprintable)
class USSMainMenuSceneDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSMainMenuSceneDataAssetRecord> Records;
    
    USSMainMenuSceneDataAsset();

};


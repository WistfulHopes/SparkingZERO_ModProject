#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSSubLevelLoadParamsDataAssetRecord.h"
#include "SSSubLevelLoadParamsDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USSSubLevelLoadParamsDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSSubLevelLoadParamsDataAssetRecord> Records;
    
    USSSubLevelLoadParamsDataAsset();

};


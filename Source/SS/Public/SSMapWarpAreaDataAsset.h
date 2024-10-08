#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMapWarpAreaDataAssetRecord.h"
#include "SSMapWarpAreaDataAsset.generated.h"

UCLASS(Blueprintable)
class USSMapWarpAreaDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMapWarpAreaDataAssetRecord MapWarpAreaData;
    
    USSMapWarpAreaDataAsset();

};


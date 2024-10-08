#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSActionWarpAttrDataAssetRecord.h"
#include "SSActionWarpAttrDataAsset.generated.h"

UCLASS(Blueprintable)
class USSActionWarpAttrDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSActionWarpAttrDataAssetRecord ActionWarpAttrData;
    
    USSActionWarpAttrDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBlastUltimateParamDataAssetRecord.h"
#include "SSBlastUltimateParamDataAsset.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_SSBlastUltimateParamDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBlastUltimateParamDataAssetRecord BlastUltimateParamData;
    
    UDEPRECATED_SSBlastUltimateParamDataAsset();

};


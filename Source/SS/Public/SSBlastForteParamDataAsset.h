#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBlastForteParamDataAssetRecord.h"
#include "SSBlastForteParamDataAsset.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_SSBlastForteParamDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBlastForteParamDataAssetRecord BlastForteParamData;
    
    UDEPRECATED_SSBlastForteParamDataAsset();

};


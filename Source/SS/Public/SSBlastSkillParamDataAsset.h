#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBlastSKillParamDataAssetRecord.h"
#include "SSBlastSkillParamDataAsset.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class UDEPRECATED_SSBlastSkillParamDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBlastSKillParamDataAssetRecord BlastSkillParamData;
    
    UDEPRECATED_SSBlastSkillParamDataAsset();

};


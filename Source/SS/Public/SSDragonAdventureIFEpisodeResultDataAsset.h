#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFEpisodeRewardDataAssetRecord.h"
#include "SSDragonAdventureIFEpisodeResultDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDragonAdventureIFEpisodeResultDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDragonAdventureIFEpisodeRewardDataAssetRecord> Records;
    
public:
    USSDragonAdventureIFEpisodeResultDataAsset();

};


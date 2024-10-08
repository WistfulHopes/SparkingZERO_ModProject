#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratRewardDataList.h"
#include "SSDragonAdventureIFEpisodeRewardDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFEpisodeRewardDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EpisodeLastEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> CharaArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratRewardDataList> ItemArray;
    
    SS_API FSSDragonAdventureIFEpisodeRewardDataAssetRecord();
};


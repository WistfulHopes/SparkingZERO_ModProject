#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureIFChartStoryMapUIType.h"
#include "ESSDragonAdventureIFChartSubLevelType.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFChartCharaDataAsset.generated.h"

class USSDragonAdventureIFCharacterDataAsset;
class USSDragonAdventureIFChartMapDataAsset;
class USSDragonAdventureIFEpisodeResultDataAsset;
class USSDragonAdventureIFEventBlockDataAsset;
class USSDragonAdventureIFIslandDataAsset;
class USSDragonAdventureIFLineDataAsset;
class UWorld;

UCLASS(Blueprintable)
class USSDragonAdventureIFChartCharaDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDragonAdventureIFChartSubLevelType, TSoftObjectPtr<UWorld>> SubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCharacterDataAsset* CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, USSDragonAdventureIFIslandDataAsset*> IsLandData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFLineDataAsset* LineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFChartMapDataAsset* MapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFEpisodeResultDataAsset* EpisodeResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDragonAdventureIFEventBlockDataAsset*> EventBlockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDragonAdventureIFChartStoryMapUIType, TSoftClassPtr<UObject>> StoryMapUIPtrRecords;
    
    USSDragonAdventureIFChartCharaDataAsset();

};


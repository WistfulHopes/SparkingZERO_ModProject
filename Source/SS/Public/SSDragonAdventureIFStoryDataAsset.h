#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePlayMap.h"
#include "KoratEventSceneDataList.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFStoryDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDragonAdventureIFStoryDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayMap PlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEventSceneDataList Script;
    
    USSDragonAdventureIFStoryDataAsset();

};


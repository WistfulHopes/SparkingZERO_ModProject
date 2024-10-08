#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureIFChartCameraType.h"
#include "KoratPlayerStartDataList.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFIslandDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSDragonAdventureIFIslandDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDragonAdventureIFChartCameraType, TSoftObjectPtr<ULevelSequence>> CameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DirectingLocaterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList StartData;
    
    USSDragonAdventureIFIslandDataAsset();

};


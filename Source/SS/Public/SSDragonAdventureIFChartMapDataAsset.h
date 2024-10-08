#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFChartMapDataAssetRecord.h"
#include "SSDragonAdventureIFChartMapDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDragonAdventureIFChartMapDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDragonAdventureIFChartMapDataAssetRecord> Records;
    
public:
    USSDragonAdventureIFChartMapDataAsset();

};


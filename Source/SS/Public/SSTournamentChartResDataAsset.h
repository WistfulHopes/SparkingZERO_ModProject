#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSTournamentChartResDataAssetRecord.h"
#include "SSTournamentChartResDataAsset.generated.h"

UCLASS(Blueprintable)
class USSTournamentChartResDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSTournamentChartResDataAssetRecord> Records;
    
public:
    USSTournamentChartResDataAsset();

};


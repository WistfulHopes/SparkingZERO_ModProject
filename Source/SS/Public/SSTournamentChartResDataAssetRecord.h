#pragma once
#include "CoreMinimal.h"
#include "SSTournamentChartResDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSTournamentChartResDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> Resource;
    
    SS_API FSSTournamentChartResDataAssetRecord();
};


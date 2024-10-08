#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFChartMapSubDirBlock.generated.h"

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFChartMapSubDirBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BlockName;
    
    SS_API FSSDragonAdventureIFChartMapSubDirBlock();
};


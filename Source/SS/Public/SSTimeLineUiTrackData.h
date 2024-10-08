#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiTrackData2nd.h"
#include "SSTimeLineUiTrackData.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiTrackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTimeLineUiTrackData2nd> Tracks;
    
    SS_API FSSTimeLineUiTrackData();
};


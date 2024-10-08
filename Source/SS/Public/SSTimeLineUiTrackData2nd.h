#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiTrackData3rd.h"
#include "SSTimeLineUiTrackDataBase.h"
#include "SSTimeLineUiTrackData2nd.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiTrackData2nd : public FSSTimeLineUiTrackDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTimeLineUiTrackData3rd> Tracks;
    
    SS_API FSSTimeLineUiTrackData2nd();
};


#pragma once
#include "CoreMinimal.h"
#include "ESSTimeLineUiTrackColorType.h"
#include "SSTimeLinePlaybackBar.h"
#include "SSTimeLineUiTrackDataBase.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiTrackDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSTimeLineUiTrackColorType ColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTimeLinePlaybackBar> Bars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackId;
    
    SS_API FSSTimeLineUiTrackDataBase();
};


#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiActionAdjust.h"
#include "SSTimeLineUiDrawSetting.h"
#include "SSTimeLineUiLayout.h"
#include "SSTimeLineUiStatus.h"
#include "SSTimeLineUiStyles.h"
#include "SSTimeLineUiTrackData.h"
#include "SSTimeLineData.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiTrackData TrackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiStyles Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLayout Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiDrawSetting DrawSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiActionAdjust ActionAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiStatus Status;
    
    SS_API FSSTimeLineData();
};


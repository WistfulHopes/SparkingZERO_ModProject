#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESSTimeLineUiTrackColorType.h"
#include "SSTimeLineUiFreeCursorStyles.h"
#include "SSTimeLineUiInvalidAreaStyles.h"
#include "SSTimeLineUiLaneBarStyles.h"
#include "SSTimeLineUiPlayHeadStyles.h"
#include "SSTimeLineUiScrollBarStyles.h"
#include "SSTimeLineUiSlowStyles.h"
#include "SSTimeLineUiStartTransitionStyles.h"
#include "SSTimeLineUiTickMarkStyles.h"
#include "SSTimeLineUiTrackStyles.h"
#include "SSTimeLineUiStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLaneBarStyles LaneBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiTrackStyles TrackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiTickMarkStyles TickMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiFreeCursorStyles FreeCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiPlayHeadStyles PlayHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiSlowStyles Slow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiStartTransitionStyles StartTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiInvalidAreaStyles InvalidArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiScrollBarStyles ScrollBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSTimeLineUiTrackColorType, FLinearColor> CategoryColors;
    
    SS_API FSSTimeLineUiStyles();
};


#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiLineStyle.h"
#include "SSTimeLineUiTextStyle.h"
#include "SSTimeLineUiTickMarkStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiTickMarkStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLineStyle LaneBgTickLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLineStyle SliderTickLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLineStyle SliderSmallTickLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiTextStyle SliderTickText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLineStyle EndLineTickLine;
    
    SS_API FSSTimeLineUiTickMarkStyles();
};


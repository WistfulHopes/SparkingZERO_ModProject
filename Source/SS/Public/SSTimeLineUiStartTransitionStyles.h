#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiImageStyle.h"
#include "SSTimeLineUiStartTransitionStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiStartTransitionStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiImageStyle TransitionArea;
    
    SS_API FSSTimeLineUiStartTransitionStyles();
};


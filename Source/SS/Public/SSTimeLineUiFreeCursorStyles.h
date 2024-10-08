#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiImageStyle.h"
#include "SSTimeLineUiFreeCursorStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiFreeCursorStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiImageStyle Image;
    
    SS_API FSSTimeLineUiFreeCursorStyles();
};


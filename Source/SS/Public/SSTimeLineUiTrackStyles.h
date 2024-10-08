#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiImageStyle.h"
#include "SSTimeLineUiTextStyle.h"
#include "SSTimeLineUiTrackStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiTrackStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiImageStyle BoxBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiImageStyle TreeNodeMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiImageStyle TreeLeafMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiTextStyle LabelText;
    
    SS_API FSSTimeLineUiTrackStyles();
};


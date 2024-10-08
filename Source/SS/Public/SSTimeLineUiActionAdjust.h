#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiActionAdjust.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiActionAdjust {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeCursorSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultScalePivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyFocusHEdgeMergin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyFocusVEdgeMergin;
    
    SS_API FSSTimeLineUiActionAdjust();
};


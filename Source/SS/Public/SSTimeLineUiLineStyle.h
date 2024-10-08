#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSTimeLineUiLineStyle.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiLineStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAntiAlias;
    
    SS_API FSSTimeLineUiLineStyle();
};


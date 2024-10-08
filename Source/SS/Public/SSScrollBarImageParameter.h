#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "SSScrollBarImageParameter.generated.h"

USTRUCT(BlueprintType)
struct FSSScrollBarImageParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    SS_API FSSScrollBarImageParameter();
};


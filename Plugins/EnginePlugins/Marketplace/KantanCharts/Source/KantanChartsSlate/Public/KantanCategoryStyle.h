#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KantanCategoryStyle.generated.h"

USTRUCT(BlueprintType)
struct FKantanCategoryStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    KANTANCHARTSSLATE_API FKantanCategoryStyle();
};


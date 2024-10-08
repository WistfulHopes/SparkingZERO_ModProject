#pragma once
#include "CoreMinimal.h"
#include "KantanCategoryStyle.h"
#include "CategoryStyleManualMapping.generated.h"

USTRUCT(BlueprintType)
struct FCategoryStyleManualMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanCategoryStyle Style;
    
    KANTANCHARTSUMG_API FCategoryStyleManualMapping();
};


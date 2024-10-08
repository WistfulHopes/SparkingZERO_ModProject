#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemInequality.h"
#include "KoratCharacterItemConditionTargetThisItem.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterItemConditionTargetThisItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCostumeDamageLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCostumeScratchLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterItemInequality CostumeDamageLvNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterItemInequality CostumeScratchLvNum;
    
    SS_API FKoratCharacterItemConditionTargetThisItem();
};


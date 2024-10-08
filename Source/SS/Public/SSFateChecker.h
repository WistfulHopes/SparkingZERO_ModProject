#pragma once
#include "CoreMinimal.h"
#include "EFateExecutionOrderType.h"
#include "KoratCharacterDataList.h"
#include "SSFateChecker.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSFateChecker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, EFateExecutionOrderType> Items;
    
    FSSFateChecker();
};


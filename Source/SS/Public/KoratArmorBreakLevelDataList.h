#pragma once
#include "CoreMinimal.h"
#include "KoratArmorBreakLevelDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratArmorBreakLevelDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratArmorBreakLevelDataList();
};


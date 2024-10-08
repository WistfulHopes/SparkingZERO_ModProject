#pragma once
#include "CoreMinimal.h"
#include "KoratHitBackMovementDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratHitBackMovementDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratHitBackMovementDataList();
};


#pragma once
#include "CoreMinimal.h"
#include "KoratFacialExpressionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratFacialExpressionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratFacialExpressionDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratFacialExpressionDataList) { return 0; }


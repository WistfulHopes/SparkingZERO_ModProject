#pragma once
#include "CoreMinimal.h"
#include "KoratAiDefenseProbabilityTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAiDefenseProbabilityTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAiDefenseProbabilityTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratAiDefenseProbabilityTypeDataList) { return 0; }


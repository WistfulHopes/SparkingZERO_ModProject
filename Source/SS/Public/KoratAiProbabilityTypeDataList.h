#pragma once
#include "CoreMinimal.h"
#include "KoratAiProbabilityTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAiProbabilityTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAiProbabilityTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratAiProbabilityTypeDataList) { return 0; }


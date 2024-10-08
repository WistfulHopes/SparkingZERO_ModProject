#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratActionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratActionDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratActionDataList) { return 0; }


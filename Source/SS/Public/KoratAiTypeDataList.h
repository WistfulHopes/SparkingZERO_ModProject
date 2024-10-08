#pragma once
#include "CoreMinimal.h"
#include "KoratAiTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAiTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAiTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratAiTypeDataList) { return 0; }


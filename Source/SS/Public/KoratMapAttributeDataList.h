#pragma once
#include "CoreMinimal.h"
#include "KoratMapAttributeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMapAttributeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMapAttributeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratMapAttributeDataList) { return 0; }


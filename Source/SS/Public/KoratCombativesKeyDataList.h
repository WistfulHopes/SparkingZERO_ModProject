#pragma once
#include "CoreMinimal.h"
#include "KoratCombativesKeyDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCombativesKeyDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCombativesKeyDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratCombativesKeyDataList) { return 0; }


#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditWordTextDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditWordTextDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditWordTextDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDRMEditWordTextDataList) { return 0; }


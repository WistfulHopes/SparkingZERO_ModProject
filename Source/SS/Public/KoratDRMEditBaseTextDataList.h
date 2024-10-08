#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditBaseTextDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditBaseTextDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditBaseTextDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDRMEditBaseTextDataList) { return 0; }


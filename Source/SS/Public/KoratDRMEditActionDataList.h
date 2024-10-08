#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditActionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditActionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditActionDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDRMEditActionDataList) { return 0; }


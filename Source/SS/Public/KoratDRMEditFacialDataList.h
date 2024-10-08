#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditFacialDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditFacialDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditFacialDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDRMEditFacialDataList) { return 0; }


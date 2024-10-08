#pragma once
#include "CoreMinimal.h"
#include "KoratEditPartsTextDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEditPartsTextDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEditPartsTextDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratEditPartsTextDataList) { return 0; }


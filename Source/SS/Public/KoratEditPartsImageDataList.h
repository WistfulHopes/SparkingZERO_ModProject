#pragma once
#include "CoreMinimal.h"
#include "KoratEditPartsImageDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEditPartsImageDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEditPartsImageDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratEditPartsImageDataList) { return 0; }


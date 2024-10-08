#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterItemDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterItemDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratCharacterItemDataList) { return 0; }


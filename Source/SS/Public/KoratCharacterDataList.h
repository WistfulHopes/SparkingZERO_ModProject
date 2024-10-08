#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratCharacterDataList) { return 0; }


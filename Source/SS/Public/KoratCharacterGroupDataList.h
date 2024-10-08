#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterGroupDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterGroupDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterGroupDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratCharacterGroupDataList) { return 0; }

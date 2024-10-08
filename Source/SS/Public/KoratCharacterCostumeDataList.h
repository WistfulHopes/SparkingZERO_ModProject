#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterCostumeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterCostumeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterCostumeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratCharacterCostumeDataList) { return 0; }


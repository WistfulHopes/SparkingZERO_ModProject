#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterEffectColorSetDataTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterEffectColorSetDataTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratCharacterEffectColorSetDataTypeDataList) { return 0; }


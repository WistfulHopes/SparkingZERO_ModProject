#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorReplaceTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratCharacterEffectColorReplaceTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratCharacterEffectColorReplaceTypeDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratCharacterEffectColorReplaceTypeDataList) { return 0; }


#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterEffectColorSetData.generated.h"

class USSEffectColorDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterEffectColorSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEffectColorDataAsset* ColorData;
    
    SS_API FKoratCharacterEffectColorSetData();
};


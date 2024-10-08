#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "PowerImpactNGCharacterArray.generated.h"

USTRUCT(BlueprintType)
struct FPowerImpactNGCharacterArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> CharacterDataList;
    
    SS_API FPowerImpactNGCharacterArray();
};


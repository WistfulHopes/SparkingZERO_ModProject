#pragma once
#include "CoreMinimal.h"
#include "SSEffectPedestalLevelSequencePlaySection.h"
#include "SSEffectPedestalLevelSequencePlayOrder.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSEffectPedestalLevelSequencePlayOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEffectPedestalLevelSequencePlaySection> PlaySections;
    
    SS_API FSSEffectPedestalLevelSequencePlayOrder();
};


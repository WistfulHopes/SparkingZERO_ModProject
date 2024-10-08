#pragma once
#include "CoreMinimal.h"
#include "SSEffectPedestalLevelSequencePlaySection.generated.h"

USTRUCT(BlueprintType)
struct FSSEffectPedestalLevelSequencePlaySection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    SS_API FSSEffectPedestalLevelSequencePlaySection();
};


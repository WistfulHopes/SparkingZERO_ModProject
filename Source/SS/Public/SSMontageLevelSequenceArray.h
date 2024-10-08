#pragma once
#include "CoreMinimal.h"
#include "SSMontageLevelSequence.h"
#include "SSMontageLevelSequenceArray.generated.h"

USTRUCT(BlueprintType)
struct FSSMontageLevelSequenceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMontageLevelSequence> MontageLevelSequences;
    
    SS_API FSSMontageLevelSequenceArray();
};


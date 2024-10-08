#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSequenceRuntimeDescriptionDE.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSEventSceneSequenceRuntimeDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    SS_API FSSEventSceneSequenceRuntimeDescriptionDE();
};


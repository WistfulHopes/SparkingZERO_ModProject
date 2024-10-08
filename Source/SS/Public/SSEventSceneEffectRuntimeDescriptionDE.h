#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSequenceRuntimeDescriptionDE.h"
#include "SSEventSceneEffectRuntimeDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneEffectRuntimeDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE EffectLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE SlowTriggerFlashEffectLevelSequence;
    
    SS_API FSSEventSceneEffectRuntimeDescriptionDE();
};


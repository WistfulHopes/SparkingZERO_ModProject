#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSequenceRuntimeDescriptionDE.h"
#include "SSEventSceneSituationRuntimeDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneSituationRuntimeDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE SituationLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE PreviewLevelSequence;
    
    SS_API FSSEventSceneSituationRuntimeDescriptionDE();
};


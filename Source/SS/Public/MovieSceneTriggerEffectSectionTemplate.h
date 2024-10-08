#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "ESSKeyInputType.h"
#include "KoratTriggerEffectParameters.h"
#include "MovieSceneTriggerEffectSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTriggerEffectSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSKeyInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratTriggerEffectParameters Params;
    
    SS_API FMovieSceneTriggerEffectSectionTemplate();
};


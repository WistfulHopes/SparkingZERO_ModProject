#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "MovieSceneKoratParameterSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneKoratParameterSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    SS_API FMovieSceneKoratParameterSectionTemplate();
};


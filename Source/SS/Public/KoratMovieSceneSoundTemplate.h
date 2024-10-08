#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "KoratMovieSceneSoundTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneSoundTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    SS_API FKoratMovieSceneSoundTemplate();
};


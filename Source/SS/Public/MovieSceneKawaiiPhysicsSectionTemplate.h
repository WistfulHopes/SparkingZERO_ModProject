#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "MovieSceneKawaiiPhysicsSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneKawaiiPhysicsSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    SS_API FMovieSceneKawaiiPhysicsSectionTemplate();
};


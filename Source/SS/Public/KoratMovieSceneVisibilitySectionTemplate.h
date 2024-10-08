#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "Sections/MovieSceneBoolSection.h"
#include "KoratMovieSceneVisibilitySectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneVisibilitySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel BoolCurve;
    
public:
    SS_API FKoratMovieSceneVisibilitySectionTemplate();
	SS_API FKoratMovieSceneVisibilitySectionTemplate(const UMovieSceneBoolSection& Section, const UMovieScenePropertyTrack& Track);
};


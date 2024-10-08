#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "KoratMovieSceneLookAtTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneLookAtTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UKoratMovieSceneLookAtTrack();


    // Fix for true pure virtual functions not being implemented
    
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


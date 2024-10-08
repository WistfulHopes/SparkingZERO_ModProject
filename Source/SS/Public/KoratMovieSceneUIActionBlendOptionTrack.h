#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "KoratMovieSceneUIActionBlendOptionTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneUIActionBlendOptionTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UKoratMovieSceneUIActionBlendOptionTrack();


    // Fix for true pure virtual functions not being implemented
    
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


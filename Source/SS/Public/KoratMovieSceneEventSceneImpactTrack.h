#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "KoratMovieSceneEventSceneImpactTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneEventSceneImpactTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UKoratMovieSceneEventSceneImpactTrack();


    // Fix for true pure virtual functions not being implemented
    
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


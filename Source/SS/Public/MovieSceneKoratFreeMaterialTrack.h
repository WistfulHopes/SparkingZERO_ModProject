#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieSceneMaterialTrack.h"
#include "MovieSceneKoratFreeMaterialTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneKoratFreeMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneKoratFreeMaterialTrack(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


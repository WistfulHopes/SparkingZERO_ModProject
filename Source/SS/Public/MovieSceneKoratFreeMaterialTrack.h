#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "Tracks/MovieSceneMaterialTrack.h"
#include "MovieSceneKoratFreeMaterialTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneKoratFreeMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
     UMovieSceneKoratFreeMaterialTrack(const FObjectInitializer& ObjectInitializer);

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
    virtual FText GetDisplayName() const;

};
#pragma once
#include "CoreMinimal.h"
#include "Tracks/MovieSceneBoolTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Evaluation/MovieSceneEvaluationTrack.h"
#include "Tracks/MovieSceneEventTrack.h"
#include "KoratMovieSceneVisibilityTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneVisibilityTrack : public UMovieSceneBoolTrack {
    GENERATED_BODY()
public:
    UKoratMovieSceneVisibilityTrack();

    virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
    virtual class UMovieSceneSection* CreateNewSection() override;
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
    virtual void AddSection(UMovieSceneSection& Section) override;
    virtual void RemoveSection(UMovieSceneSection& Section) override;
    virtual bool HasSection(const UMovieSceneSection& Section) const override;
    virtual bool IsEmpty() const override;
    virtual const TArray<UMovieSceneSection*>& GetAllSections() const override;
#if WITH_EDITOR
    virtual FText GetDisplayName() const override;
#endif

};


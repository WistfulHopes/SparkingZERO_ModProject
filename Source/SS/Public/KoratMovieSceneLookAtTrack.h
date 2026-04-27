#pragma once
#include "CoreMinimal.h"
#include "KoratMovieSceneLookAtSection.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "KoratMovieSceneLookAtTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneLookAtTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UKoratMovieSceneLookAtTrack();

    virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
    virtual UMovieSceneSection* CreateNewSection() override;
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
#if WITH_EDITOR
    virtual FText GetDisplayName() const override;
#endif
};
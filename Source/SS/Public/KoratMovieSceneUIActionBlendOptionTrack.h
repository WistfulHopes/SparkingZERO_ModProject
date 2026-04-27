#pragma once
#include "CoreMinimal.h"
#include "KoratMovieSceneUIActionBlendOptionSection.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "KoratMovieSceneUIActionBlendOptionTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneUIActionBlendOptionTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UKoratMovieSceneUIActionBlendOptionTrack();

    virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
    virtual UMovieSceneSection* CreateNewSection() override;
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
#if WITH_EDITOR
    virtual FText GetDisplayName() const override;
#endif
};
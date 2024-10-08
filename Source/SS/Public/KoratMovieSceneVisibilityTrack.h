#pragma once
#include "CoreMinimal.h"
#include "Tracks/MovieSceneBoolTrack.h"
#include "KoratMovieSceneVisibilityTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneVisibilityTrack : public UMovieSceneBoolTrack {
    GENERATED_BODY()
public:
    UKoratMovieSceneVisibilityTrack();

    virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
    virtual class UMovieSceneSection* CreateNewSection() override;
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
};


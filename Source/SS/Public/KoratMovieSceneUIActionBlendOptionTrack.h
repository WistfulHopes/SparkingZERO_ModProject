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


    // Fix for true pure virtual functions not being implemented

    bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
    {
        return SectionClass == UKoratMovieSceneUIActionBlendOptionSection::StaticClass();
    }

    UMovieSceneSection* UKoratMovieSceneUIActionBlendOptionTrack::CreateNewSection()
    {
        return NewObject<UKoratMovieSceneUIActionBlendOptionSection>(this, NAME_None, RF_Transactional);
    }
    
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


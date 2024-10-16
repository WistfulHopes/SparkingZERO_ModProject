#pragma once
#include "CoreMinimal.h"
#include "KoratMovieSceneAttachSection.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "KoratMovieSceneAttachTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneAttachTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UKoratMovieSceneAttachTrack();


    // Fix for true pure virtual functions not being implemented

    bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
    {
        return SectionClass == UKoratMovieSceneAttachSection::StaticClass();
    }

    UMovieSceneSection* UKoratMovieSceneAttachTrack::CreateNewSection()
    {
        return NewObject<UKoratMovieSceneAttachSection>(this, NAME_None, RF_Transactional);
    }
    
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


#pragma once
#include "CoreMinimal.h"
#include "KoratMovieSceneOutlineStencilIndexSection.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "KoratMovieSceneOutlineStencilIndexTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneOutlineStencilIndexTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UKoratMovieSceneOutlineStencilIndexTrack();


    // Fix for true pure virtual functions not being implemented

    bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
    {
        return SectionClass == UKoratMovieSceneOutlineStencilIndexSection::StaticClass();
    }

    UMovieSceneSection* UKoratMovieSceneOutlineStencilIndexTrack::CreateNewSection()
    {
        return NewObject<UKoratMovieSceneOutlineStencilIndexSection>(this, NAME_None, RF_Transactional);
    }
    
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


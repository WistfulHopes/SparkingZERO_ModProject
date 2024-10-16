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


    // Fix for true pure virtual functions not being implemented

    bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
    {
        return SectionClass == UKoratMovieSceneLookAtSection::StaticClass();
    }

    UMovieSceneSection* UKoratMovieSceneLookAtTrack::CreateNewSection()
    {
        return NewObject<UKoratMovieSceneLookAtSection>(this, NAME_None, RF_Transactional);
    }
    
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


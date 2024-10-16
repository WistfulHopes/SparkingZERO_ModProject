#pragma once
#include "CoreMinimal.h"
#include "KoratMovieSceneEventSceneFpsCameraSection.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "KoratMovieSceneEventSceneFpsCameraTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneEventSceneFpsCameraTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UKoratMovieSceneEventSceneFpsCameraTrack();


    // Fix for true pure virtual functions not being implemented

    bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const
    {
        return SectionClass == UKoratMovieSceneEventSceneFpsCameraSection::StaticClass();
    }

    UMovieSceneSection* UKoratMovieSceneEventSceneFpsCameraTrack::CreateNewSection()
    {
        return NewObject<UKoratMovieSceneEventSceneFpsCameraSection>(this, NAME_None, RF_Transactional);
    }
    
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


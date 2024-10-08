#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneLipSyncAtomTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class CRIWAREADXLIPSYNC_API UMovieSceneLipSyncAtomTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> AtomSections;
    
public:
    UMovieSceneLipSyncAtomTrack();


    // Fix for true pure virtual functions not being implemented

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override
    {
        return FMovieSceneEvalTemplatePtr();
    }
};


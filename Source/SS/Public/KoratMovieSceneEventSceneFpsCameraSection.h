#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneFpsCameraSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneEventSceneFpsCameraSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData LookAtReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel Enable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Alpha;
    
public:
    UKoratMovieSceneEventSceneFpsCameraSection();

};


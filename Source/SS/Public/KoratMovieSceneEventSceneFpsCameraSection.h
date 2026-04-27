#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneFpsCameraSection.generated.h"

struct FKoratMovieSceneEventSceneFpsCameraTemplate; // forward

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneEventSceneFpsCameraSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UKoratMovieSceneEventSceneFpsCameraSection();
    
    const FMovieSceneActorReferenceData& GetLookAtReference() const { return LookAtReference; }
    const FMovieSceneBoolChannel& GetEnable() const { return Enable; }
    const FMovieSceneFloatChannel& GetAlpha() const { return Alpha; }
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData LookAtReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel Enable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Alpha;

};
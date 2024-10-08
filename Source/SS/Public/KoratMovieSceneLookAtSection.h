#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "Channels/MovieSceneStringChannel.h"
#include "KoratMovieSceneLookAtSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneLookAtSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel PartFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel EnableLookat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel UpdateLookAt;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData Target1stReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel Target1stSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData Target2ndReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel Target2ndSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Alpha;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel EnableOverrideBlendTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel OverrideBlendTime;
    
public:
    UKoratMovieSceneLookAtSection();

};


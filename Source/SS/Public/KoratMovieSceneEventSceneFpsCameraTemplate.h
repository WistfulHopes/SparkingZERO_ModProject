#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "KoratMovieSceneEventSceneFpsCameraTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneEventSceneFpsCameraTemplate : public FMovieSceneEvalTemplate {
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
    SS_API FKoratMovieSceneEventSceneFpsCameraTemplate();
};


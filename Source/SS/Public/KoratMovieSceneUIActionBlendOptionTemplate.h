#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneObjectPathChannel.h"
#include "KoratMovieSceneUIActionBlendOptionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneUIActionBlendOptionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel OverrideBlendIn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlendInBlendTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel BlendInBlendOption;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectPathChannel BlendInCustomCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel OverrideBlendOut;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlendOutBlendTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel BlendOutBlendOption;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectPathChannel BlendOutCustomCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlendOutTriggerTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel EnableAutoBlendOut;
    
public:
    SS_API FKoratMovieSceneUIActionBlendOptionTemplate();
};


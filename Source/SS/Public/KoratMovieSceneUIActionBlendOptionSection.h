#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneObjectPathChannel.h"
#include "MovieSceneSection.h"
#include "KoratMovieSceneUIActionBlendOptionSection.generated.h"

struct FKoratMovieSceneUIActionBlendOptionTemplate;

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneUIActionBlendOptionSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UKoratMovieSceneUIActionBlendOptionSection();
    
    const FMovieSceneBoolChannel& GetOverrideBlendIn() const { return OverrideBlendIn; }
    const FMovieSceneFloatChannel& GetBlendInBlendTime() const { return BlendInBlendTime; }
    const FMovieSceneByteChannel& GetBlendInBlendOption() const { return BlendInBlendOption; }
    const FMovieSceneObjectPathChannel& GetBlendInCustomCurve() const { return BlendInCustomCurve; }
    const FMovieSceneBoolChannel& GetOverrideBlendOut() const { return OverrideBlendOut; }
    const FMovieSceneFloatChannel& GetBlendOutBlendTime() const { return BlendOutBlendTime; }
    const FMovieSceneByteChannel& GetBlendOutBlendOption() const { return BlendOutBlendOption; }
    const FMovieSceneObjectPathChannel& GetBlendOutCustomCurve() const { return BlendOutCustomCurve; }
    const FMovieSceneFloatChannel& GetBlendOutTriggerTime() const { return BlendOutTriggerTime; }
    const FMovieSceneBoolChannel& GetEnableAutoBlendOut() const { return EnableAutoBlendOut; }
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel OverrideBlendIn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlendInBlendTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel BlendInBlendOption;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ObjectType="/Script/Engine.CurveFloat", AllowedClasses="/Script/Engine.CurveFloat"))
    FMovieSceneObjectPathChannel BlendInCustomCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel OverrideBlendOut;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlendOutBlendTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneByteChannel BlendOutBlendOption;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ObjectType="/Script/Engine.CurveFloat", AllowedClasses="/Script/Engine.CurveFloat"))
    FMovieSceneObjectPathChannel BlendOutCustomCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlendOutTriggerTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel EnableAutoBlendOut;

};
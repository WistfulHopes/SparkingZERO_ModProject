#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "Channels/MovieSceneStringChannel.h"
#include "KoratMovieSceneLookAtSection.generated.h"

struct FKoratMovieSceneLookAtTemplate; // forward

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneLookAtSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UKoratMovieSceneLookAtSection();
    
    const FMovieSceneByteChannel& GetPartFlags() const { return PartFlags; }
    const FMovieSceneBoolChannel& GetEnableLookat() const { return EnableLookat; }
    const FMovieSceneBoolChannel& GetUpdateLookAt() const { return UpdateLookAt; }
    const FMovieSceneActorReferenceData& GetTarget1stReference() const { return Target1stReference; }
    const FMovieSceneStringChannel& GetTarget1stSocketName() const { return Target1stSocketName; }
    const FMovieSceneActorReferenceData& GetTarget2ndReference() const { return Target2ndReference; }
    const FMovieSceneStringChannel& GetTarget2ndSocketName() const { return Target2ndSocketName; }
    const FMovieSceneFloatChannel& GetAlpha() const { return Alpha; }
    const FMovieSceneBoolChannel& GetEnableOverrideBlendTime() const { return EnableOverrideBlendTime; }
    const FMovieSceneFloatChannel& GetOverrideBlendTime() const { return OverrideBlendTime; }
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
};
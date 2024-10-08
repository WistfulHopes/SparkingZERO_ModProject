#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "Channels/MovieSceneStringChannel.h"
#include "KoratMovieSceneAttachMask.h"
#include "KoratMovieSceneAttachSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneAttachSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieSceneAttachMask AttachMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData PositionReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData RotationReference;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel PositionFirstSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel PositionSecondSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel RotationFirstSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel RotationSecondSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel PositionBlendRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel RotationBlendRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel PositionFollowing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel RotationFollowing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel YAxisFixed;
    
public:
    UKoratMovieSceneAttachSection();

};


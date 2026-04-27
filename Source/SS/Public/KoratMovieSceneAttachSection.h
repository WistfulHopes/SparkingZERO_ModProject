#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "Channels/MovieSceneStringChannel.h"
#include "KoratMovieSceneAttachMask.h"
#include "KoratMovieSceneAttachSection.generated.h"

struct FKoratMovieSceneAttachTemplate; // forward

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneAttachSection : public UMovieSceneSection
{
    GENERATED_BODY()
public:
    UKoratMovieSceneAttachSection();

    const FMovieSceneActorReferenceData& GetPositionReference() const { return PositionReference; }
    const FMovieSceneActorReferenceData& GetRotationReference() const { return RotationReference; }

    const FMovieSceneStringChannel& GetPositionFirstSocketName()  const { return PositionFirstSocketName; }
    const FMovieSceneStringChannel& GetPositionSecondSocketName() const { return PositionSecondSocketName; }
    const FMovieSceneStringChannel& GetRotationFirstSocketName()  const { return RotationFirstSocketName; }
    const FMovieSceneStringChannel& GetRotationSecondSocketName() const { return RotationSecondSocketName; }

    const FMovieSceneFloatChannel& GetPositionBlendRate() const { return PositionBlendRate; }
    const FMovieSceneFloatChannel& GetRotationBlendRate() const { return RotationBlendRate; }

    const FMovieSceneBoolChannel& GetPositionFollowing() const { return PositionFollowing; }
    const FMovieSceneBoolChannel& GetRotationFollowing() const { return RotationFollowing; }
    const FMovieSceneBoolChannel& GetYAxisFixed()        const { return YAxisFixed; }

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
};
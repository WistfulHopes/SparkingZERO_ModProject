#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtomSelectorParam.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "Sections/MovieSceneParameterSection.h"
#include "MovieSceneAtomSection.generated.h"

class USoundAtomCue;
class USoundAttenuation;

UCLASS(Blueprintable)
class CRIWAREMOVIESCENES_API UMovieSceneAtomSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel SoundVolume;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel PitchMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData AttachActorData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinueSoundWhenSequenceIsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AsrRackIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomSelectorParam> SelectorLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
public:
    UMovieSceneAtomSection();

    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FFrameNumber InStartOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameNumber GetStartOffset() const;
    
};


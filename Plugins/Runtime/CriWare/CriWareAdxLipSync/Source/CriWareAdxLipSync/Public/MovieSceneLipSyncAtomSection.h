#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sound/SoundAttenuation.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "AtomLipSyncSectionParameter.h"
#include "MovieSceneLipSyncAtomSection.generated.h"

class UAtomLipSyncSectionParameterSettings;
class USoundAtomCue;
class USoundAttenuation;

UCLASS(Blueprintable)
class CRIWAREADXLIPSYNC_API UMovieSceneLipSyncAtomSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAtomLipSyncSectionParameterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtomLipSyncSectionParameterSettings* AtomLipSyncSectionParameterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtomLipSyncSectionParameter AtomLipSyncSectionParameterOverrides;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel SoundVolume;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAttenuationSettings AttenuationOverrides;
    
public:
    UMovieSceneLipSyncAtomSection();

    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FFrameNumber InStartOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameNumber GetStartOffset() const;
    
};


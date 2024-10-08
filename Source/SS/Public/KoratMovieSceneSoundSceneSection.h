#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sections/MovieSceneParameterSection.h"
#include "ControlTypeParameterNameAndCurve.h"
#include "EKoratSequenceSoundControlType.h"
#include "ESSSoundGroupType.h"
#include "KoratMovieSceneSoundSceneSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMovieSceneSoundSceneSection : public UMovieSceneParameterSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundCueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSSoundGroupType SoundGroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopSoundEndPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TickEvenWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlTypeParameterNameAndCurve EnumCurve;
    
    UKoratMovieSceneSoundSceneSection();

    UFUNCTION(BlueprintCallable)
    void AddControlTypeParameterKey(FName InParameterName, FFrameNumber InTime, EKoratSequenceSoundControlType InValue);
    
};


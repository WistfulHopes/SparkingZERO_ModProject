#pragma once
#include "CoreMinimal.h"
#include "EKoratMovieSceneEventSceneSpeakerType.h"
#include "EKoratMovieSceneEventSceneTriggerType.h"
#include "KoratMovieSceneEventScenePayload.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMovieSceneEventScenePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratMovieSceneEventSceneTriggerType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDisplayTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNarration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratMovieSceneEventSceneSpeakerType SpeakerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenSpeakerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSpeakerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SpeakerNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratMovieSceneEventSceneSpeakerType> SubSpeakerTypes;
    
    FKoratMovieSceneEventScenePayload();
};


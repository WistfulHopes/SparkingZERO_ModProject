#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataList.h"
#include "SSEventSceneCameraRuntimeDescriptionDE.h"
#include "SSEventSceneCharacterRuntimeDescriptionDE.h"
#include "SSEventSceneEffectRuntimeDescriptionDE.h"
#include "SSEventSceneSequenceRuntimeDescriptionDE.h"
#include "SSEventSceneSituationRuntimeDescriptionDE.h"
#include "SSEventSceneSubtitleRuntimeDescriptionDE.h"
#include "SSEventSceneCutsceneRuntimeDescriptionDE.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSEventSceneCutsceneRuntimeDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE PostProcessOverrideLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE PencilTransitionLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE BlurTransitionLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneCharacterRuntimeDescriptionDE> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneCameraRuntimeDescriptionDE Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSituationRuntimeDescriptionDE Situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneEffectRuntimeDescriptionDE Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneSubtitleRuntimeDescriptionDE> Subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* Picture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE LayerLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE SEFILevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE SEFOLevelSequence;
    
    SS_API FSSEventSceneCutsceneRuntimeDescriptionDE();
};


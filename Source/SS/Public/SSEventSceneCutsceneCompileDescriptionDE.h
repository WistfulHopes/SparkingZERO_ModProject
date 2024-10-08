#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataList.h"
#include "KoratDRMEditLayerDataList.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratDRMEditSituationDataList.h"
#include "SSEventSceneCameraCompileDescriptionDE.h"
#include "SSEventSceneCharacterCompileDescriptionDE.h"
#include "SSEventSceneEffectCompileDescriptionDE.h"
#include "SSEventSceneSubtitleCompileDescriptionDE.h"
#include "SSEventSceneCutsceneCompileDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneCutsceneCompileDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneCharacterCompileDescriptionDE> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneCameraCompileDescriptionDE Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditSituationDataList Situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneEffectCompileDescriptionDE Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneSubtitleCompileDescriptionDE> Subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlowStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList Picture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditLayerDataList Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList EmbeddedThumbnail;
    
    SS_API FSSEventSceneCutsceneCompileDescriptionDE();
};


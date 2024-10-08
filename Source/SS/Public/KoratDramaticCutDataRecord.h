#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticCutCharacterType.h"
#include "KoratMapDataList.h"
#include "SSEventSceneCharacterCompileDescription.h"
#include "SSEventSceneCutsceneCompileDescriptionDE.h"
#include "KoratDramaticCutDataRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticCutDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList PlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratDramaticCutCharacterType, FSSEventSceneCharacterCompileDescription> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneCutsceneCompileDescriptionDE CutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTempAssembleThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThumbnailCaptureFlame;
    
    FKoratDramaticCutDataRecord();
};


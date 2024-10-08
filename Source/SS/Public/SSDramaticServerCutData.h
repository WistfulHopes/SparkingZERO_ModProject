#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EKoratDramaticCutCharacterType.h"
#include "KoratMapDataList.h"
#include "SSEventSceneCharacterCompileDescription.h"
#include "SSEventSceneCutsceneCompileDescriptionDE.h"
#include "SSDramaticServerCutData.generated.h"

UCLASS(Blueprintable)
class USSDramaticServerCutData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList PlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratDramaticCutCharacterType, FSSEventSceneCharacterCompileDescription> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneCutsceneCompileDescriptionDE CutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThumbnailCaptureFlame;
    
    USSDramaticServerCutData();

};


#pragma once
#include "CoreMinimal.h"
#include "EMainMenuSceneArea.h"
#include "SSMainMenuCharacterData.h"
#include "SSMainMenuSceneTransitionData.h"
#include "SSMainMenuSubSceneData.h"
#include "SSMainMenuSceneDataAssetRecord.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FSSMainMenuSceneDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuSceneArea SceneAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> AreaSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMainMenuCharacterData MainCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMainMenuSceneTransitionData Transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSubSceneData> SubScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuCharacterData> BackgroundCharacterList;
    
    SS_API FSSMainMenuSceneDataAssetRecord();
};


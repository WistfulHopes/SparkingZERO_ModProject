#pragma once
#include "CoreMinimal.h"
#include "KoratMapDataList.h"
#include "SSEventSceneCharacterCompileDescription.h"
#include "SSEventSceneCutsceneCompileDescriptionDE.h"
#include "SSEventSceneCompileDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneCompileDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList PlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneCharacterCompileDescription> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneCutsceneCompileDescriptionDE> CutScenes;
    
    SS_API FSSEventSceneCompileDescriptionDE();
};


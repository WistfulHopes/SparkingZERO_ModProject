#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuCharacterData.h"
#include "SSMainMenuLevelTransitionData.h"
#include "SSMainMenuSubSceneChild.h"
#include "SSMainMenuSubSceneData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSMainMenuSubSceneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuCharacterData> CharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> FixedCamSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMainMenuLevelTransitionData LevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSubSceneChild> ChildScene;
    
    SS_API FSSMainMenuSubSceneData();
};


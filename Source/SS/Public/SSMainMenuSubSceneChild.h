#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuCharacterData.h"
#include "SSMainMenuLevelTransitionData.h"
#include "SSMainMenuSubSceneGrandchild.h"
#include "SSMainMenuSubSceneChild.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSMainMenuSubSceneChild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuCharacterData> CharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> FixedCamSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMainMenuLevelTransitionData LevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSubSceneGrandchild> ChildScene;
    
    SS_API FSSMainMenuSubSceneChild();
};


#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuCharacterData.h"
#include "SSMainMenuLevelTransitionData.h"
#include "SSMainMenuSubSceneGreatGreatGrandchild.h"
#include "SSMainMenuSubSceneGreatGrandchild.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuSubSceneGreatGrandchild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuCharacterData> CharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMainMenuLevelTransitionData LevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSubSceneGreatGreatGrandchild> ChildScene;
    
    SS_API FSSMainMenuSubSceneGreatGrandchild();
};


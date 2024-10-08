#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuLevelTransitionData.h"
#include "SSMainMenuSubSceneGreatGreatGrandchild.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuSubSceneGreatGreatGrandchild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMainMenuLevelTransitionData LevelTransition;
    
    SS_API FSSMainMenuSubSceneGreatGreatGrandchild();
};


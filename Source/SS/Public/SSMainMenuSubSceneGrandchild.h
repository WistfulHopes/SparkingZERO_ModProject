#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuCharacterData.h"
#include "SSMainMenuLevelTransitionData.h"
#include "SSMainMenuSubSceneGreatGrandchild.h"
#include "SSMainMenuSubSceneGrandchild.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSMainMenuSubSceneGrandchild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuCharacterData> CharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> FixedCamSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMainMenuLevelTransitionData LevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSubSceneGreatGrandchild> ChildScene;
    
    SS_API FSSMainMenuSubSceneGrandchild();
};


#pragma once
#include "CoreMinimal.h"
#include "EMainMenuSceneArea.h"
#include "SSMainMenuTransitionCharacterArray.h"
#include "SSSubLevelTransitionData.h"
#include "SSMainMenuTransitionData.generated.h"

class ASSMenuCharacterManager;

USTRUCT(BlueprintType)
struct FSSMainMenuTransitionData : public FSSSubLevelTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMainMenuSceneArea, FSSMainMenuTransitionCharacterArray> AreaCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSMenuCharacterManager* MenuCharacterManager;
    
    SS_API FSSMainMenuTransitionData();
};


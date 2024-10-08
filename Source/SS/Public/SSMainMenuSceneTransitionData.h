#pragma once
#include "CoreMinimal.h"
#include "EMainMenuSceneArea.h"
#include "SSMainMenuSceneTransitionSequence.h"
#include "SSMainMenuSceneTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuSceneTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMainMenuSceneArea, FSSMainMenuSceneTransitionSequence> From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMainMenuSceneArea, FSSMainMenuSceneTransitionSequence> To;
    
    SS_API FSSMainMenuSceneTransitionData();
};


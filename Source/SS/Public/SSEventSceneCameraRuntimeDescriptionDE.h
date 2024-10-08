#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSequenceRuntimeDescriptionDE.h"
#include "SSEventSceneCameraRuntimeDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneCameraRuntimeDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE CameraLevelSequence;
    
    SS_API FSSEventSceneCameraRuntimeDescriptionDE();
};


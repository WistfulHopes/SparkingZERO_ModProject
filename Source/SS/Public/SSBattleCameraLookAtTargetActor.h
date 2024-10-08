#pragma once
#include "CoreMinimal.h"
#include "SSCameraLookAtActor.h"
#include "SSBattleCameraLookAtTargetActor.generated.h"

UCLASS(Blueprintable)
class ASSBattleCameraLookAtTargetActor : public ASSCameraLookAtActor {
    GENERATED_BODY()
public:
    ASSBattleCameraLookAtTargetActor(const FObjectInitializer& ObjectInitializer);

};


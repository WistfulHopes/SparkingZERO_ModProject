#pragma once
#include "CoreMinimal.h"
#include "SSCameraLookAtActor.h"
#include "SSBattleCameraLookAtActor.generated.h"

UCLASS(Blueprintable)
class ASSBattleCameraLookAtActor : public ASSCameraLookAtActor {
    GENERATED_BODY()
public:
    ASSBattleCameraLookAtActor(const FObjectInitializer& ObjectInitializer);

};


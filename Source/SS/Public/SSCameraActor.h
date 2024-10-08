#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "SSCameraActor.generated.h"

UCLASS(Blueprintable)
class ASSCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    ASSCameraActor(const FObjectInitializer& ObjectInitializer);

};


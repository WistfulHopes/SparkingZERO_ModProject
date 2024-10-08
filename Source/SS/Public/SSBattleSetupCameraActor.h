#pragma once
#include "CoreMinimal.h"
#include "SSCutCameraActor.h"
#include "SSBattleSetupCameraActor.generated.h"

UCLASS(Blueprintable)
class ASSBattleSetupCameraActor : public ASSCutCameraActor {
    GENERATED_BODY()
public:
    ASSBattleSetupCameraActor(const FObjectInitializer& ObjectInitializer);

};


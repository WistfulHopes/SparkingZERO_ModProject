#pragma once
#include "CoreMinimal.h"
#include "SSBattleSetupController.h"
#include "SSOnlineBattleSetupController.generated.h"

UCLASS(Blueprintable)
class ASSOnlineBattleSetupController : public ASSBattleSetupController {
    GENERATED_BODY()
public:
    ASSOnlineBattleSetupController(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "SSMenuGameModeBase.h"
#include "SSMainMenuGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASSMainMenuGameModeBase : public ASSMenuGameModeBase {
    GENERATED_BODY()
public:
    ASSMainMenuGameModeBase(const FObjectInitializer& ObjectInitializer);

};


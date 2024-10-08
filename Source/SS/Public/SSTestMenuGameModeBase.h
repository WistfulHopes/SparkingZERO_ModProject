#pragma once
#include "CoreMinimal.h"
#include "SSMenuGameModeBase.h"
#include "SSTestMenuGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASSTestMenuGameModeBase : public ASSMenuGameModeBase {
    GENERATED_BODY()
public:
    ASSTestMenuGameModeBase(const FObjectInitializer& ObjectInitializer);

};


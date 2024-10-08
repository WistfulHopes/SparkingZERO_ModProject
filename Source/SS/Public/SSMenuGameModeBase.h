#pragma once
#include "CoreMinimal.h"
#include "SSGameModeBase.h"
#include "SSMenuGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASSMenuGameModeBase : public ASSGameModeBase {
    GENERATED_BODY()
public:
    ASSMenuGameModeBase(const FObjectInitializer& ObjectInitializer);

};


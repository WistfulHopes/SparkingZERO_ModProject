#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SSGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASSGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    ASSGameModeBase(const FObjectInitializer& ObjectInitializer);

};


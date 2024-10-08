#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SSHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASSHUD : public AHUD {
    GENERATED_BODY()
public:
    ASSHUD(const FObjectInitializer& ObjectInitializer);

};


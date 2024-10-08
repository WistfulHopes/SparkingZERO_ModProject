#pragma once
#include "CoreMinimal.h"
#include "SSHUD.h"
#include "SSUiFaderHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASSUiFaderHUD : public ASSHUD {
    GENERATED_BODY()
public:
    ASSUiFaderHUD(const FObjectInitializer& ObjectInitializer);

};


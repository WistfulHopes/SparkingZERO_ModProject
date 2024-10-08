#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "KoratCheatManager.generated.h"

UCLASS(Blueprintable)
class UKoratCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UKoratCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void AffectCameraShake(bool bEnable);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSDebugMainGameUIExecute.generated.h"

class AGameStateBase;
class APawn;
class APlayerController;

UCLASS(Blueprintable)
class USSDebugMainGameUIExecute : public UObject {
    GENERATED_BODY()
public:
    USSDebugMainGameUIExecute();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetOwningPlayer(APlayerController* InLocalPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    APawn* GetSidePlayerPawn(int32 InPlayerSide) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    APawn* GetOwningPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    APlayerController* GetOwningPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    AGameStateBase* GetGameStateDebugMenu();
    
};


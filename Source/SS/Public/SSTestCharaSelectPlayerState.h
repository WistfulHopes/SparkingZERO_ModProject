#pragma once
#include "CoreMinimal.h"
#include "SSPlayerState.h"
#include "SSTestCharaSelectPlayerState.generated.h"

class ASSBattlePlayerController;
class ASSCharacter;

UCLASS(Blueprintable)
class ASSTestCharaSelectPlayerState : public ASSPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSBattlePlayerController* PlayerController;
    
    ASSTestCharaSelectPlayerState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerStop(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerReadyForFadeIn(ASSBattlePlayerController* InPlayerControlle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerPossessedCharacter(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetControllerCharacterChange(ASSCharacter* InCharacter);
    
};


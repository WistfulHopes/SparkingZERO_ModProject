#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleMode010DifficultyDialog.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleMode010DifficultyDialog : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* DecidedButton;
    
public:
    USSBattleMode010DifficultyDialog();

private:
    UFUNCTION(BlueprintCallable)
    void OnFocusedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton();
    
};


#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleTrainingTopManager.generated.h"

class USSBuiltInMenu;
class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleTrainingTopManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
public:
    USSBattleTrainingTopManager();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateDecideHoldButtonProgress(USSMenuButton* InMenuButton, float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCancelHoldButtonProgress(USSMenuButton* InMenuButton, float InProgress);
    
};


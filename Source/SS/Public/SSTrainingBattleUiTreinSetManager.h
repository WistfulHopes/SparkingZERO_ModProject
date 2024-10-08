#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSTrainingBattleUiTreinSetManager.generated.h"

class USSBuiltInMenu;
class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSTrainingBattleUiTreinSetManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
public:
    USSTrainingBattleUiTreinSetManager();

private:
    UFUNCTION(BlueprintCallable)
    bool ChkTrainingSetting();
    
    UFUNCTION(BlueprintCallable)
    void ChangeHoldButtonProgress(USSMenuButton* InButton, float InProgress);
    
};


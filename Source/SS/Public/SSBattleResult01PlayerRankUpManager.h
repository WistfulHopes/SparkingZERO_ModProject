#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleResult01PlayerRankUpManager.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSBattleResult01PlayerRankUpManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> BattleResult01PlayerRankUpMenuButtons;
    
public:
    USSBattleResult01PlayerRankUpManager();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange_To_Info_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange_To_Info();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange_Normal_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChange_Normal_In();
    
};


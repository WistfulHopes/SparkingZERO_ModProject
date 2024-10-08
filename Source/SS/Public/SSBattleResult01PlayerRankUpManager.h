#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSBattleResult01PlayerRankUpManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleResult01PlayerRankUpManager : public USSMenuManager {
    GENERATED_BODY()
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


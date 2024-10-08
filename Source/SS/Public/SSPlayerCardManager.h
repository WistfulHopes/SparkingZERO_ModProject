#pragma once
#include "CoreMinimal.h"
#include "SSPlayerCardMenuManager.h"
#include "SSPlayerCardManager.generated.h"

class USSPlayerCardItemInfoPanelManager;
class USpUIScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class USSPlayerCardManager : public USSPlayerCardMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpUIScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSPlayerCardItemInfoPanelManager*> InfoPanelArray;
    
public:
    USSPlayerCardManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowTournamentEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowTournamentDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowRankMatchEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowRankMatchDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBattleMode012Enabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBattleMode012Disabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBattleMode010Enabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBattleMode010Disabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPage() const;
    
};


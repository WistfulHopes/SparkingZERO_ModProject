#pragma once
#include "CoreMinimal.h"
#include "ESSHUDType.h"
#include "SSUiFaderHUD.h"
#include "SSMainGameHUD.generated.h"

class ASSCharacter;
class USSDebugMainGameUIExecute;
class USSDebugMainGameUIInterface;
class USSMainGameHUDWidgetRoot;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class ASSMainGameHUD : public ASSUiFaderHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSMainGameHUDWidgetRoot* HUDCommonWidgetRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSMainGameHUDWidgetRoot* HUDSideWidgetRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* DebugUIWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDebugMainGameUIInterface* DebugInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDebugMainGameUIExecute* DebugExecute;
    
public:
    ASSMainGameHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowHUDWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowDebugUIBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void ShowDebugUI();
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(ESSHUDType InHUDType, int32 InPlayerIndex, bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDTimerVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugUIWidget(UUserWidget* InWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnP2CharacterBattleSPDown(float InDownValue);
    
    UFUNCTION(BlueprintCallable)
    void OnP2CharacterBattleSparkingDown(float InDownValue);
    
    UFUNCTION(BlueprintCallable)
    void OnP2CharacterBattleDamageReceived(float InReceivedDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnP1CharacterBattleSPDown(float InDownValue);
    
    UFUNCTION(BlueprintCallable)
    void OnP1CharacterBattleSparkingDown(float InDownValue);
    
    UFUNCTION(BlueprintCallable)
    void OnP1CharacterBattleDamageReceived(float InReceivedDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeToNewCharacter(ASSCharacter* InBefore, ASSCharacter* InAfter, const bool bInNewCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpponentDebugUIBlueprintVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHUDVisible(ESSHUDType InHUDType, int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugUIVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugUIBlueprintVisible() const;
    
    UFUNCTION(BlueprintCallable)
    void HideHUDWidget();
    
    UFUNCTION(BlueprintCallable)
    void HideHUDStart(const TArray<ESSHUDType>& InHUDTypeList, int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideHUDEnd(const TArray<ESSHUDType>& InHUDTypeList, int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void HideDebugUIBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void HideDebugUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSMainGameHUDWidgetRoot* GetHUDSideWidgetRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSMainGameHUDWidgetRoot* GetHUDCommonWidgetRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetDebugUIWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSDebugMainGameUIInterface* GetDebugInterface();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSDebugMainGameUIExecute* GetDebugExecute();
    
    UFUNCTION(BlueprintCallable)
    void CallSetCommonExecutePtr();
    
};


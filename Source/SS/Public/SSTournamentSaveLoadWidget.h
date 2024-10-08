#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSTournamentSaveLoadWidget.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSTournamentSaveLoadWidget : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> DataSlotButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> TabSwitchButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> MenuButtons;
    
    USSTournamentSaveLoadWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTabSwitchRight();
    
    UFUNCTION(BlueprintCallable)
    void OnTabSwitchLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnMenuRight();
    
    UFUNCTION(BlueprintCallable)
    void OnMenuLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnDataSlotButton(USSMenuButton* InButton);
    
};


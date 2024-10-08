#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSPLMRoomPlayerListWidget.generated.h"

class USSMenuButton;
class USSPLMRoomPlayerListPanel;

UCLASS(Blueprintable, EditInlineNew)
class USSPLMRoomPlayerListWidget : public USSMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSPLMRoomPlayerListPanel*> PlayerPanels;
    
    USSPLMRoomPlayerListWidget();

    UFUNCTION(BlueprintCallable)
    void OnPanelFocused(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnPanelDecided(USSMenuButton* InButton);
    
};


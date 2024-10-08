#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSPLMRoomSubMenuWidget.generated.h"

class USSMenuButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSPLMRoomSubMenuWidget : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> MenuButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    USSPLMRoomSubMenuWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFocusedMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedMenu();
    
};


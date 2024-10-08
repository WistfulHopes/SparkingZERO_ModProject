#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSButtonListWidget.generated.h"

class USSIndexedButton;
class USSMenuButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSButtonListWidget : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSIndexedButton*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* WindowTitle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSIndexedButton* LastFocusedButton;
    
public:
    USSButtonListWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonFocused(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonDecided(USSMenuButton* InButton);
    
};


#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSMenuTimerDialog.generated.h"

class URichTextBlock;
class USSMenuButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuTimerDialog : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> Texts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URichTextBlock*> RichTexts;
    
public:
    USSMenuTimerDialog();

private:
    UFUNCTION(BlueprintCallable)
    void DecideButton();
    
};


#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSPropertySettingsWidget.generated.h"

class USSMenuButton;
class USSPropertySettingsButton;
class USpUIScrollBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSPropertySettingsWidget : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSPropertySettingsButton*> PropertyButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* EnterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* WindowTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpUIScrollBox* ScrollBox;
    
    USSPropertySettingsWidget();

    UFUNCTION(BlueprintCallable)
    void OnFocusedEnterButton();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedButton(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedEnterButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeProperty(USSPropertySettingsButton* InButton, int32 InIndex, int32 InNewValue);
    
    UFUNCTION(BlueprintCallable)
    int32 OnButtonSlideRight(USSPropertySettingsButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    int32 OnButtonSlideLeft(USSPropertySettingsButton* InButton);
    
};


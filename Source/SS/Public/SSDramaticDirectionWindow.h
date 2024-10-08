#pragma once
#include "CoreMinimal.h"
#include "ESSKeyInputType.h"
#include "EKoratDramaticDirectionMode.h"
#include "SSMenuManager.h"
#include "SSDramaticDirectionWindow.generated.h"

class USSMenuButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticDirectionWindow : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EditTableNumText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EditItemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSKeyInputType SelectTriggerButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* RightTriggerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* LeftTriggerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* RightShoulderButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* LeftShoulderButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> TablePanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TablePanelsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticDirectionMode DirectionMode;
    
public:
    USSDramaticDirectionWindow();

    UFUNCTION(BlueprintCallable)
    void RightChangeDirectionTable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDecideTriggerButton(USSMenuButton* InHitButton);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideTablePanel(USSMenuButton* InHitButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void LeftChangeDirectionTable();
    
};


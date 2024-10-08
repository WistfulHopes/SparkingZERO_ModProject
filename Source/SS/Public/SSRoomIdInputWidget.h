#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSRoomIdInputWidget.generated.h"

class USSMenuButton;
class USSNumberDialButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSRoomIdInputWidget : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSNumberDialButton*> InputButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> DescriptionTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* EnterButton;
    
    USSRoomIdInputWidget();

    UFUNCTION(BlueprintCallable)
    void OnFocusedEnterButton();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedButton(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedEnterButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeNumber(int32 InDigit, int32 InValue);
    
};


#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSMenuButtonSelector.generated.h"

class USSMenuButtonChip;
class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonSelector : public USSMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* TextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Items;
    
    USSMenuButtonSelector();

    UFUNCTION(BlueprintCallable)
    void SetItemText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void RemoveValueChangeEvent(USSMenuButtonChip* InValueDownWidget, USSMenuButtonChip* InValueUpWidget, USSMenuButtonChip* InValue10DownWidget, USSMenuButtonChip* InValue10UpWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePrev();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNext();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnChangePrev();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnChangeNext();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnChange10Prev();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnChange10Next();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddValueChangeEvent(USSMenuButtonChip* InValueDownWidget, USSMenuButtonChip* InValueUpWidget, USSMenuButtonChip* InValue10DownWidget, USSMenuButtonChip* InValue10UpWidget);
    
};


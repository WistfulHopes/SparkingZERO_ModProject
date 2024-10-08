#pragma once
#include "CoreMinimal.h"
#include "OnSSMenuButtonSideChangerValueChangeEventDelegate.h"
#include "OnSSMenuButtonSideChangerValueDownKeyEventDelegate.h"
#include "OnSSMenuButtonSideChangerValueMaxEventDelegate.h"
#include "OnSSMenuButtonSideChangerValueMinEventDelegate.h"
#include "OnSSMenuButtonSideChangerValueNonMaxEventDelegate.h"
#include "OnSSMenuButtonSideChangerValueNonMinEventDelegate.h"
#include "OnSSMenuButtonSideChangerValueUpKeyEventDelegate.h"
#include "SSMenuButton.h"
#include "SSMenuButtonSideChanger.generated.h"

class USSMenuButtonChip;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonSideChanger : public USSMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftChipButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightChipButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonChip* LeftRemoteChipHitButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonChip* RightRemoteChipHitButton;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonSideChangerValueDownKeyEvent OnValueDownKey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonSideChangerValueUpKeyEvent OnValueUpKey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonSideChangerValueMinEvent OnValueMin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonSideChangerValueNonMinEvent OnValueNonMin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonSideChangerValueMaxEvent OnValueMax;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonSideChangerValueNonMaxEvent OnValueNonMax;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSMenuButtonSideChangerValueChangeEvent OnValueChange;
    
    USSMenuButtonSideChanger();

    UFUNCTION(BlueprintCallable)
    void SetItemText(const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnValueUp();
    
    UFUNCTION(BlueprintCallable)
    void OnValueDown();
    
};


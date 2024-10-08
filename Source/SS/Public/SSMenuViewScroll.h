#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "OnSSViewScrollButtonChangeEventDelegate.h"
#include "OnSSViewScrollHitButtonChangeEventDelegate.h"
#include "OnSSViewScrollMovingEventDelegate.h"
#include "OnSSViewScrollSideChangerButtonValueChangeEventDelegate.h"
#include "SSMenuManager.h"
#include "SSMenuViewScroll.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuViewScroll : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSViewScrollButtonChangeEvent OnButtonDataChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSViewScrollHitButtonChangeEvent OnHitButtonDataChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSViewScrollHitButtonChangeEvent OnHitButtonDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSViewScrollSideChangerButtonValueChangeEvent OnSideChangerButtonValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSViewScrollMovingEvent OnScrollMove;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixAreaTopLineViewIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixAreaLineNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HitButtonSuffixName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScrollControllBoxName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZeroPaddingDigitsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollTimeLength;
    
public:
    USSMenuViewScroll();

    UFUNCTION(BlueprintCallable)
    void SetFocusInfo(int32 InListElements, int32 InFocusDataIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsSideButtonValueChanged();
    
    UFUNCTION(BlueprintCallable)
    bool IsHoldDecided();
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusChanged();
    
    UFUNCTION(BlueprintCallable)
    bool IsDecided();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreFocusedDataIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusedFixViewLineIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusedFixViewIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusedDataIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDecidedDataIndex() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CallbackSideChangerButtonValueChangeViewScroll(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void CallbackHoldDecidedButtonViewScroll(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void CallbackDecidedButtonViewScroll(USSMenuButton* InButton);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "Framework/Text/TextLayout.h"
#include "CallOnButtonWithEditClickDelegate.h"
#include "CallOnLinearColorValueChangedDelegate.h"
#include "CallOnSpDirectCheckChangedDelegate.h"
#include "CallOnSpDirectComboChangedFloatDelegate.h"
#include "CallOnSpDirectComboChangedInt32Delegate.h"
#include "CallOnSpDirectSliderChangedDelegate.h"
#include "CallOnSpDirectValueChangedDelegate.h"
#include "CallOnTextChangedDelegate.h"
#include "CallSimpleDelegateDelegate.h"
#include "SSComboBoxItemsFloat.h"
#include "SSComboBoxItemsInt32.h"
#include "SSDebugUIWindowSettingValues.h"
#include "SSDebugMenuOpenedBP.generated.h"

UCLASS(Blueprintable)
class USSDebugMenuOpenedBP : public UObject {
    GENERATED_BODY()
public:
    USSDebugMenuOpenedBP();

    UFUNCTION(BlueprintCallable)
    void SetPosition(float InLeftPosition, float InTopPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetFocus();
    
    UFUNCTION(BlueprintCallable)
    void OpenDebugWindow(float InLeftPosition, float InTopPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumComboBoxItemInt32(UPARAM(Ref) FSSComboBoxItemsInt32& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumComboBoxItemFloat(UPARAM(Ref) FSSComboBoxItemsFloat& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchNameIndexComboBoxItemInt32(const FString& InName, UPARAM(Ref) FSSComboBoxItemsInt32& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchNameIndexComboBoxItemFloat(const FString& InName, UPARAM(Ref) FSSComboBoxItemsFloat& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchIndexComboBoxItemInt32(int32 InValue, UPARAM(Ref) FSSComboBoxItemsInt32& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchIndexComboBoxItemFloat(float InValue, UPARAM(Ref) FSSComboBoxItemsFloat& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetComboBoxItemInt32(int32 InIndex, UPARAM(Ref) FSSComboBoxItemsInt32& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetComboBoxItemFloat(int32 InIndex, UPARAM(Ref) FSSComboBoxItemsFloat& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetComboBoxDisplayNameInt32(int32 InIndex, UPARAM(Ref) FSSComboBoxItemsInt32& OutItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetComboBoxDisplayNameFloat(int32 InIndex, UPARAM(Ref) FSSComboBoxItemsFloat& OutItems) const;
    
    UFUNCTION(BlueprintCallable)
    void EmptyComboBoxItemInt32(UPARAM(Ref) FSSComboBoxItemsInt32& OutItems);
    
    UFUNCTION(BlueprintCallable)
    void EmptyComboBoxItemFloat(UPARAM(Ref) FSSComboBoxItemsFloat& OutItems);
    
    UFUNCTION(BlueprintCallable)
    void DeleteDebugWindow();
    
    UFUNCTION(BlueprintCallable)
    void CreateDebugWindow(const FSSDebugUIWindowSettingValues& InSetting);
    
    UFUNCTION(BlueprintCallable)
    void CloseDebugWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallDebugWindowOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallDebugWindowCreate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallDebugWindowClose();
    
    UFUNCTION(BlueprintCallable)
    void AddTextBlock(const FString& InLabel, const FString& InValue, float InLavelRightMargin, TEnumAsByte<ETextJustify::Type> InLabelJustify, TEnumAsByte<ETextJustify::Type> InValueJustify);
    
    UFUNCTION(BlueprintCallable)
    void AddSliderInt32(const FString& InText, UPARAM(Ref) int32& OutControlValue, int32 InMinValue, int32 InMaxValue, float InBoostRate, FKey InBoostKey, bool bInAutoChange);
    
    UFUNCTION(BlueprintCallable)
    void AddSliderFloat(const FString& InText, UPARAM(Ref) float& OutControlValue, float InMinValue, float InMaxValue, float InBoostRate, FKey InBoostKey, bool bInAutoChange);
    
    UFUNCTION(BlueprintCallable)
    void AddSliderArgDelegateInt32(const FString& InText, UPARAM(Ref) int32& OutControlValue, int32 InMinValue, int32 InMaxValue, FCallOnSpDirectSliderChanged InValueChanged, float InBoostRate, FKey InBoostKey, bool bInAutoChange);
    
    UFUNCTION(BlueprintCallable)
    void AddSliderArgDelegateFloat(const FString& InText, UPARAM(Ref) float& OutControlValue, float InMinValue, float InMaxValue, FCallOnSpDirectSliderChanged InValueChanged, float InBoostRate, FKey InBoostKey, bool bInAutoChange);
    
    UFUNCTION(BlueprintCallable)
    void AddSeparator();
    
    UFUNCTION(BlueprintCallable)
    void AddHeader(const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    void AddEditTextArgDelegate(const FString& InText, UPARAM(Ref) FString& OutControlValue, FCallOnTextChanged InTextChanged);
    
    UFUNCTION(BlueprintCallable)
    void AddEditText(const FString& InText, UPARAM(Ref) FString& OutControlValue);
    
    UFUNCTION(BlueprintCallable)
    void AddDirectValueInt32(const FString& InText, UPARAM(Ref) int32& OutControlValue, int32 InStepValue, float InBoostRate, FKey InBoostKey);
    
    UFUNCTION(BlueprintCallable)
    void AddDirectValueFloat(const FString& InText, UPARAM(Ref) float& OutControlValue, float InStepValue, float InBoostRate, FKey InBoostKey);
    
    UFUNCTION(BlueprintCallable)
    void AddDirectValueArgDelegateInt32(const FString& InText, UPARAM(Ref) int32& OutControlValue, int32 InStepValue, FCallOnSpDirectValueChanged InValueChanged, float InBoostRate, FKey InBoostKey);
    
    UFUNCTION(BlueprintCallable)
    void AddDirectValueArgDelegateFloat(const FString& InText, UPARAM(Ref) float& OutControlValue, float InStepValue, FCallOnSpDirectValueChanged InValueChanged, float InBoostRate, FKey InBoostKey);
    
    UFUNCTION(BlueprintCallable)
    void AddComboBoxItemInt32(int32 InValue, const FString& InName, UPARAM(Ref) FSSComboBoxItemsInt32& OutItems);
    
    UFUNCTION(BlueprintCallable)
    void AddComboBoxItemFloat(float InValue, const FString& InName, UPARAM(Ref) FSSComboBoxItemsFloat& OutItems);
    
    UFUNCTION(BlueprintCallable)
    void AddComboBoxInt32(const FString& InText, UPARAM(Ref) int32& OutSelectIndex, UPARAM(Ref) int32& OutControlValue, FSSComboBoxItemsInt32 InItems);
    
    UFUNCTION(BlueprintCallable)
    void AddComboBoxFromEnumArgDelegate(const FString& InText, UPARAM(Ref) int32& OutSelectIndex, UPARAM(Ref) int32& OutControlValue, const FString& InEnumName, FCallOnSpDirectComboChangedInt32 InSelectChanged);
    
    UFUNCTION(BlueprintCallable)
    void AddComboBoxFromEnum(const FString& InText, UPARAM(Ref) int32& OutSelectIndex, UPARAM(Ref) int32& OutControlValue, const FString& InEnumName);
    
    UFUNCTION(BlueprintCallable)
    void AddComboBoxFloat(const FString& InText, UPARAM(Ref) int32& OutSelectIndex, UPARAM(Ref) float& OutControlValue, FSSComboBoxItemsFloat InItems);
    
    UFUNCTION(BlueprintCallable)
    void AddComboBoxArgDelegateInt32(const FString& InText, UPARAM(Ref) int32& OutSelectIndex, UPARAM(Ref) int32& OutControlValue, FSSComboBoxItemsInt32 InItems, FCallOnSpDirectComboChangedInt32 InSelectChanged);
    
    UFUNCTION(BlueprintCallable)
    void AddComboBoxArgDelegateFloat(const FString& InText, UPARAM(Ref) int32& OutSelectIndex, UPARAM(Ref) float& OutControlValue, FSSComboBoxItemsFloat InItems, FCallOnSpDirectComboChangedFloat InSelectChanged);
    
    UFUNCTION(BlueprintCallable)
    void AddColorPickerArgDelegate(UPARAM(Ref) FLinearColor& OutColor, FCallOnLinearColorValueChanged InOnColorChanged);
    
    UFUNCTION(BlueprintCallable)
    void AddColorPicker(UPARAM(Ref) FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void AddCheckBoxArgDelegate(const FString& InText, UPARAM(Ref) bool& bOutControlValue, FCallOnSpDirectCheckChanged InOnCheckChanged, bool bInAutoChange);
    
    UFUNCTION(BlueprintCallable)
    void AddCheckBox(const FString& InText, UPARAM(Ref) bool& bOutControlValue, bool bInAutoChange);
    
    UFUNCTION(BlueprintCallable)
    void AddButtonWithEdit(const FString& InText, const FString& InButtonText, const FString& InDefaultEditText, FCallOnButtonWithEditClick InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void AddButton(const FString& InText, const FString& InButtonText, FCallSimpleDelegate InDelegate);
    
};


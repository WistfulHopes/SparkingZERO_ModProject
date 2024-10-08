#include "SSDebugMenuOpenedBP.h"

USSDebugMenuOpenedBP::USSDebugMenuOpenedBP() {
}

void USSDebugMenuOpenedBP::SetPosition(float InLeftPosition, float InTopPosition) {
}

void USSDebugMenuOpenedBP::SetFocus() {
}

void USSDebugMenuOpenedBP::OpenDebugWindow(float InLeftPosition, float InTopPosition) {
}

int32 USSDebugMenuOpenedBP::GetNumComboBoxItemInt32(FSSComboBoxItemsInt32& OutItems) const {
    return 0;
}

int32 USSDebugMenuOpenedBP::GetNumComboBoxItemFloat(FSSComboBoxItemsFloat& OutItems) const {
    return 0;
}

int32 USSDebugMenuOpenedBP::GetMatchNameIndexComboBoxItemInt32(const FString& InName, FSSComboBoxItemsInt32& OutItems) const {
    return 0;
}

int32 USSDebugMenuOpenedBP::GetMatchNameIndexComboBoxItemFloat(const FString& InName, FSSComboBoxItemsFloat& OutItems) const {
    return 0;
}

int32 USSDebugMenuOpenedBP::GetMatchIndexComboBoxItemInt32(int32 InValue, FSSComboBoxItemsInt32& OutItems) const {
    return 0;
}

int32 USSDebugMenuOpenedBP::GetMatchIndexComboBoxItemFloat(float InValue, FSSComboBoxItemsFloat& OutItems) const {
    return 0;
}

int32 USSDebugMenuOpenedBP::GetComboBoxItemInt32(int32 InIndex, FSSComboBoxItemsInt32& OutItems) const {
    return 0;
}

float USSDebugMenuOpenedBP::GetComboBoxItemFloat(int32 InIndex, FSSComboBoxItemsFloat& OutItems) const {
    return 0.0f;
}

FString USSDebugMenuOpenedBP::GetComboBoxDisplayNameInt32(int32 InIndex, FSSComboBoxItemsInt32& OutItems) const {
    return TEXT("");
}

FString USSDebugMenuOpenedBP::GetComboBoxDisplayNameFloat(int32 InIndex, FSSComboBoxItemsFloat& OutItems) const {
    return TEXT("");
}

void USSDebugMenuOpenedBP::EmptyComboBoxItemInt32(FSSComboBoxItemsInt32& OutItems) {
}

void USSDebugMenuOpenedBP::EmptyComboBoxItemFloat(FSSComboBoxItemsFloat& OutItems) {
}

void USSDebugMenuOpenedBP::DeleteDebugWindow() {
}

void USSDebugMenuOpenedBP::CreateDebugWindow(const FSSDebugUIWindowSettingValues& InSetting) {
}

void USSDebugMenuOpenedBP::CloseDebugWindow() {
}




void USSDebugMenuOpenedBP::AddTextBlock(const FString& InLabel, const FString& InValue, float InLavelRightMargin, TEnumAsByte<ETextJustify::Type> InLabelJustify, TEnumAsByte<ETextJustify::Type> InValueJustify) {
}

void USSDebugMenuOpenedBP::AddSliderInt32(const FString& InText, int32& OutControlValue, int32 InMinValue, int32 InMaxValue, float InBoostRate, FKey InBoostKey, bool bInAutoChange) {
}

void USSDebugMenuOpenedBP::AddSliderFloat(const FString& InText, float& OutControlValue, float InMinValue, float InMaxValue, float InBoostRate, FKey InBoostKey, bool bInAutoChange) {
}

void USSDebugMenuOpenedBP::AddSliderArgDelegateInt32(const FString& InText, int32& OutControlValue, int32 InMinValue, int32 InMaxValue, FCallOnSpDirectSliderChanged InValueChanged, float InBoostRate, FKey InBoostKey, bool bInAutoChange) {
}

void USSDebugMenuOpenedBP::AddSliderArgDelegateFloat(const FString& InText, float& OutControlValue, float InMinValue, float InMaxValue, FCallOnSpDirectSliderChanged InValueChanged, float InBoostRate, FKey InBoostKey, bool bInAutoChange) {
}

void USSDebugMenuOpenedBP::AddSeparator() {
}

void USSDebugMenuOpenedBP::AddHeader(const FString& InText) {
}

void USSDebugMenuOpenedBP::AddEditTextArgDelegate(const FString& InText, FString& OutControlValue, FCallOnTextChanged InTextChanged) {
}

void USSDebugMenuOpenedBP::AddEditText(const FString& InText, FString& OutControlValue) {
}

void USSDebugMenuOpenedBP::AddDirectValueInt32(const FString& InText, int32& OutControlValue, int32 InStepValue, float InBoostRate, FKey InBoostKey) {
}

void USSDebugMenuOpenedBP::AddDirectValueFloat(const FString& InText, float& OutControlValue, float InStepValue, float InBoostRate, FKey InBoostKey) {
}

void USSDebugMenuOpenedBP::AddDirectValueArgDelegateInt32(const FString& InText, int32& OutControlValue, int32 InStepValue, FCallOnSpDirectValueChanged InValueChanged, float InBoostRate, FKey InBoostKey) {
}

void USSDebugMenuOpenedBP::AddDirectValueArgDelegateFloat(const FString& InText, float& OutControlValue, float InStepValue, FCallOnSpDirectValueChanged InValueChanged, float InBoostRate, FKey InBoostKey) {
}

void USSDebugMenuOpenedBP::AddComboBoxItemInt32(int32 InValue, const FString& InName, FSSComboBoxItemsInt32& OutItems) {
}

void USSDebugMenuOpenedBP::AddComboBoxItemFloat(float InValue, const FString& InName, FSSComboBoxItemsFloat& OutItems) {
}

void USSDebugMenuOpenedBP::AddComboBoxInt32(const FString& InText, int32& OutSelectIndex, int32& OutControlValue, FSSComboBoxItemsInt32 InItems) {
}

void USSDebugMenuOpenedBP::AddComboBoxFromEnumArgDelegate(const FString& InText, int32& OutSelectIndex, int32& OutControlValue, const FString& InEnumName, FCallOnSpDirectComboChangedInt32 InSelectChanged) {
}

void USSDebugMenuOpenedBP::AddComboBoxFromEnum(const FString& InText, int32& OutSelectIndex, int32& OutControlValue, const FString& InEnumName) {
}

void USSDebugMenuOpenedBP::AddComboBoxFloat(const FString& InText, int32& OutSelectIndex, float& OutControlValue, FSSComboBoxItemsFloat InItems) {
}

void USSDebugMenuOpenedBP::AddComboBoxArgDelegateInt32(const FString& InText, int32& OutSelectIndex, int32& OutControlValue, FSSComboBoxItemsInt32 InItems, FCallOnSpDirectComboChangedInt32 InSelectChanged) {
}

void USSDebugMenuOpenedBP::AddComboBoxArgDelegateFloat(const FString& InText, int32& OutSelectIndex, float& OutControlValue, FSSComboBoxItemsFloat InItems, FCallOnSpDirectComboChangedFloat InSelectChanged) {
}

void USSDebugMenuOpenedBP::AddColorPickerArgDelegate(FLinearColor& OutColor, FCallOnLinearColorValueChanged InOnColorChanged) {
}

void USSDebugMenuOpenedBP::AddColorPicker(FLinearColor& OutColor) {
}

void USSDebugMenuOpenedBP::AddCheckBoxArgDelegate(const FString& InText, bool& bOutControlValue, FCallOnSpDirectCheckChanged InOnCheckChanged, bool bInAutoChange) {
}

void USSDebugMenuOpenedBP::AddCheckBox(const FString& InText, bool& bOutControlValue, bool bInAutoChange) {
}

void USSDebugMenuOpenedBP::AddButtonWithEdit(const FString& InText, const FString& InButtonText, const FString& InDefaultEditText, FCallOnButtonWithEditClick InDelegate) {
}

void USSDebugMenuOpenedBP::AddButton(const FString& InText, const FString& InButtonText, FCallSimpleDelegate InDelegate) {
}



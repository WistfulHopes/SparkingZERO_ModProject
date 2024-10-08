#include "SpTextBlock.h"
#include "Components/SlateWrapperTypes.h"

USpTextBlock::USpTextBlock() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->UseColorAndOpacityIndex = 0;
    this->MinDesiredWidth = 0.00f;
    this->bWrapWithInvalidationPanel = false;
    this->bAutoWrapText = false;
    this->bSimpleTextMode = false;
}

void USpTextBlock::SetUseColorAndOpacityIndex(int32 InIndex) {
}

void USpTextBlock::SetText(FText InText) {
}

void USpTextBlock::SetStrikeBrush(FSlateBrush InStrikeBrush) {
}

void USpTextBlock::SetShadowOffset(FVector2D InShadowOffset) {
}

void USpTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void USpTextBlock::SetOpacity(int32 InIndex, float InOpacity) {
}

void USpTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void USpTextBlock::SetFont(FSlateFontInfo InFontInfo) {
}

void USpTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
}

FText USpTextBlock::GetText() const {
    return FText::GetEmpty();
}

UMaterialInstanceDynamic* USpTextBlock::GetDynamicOutlineMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* USpTextBlock::GetDynamicFontMaterial() {
    return NULL;
}



#include "SSCmnFilterDialog.h"

USSCmnFilterDialog::USSCmnFilterDialog() {
    this->LeftPageChangeButtonName = TEXT("WBP_OBJ_Com_BTN_Category_L");
    this->RightPageChangeButtonName = TEXT("WBP_OBJ_Com_BTN_Category_R");
    this->PageTitleTextWidgetName = TEXT("Text_Title");
    this->FilterHitCountTextWidgetName = TEXT("Text_SF_Num");
    this->ErrorTextWidgetName = TEXT("Text_SF_Alert");
    this->ResetButtonWidgetName = TEXT("WBP_OBJ_Guide_Btn_0");
    this->SortListButtonValueTextName = TEXT("Text_Sort");
    this->FilterListButtonSelectSwitcherName = TEXT("Swich");
    this->SortListButtonSelectSwitcherName = TEXT("Swich");
    this->bIsDetailInfoDisp = false;
    this->bIsNaviButtonsDisp = false;
    this->SortWidget = NULL;
    this->FilterWidget = NULL;
}

void USSCmnFilterDialog::ResetButtonDecided(USSMenuButton* InHitButton) {
}


void USSCmnFilterDialog::ChangePageButtonDecided(USSMenuButton* InHitButton) {
}

void USSCmnFilterDialog::ChangeCharaSortListButtonDecided(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSCmnFilterDialog::ChangeCharaSortListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void USSCmnFilterDialog::ChangeCharaSortListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSCmnFilterDialog::ChangeCharaFilterListButtonDecided(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSCmnFilterDialog::ChangeCharaFilterListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}



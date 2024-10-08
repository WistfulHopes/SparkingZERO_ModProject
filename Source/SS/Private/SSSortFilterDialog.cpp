#include "SSSortFilterDialog.h"

USSSortFilterDialog::USSSortFilterDialog() {
    this->LeftPageChangeButtonName = TEXT("WBP_OBJ_Com_BTN_Category_L");
    this->RightPageChangeButtonName = TEXT("WBP_OBJ_Com_BTN_Category_R");
    this->PageTitleTextWidgetName = TEXT("Text_Title");
    this->FilterHitCountTitleTextWidgetName = TEXT("Text_NumTitle");
    this->FilterHitCountTextWidgetName = TEXT("Text_SF_Num");
    this->ErrorTextWidgetName = TEXT("Text_SF_Alert");
    this->ResetButtonWidgetName = TEXT("WBP_OBJ_Com_BTN_R_Reset");
    this->SortListButtonValueTextName = TEXT("Text_Sort");
    this->FilterListButtonSelectSwitcherName = TEXT("Swich");
    this->SortListButtonSelectSwitcherName = TEXT("Swich");
    this->SortWidget = NULL;
    this->FilterWidget = NULL;
    this->GuideWidget = NULL;
}

void USSSortFilterDialog::ResetButtonDecided(USSMenuButton* InHitButton) {
}


void USSSortFilterDialog::ChangePageButtonDecided(USSMenuButton* InHitButton) {
}

void USSSortFilterDialog::ChangeCharaSortListButtonDecided(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSSortFilterDialog::ChangeCharaSortListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void USSSortFilterDialog::ChangeCharaSortListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSSortFilterDialog::ChangeCharaFilterListButtonDecided(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSSortFilterDialog::ChangeCharaFilterListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}



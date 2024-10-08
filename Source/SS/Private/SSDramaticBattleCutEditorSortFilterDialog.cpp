#include "SSDramaticBattleCutEditorSortFilterDialog.h"

USSDramaticBattleCutEditorSortFilterDialog::USSDramaticBattleCutEditorSortFilterDialog() {
    this->LeftPageChangeButtonName = TEXT("WBP_OBJ_Com_BTN_Category_L");
    this->RightPageChangeButtonName = TEXT("WBP_OBJ_Com_BTN_Category_R");
    this->PageTitleTextWidgetName = TEXT("Text_Title");
    this->FilterHitCountTextWidgetName = TEXT("Text_SF_Num");
    this->ErrorTextWidgetName = TEXT("Text_SF_Alert");
    this->ResetButtonWidgetName = TEXT("WBP_OBJ_Com_BTN_R_Reset");
    this->SortListButtonValueTextName = TEXT("Text_Sort");
    this->FilterListButtonSelectSwitcherName = TEXT("Swich");
    this->SortListButtonSelectSwitcherName = TEXT("Swich");
    this->SortWidget = NULL;
    this->FilterWidget = NULL;
}

void USSDramaticBattleCutEditorSortFilterDialog::ResetButtonDecided(USSMenuButton* InHitButton) {
}


void USSDramaticBattleCutEditorSortFilterDialog::ChangePageButtonDecided(USSMenuButton* InHitButton) {
}

void USSDramaticBattleCutEditorSortFilterDialog::ChangeCharaSortListButtonDecided(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSDramaticBattleCutEditorSortFilterDialog::ChangeCharaSortListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex) {
}

void USSDramaticBattleCutEditorSortFilterDialog::ChangeCharaSortListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSDramaticBattleCutEditorSortFilterDialog::ChangeCharaFilterListButtonDecided(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void USSDramaticBattleCutEditorSortFilterDialog::ChangeCharaFilterListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}



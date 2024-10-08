#include "SSBattleSetupBuildupItemMySet.h"

USSBattleSetupBuildupItemMySet::USSBattleSetupBuildupItemMySet() {
    this->ItemWidgetName = TEXT("WBP_OBJ_BS_Custom_MS_ItemName_");
    this->ItemDescriptionTextWidgetName = TEXT("Text_ItemTips");
    this->TabButtonWidgetName = TEXT("WBP_OBJ_BS_Custom_MS_TabBTN_");
    this->PageLeftButtonWidgetName = TEXT("WBP_OBJ_Com_BTN_Category_L");
    this->PageRightButtonWidgetName = TEXT("WBP_OBJ_Com_BTN_Category_R");
    this->GuideWidgetName = TEXT("WBP_OBJ_GuideButtonSet");
    this->EmptyTexture = NULL;
    this->LockTexture = NULL;
}

void USSBattleSetupBuildupItemMySet::OnFocusChangeButton(USSMenuButton* InButton) {
}



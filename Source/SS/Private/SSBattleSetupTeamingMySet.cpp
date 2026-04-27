#include "SSBattleSetupTeamingMySet.h"

USSBattleSetupTeamingMySet::USSBattleSetupTeamingMySet() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->MySetFaceChipOverlayWidgetPrefixName = TEXT("MS_Face_");
    this->MySetFaceChipImageWidgetPrefixName = TEXT("IMG_Face_MS_");
    this->TeamFaceChipOverlayWidgetPrefixName = TEXT("Team_Face_");
    this->TeamFaceChipImageWidgetPrefixName = TEXT("IMG_Face_T_");
    this->CharaNameTextWidgetName = TEXT("Text_MSCharaName");
    this->TabButtonWidgetName = TEXT("WBP_OBJ_BS_Custom_MS_TabBTN_");
    this->PageLeftButtonWidgetName = TEXT("WBP_OBJ_Com_BTN_Category_L");
    this->PageRightButtonWidgetName = TEXT("WBP_OBJ_Com_BTN_Category_R");
    this->GuideWidgetName = TEXT("WBP_OBJ_GuideButtonSet");
}



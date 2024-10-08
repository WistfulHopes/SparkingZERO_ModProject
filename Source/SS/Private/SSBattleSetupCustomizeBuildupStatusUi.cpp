#include "SSBattleSetupCustomizeBuildupStatusUi.h"

USSBattleSetupCustomizeBuildupStatusUi::USSBattleSetupCustomizeBuildupStatusUi() {
    this->RadarChartWidgetName = TEXT("WBP_OBJ_BS_Custom_Chart");
    this->SpecialGaugeWidgetName = TEXT("Item_Sp_");
    this->CustomAnimName_Change = TEXT("OnChangeData");
    this->ItemWidgetPrefixName = TEXT("ItemName_");
    this->ItemWidgetNameStartNum = 0;
    this->ItemWidgetNameEndNum = 6;
    this->ItemWidgetNameZeroPaddingDigitsNum = 1;
    this->ItemSwitcherWidgetName = TEXT("WidgetSwitcher_109");
    this->ItemIconImageWidgetName = TEXT("IMG_ItemIcon");
    this->ItemTextWidgetName = TEXT("Caption");
    this->EmptyTexture = NULL;
    this->LockTexture = NULL;
    this->UnlockSlotMax = 99;
}



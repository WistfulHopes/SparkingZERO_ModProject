#include "SSBattleSetupNewCharaIcon.h"

USSBattleSetupNewCharaIcon::USSBattleSetupNewCharaIcon() {
    this->PlaySide = 0;
    this->EmptyTexture = NULL;
    this->QuestionTexture = NULL;
    this->FreeTexture = NULL;
    this->LvNumImageWidgetName = TEXT("Img_DPNum");
    this->LvNumImageScalerValueName = TEXT("Current");
    this->SwapMarkWidgetName = TEXT("WBP_OBJ_BS_ChIcon_chMark");
    this->SwapMarkCustomAnim_Normal = TEXT("OnCustom_Normal");
    this->SwapMarkCustomAnim_Active = TEXT("OnCustom_Active");
    this->DPImageVisibilityWidgetName = TEXT("DP_Group");
    this->bIsNormalSize = false;
    this->EPBonusImageVisibilityWidgetName = TEXT("IMG_Bonus");
}

void USSBattleSetupNewCharaIcon::SetQuestionData() {
}

void USSBattleSetupNewCharaIcon::SetFreeData() {
}

void USSBattleSetupNewCharaIcon::SetEmptyData() {
}

void USSBattleSetupNewCharaIcon::SetCharacterData(const FKoratCharacterDataList& InCharacterData) {
}



#include "SSDramaticWLibDetailSearch.h"

ASSDramaticWLibDetailSearch::ASSDramaticWLibDetailSearch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SearchButtonSet = NULL;
    this->GuideWidget = NULL;
    this->DetailSearchMenu = NULL;
    this->StageSelectSubWindow = NULL;
    this->CharaSettingSubWindow = NULL;
    this->GuideTextWidget = NULL;
    this->CharaSelectActor = NULL;
}

void ASSDramaticWLibDetailSearch::ChangeStageListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}

void ASSDramaticWLibDetailSearch::ChangeCharaSettingListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex) {
}



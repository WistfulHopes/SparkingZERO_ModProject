#include "SSDramaticWLibSearchCharacterSelect.h"

ASSDramaticWLibSearchCharacterSelect::ASSDramaticWLibSearchCharacterSelect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NameWidget = NULL;
    this->TeamWidget = NULL;
    this->CharaListWidget = NULL;
    this->SearchButtonSet = NULL;
    this->GuideWidget = NULL;
    this->SortFilterDialog = NULL;
}

void ASSDramaticWLibSearchCharacterSelect::ChangeTeamListButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex) {
}

void ASSDramaticWLibSearchCharacterSelect::ChangeCharaListButton(USSMenuButton* InHitButton, USSRemoteButton* InButton, int32 InDataIndex) {
}



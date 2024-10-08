#include "KoratFreeTimelineBranchAssetGetter.h"
#include "KoratCharacterIdGetter.h"

UKoratFreeTimelineBranchAssetGetter::UKoratFreeTimelineBranchAssetGetter() {
    this->CharacterIdGetter = CreateDefaultSubobject<UKoratCharacterIdGetter>(TEXT("CharacterIdGetter"));
}



#include "KoratCharacterUIActionDebugDraw.h"

UKoratCharacterUIActionDebugDraw::UKoratCharacterUIActionDebugDraw() {
    this->UIActionManager = NULL;
    this->MaxLineHeight = 0.00f;
    this->TotalPage = 0;
    this->CurrentPage = -1;
}

void UKoratCharacterUIActionDebugDraw::Update() {
}

UKoratCharacterUIActionDebugDraw* UKoratCharacterUIActionDebugDraw::GetInstance() {
    return NULL;
}

void UKoratCharacterUIActionDebugDraw::Destroy() {
}

void UKoratCharacterUIActionDebugDraw::CreateAndInitialize(AKoratCharacterUIActionManager* InUIActionManager) {
}



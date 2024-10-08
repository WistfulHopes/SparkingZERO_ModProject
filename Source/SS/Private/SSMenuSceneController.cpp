#include "SSMenuSceneController.h"
#include "KoratSoundManageComponent.h"

ASSMenuSceneController::ASSMenuSceneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShakeAssetType = EShakeAssetType::Special_HANDY_UI_00;
    this->bIsBlockLoad = false;
    this->SoundManageComponent = CreateDefaultSubobject<UKoratSoundManageComponent>(TEXT("SoundManageComponent"));
}

AKoratCharacterUIActionManager* ASSMenuSceneController::GetUIActionManager() {
    return NULL;
}

ASSMenuCharacterManager* ASSMenuSceneController::GetMenuCharacterManager() {
    return NULL;
}



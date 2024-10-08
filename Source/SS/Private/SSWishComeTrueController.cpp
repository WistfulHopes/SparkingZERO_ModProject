#include "SSWishComeTrueController.h"

ASSWishComeTrueController::ASSWishComeTrueController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManualCameraActor = NULL;
    this->DragonMenuCharacter = NULL;
    this->DragonCharacter = NULL;
    this->WishSelector = NULL;
    this->SubtitleWidget = NULL;
    this->GuideWidget = NULL;
    this->CurrentWishCategory = EWishCategory::None;
    this->DragonSequenceActor = NULL;
}



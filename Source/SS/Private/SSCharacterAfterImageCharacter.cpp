#include "SSCharacterAfterImageCharacter.h"

ASSCharacterAfterImageCharacter::ASSCharacterAfterImageCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->lifeTime = 0.00f;
    this->LifeTimeMax = 0.00f;
    this->lifeTimePercentage = 1.00f;
    this->bStandby = false;
    this->bExec = false;
    this->bUpdateAlpha = true;
    this->AlphaForSequencer = 1.00f;
    this->OwnerSkeletalMeshComponent = NULL;
    this->LevelSequence = NULL;
    this->bDebugAlpha = false;
    this->DebugAlphaValue = 1.00f;
    this->bShouldTickIfViewportsOnly = false;
    this->bDebugValid = false;
}

void ASSCharacterAfterImageCharacter::UpdateCharacterAfterImage(const float& Alpha) {
}

void ASSCharacterAfterImageCharacter::ShowAfterImage() {
}

void ASSCharacterAfterImageCharacter::SetSpawnParameter(const FSSCharacterAfterImageStruct& tCharacterAfterImageStruct) {
}

void ASSCharacterAfterImageCharacter::InitializeCharacterAfterImage() {
}



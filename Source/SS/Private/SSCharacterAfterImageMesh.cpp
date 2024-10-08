#include "SSCharacterAfterImageMesh.h"

ASSCharacterAfterImageMesh::ASSCharacterAfterImageMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->lifeTime = 0.00f;
    this->LifeTimeMax = 0.00f;
    this->lifeTimePercentage = 1.00f;
    this->bStandby = false;
    this->bExec = false;
    this->bUpdateAlpha = true;
    this->MaterialAfterImageActiveName = TEXT("AfterImageActive");
    this->MaterialAfterImageValueName = TEXT("AfterImageValue");
    this->PoseableMeshRoot = NULL;
    this->OwnerSkeletalMeshComponent = NULL;
    this->AlphaForSequencer = 1.00f;
    this->LevelSequence = NULL;
}

void ASSCharacterAfterImageMesh::UpdateCharacterAfterImage(const float& Alpha) {
}

void ASSCharacterAfterImageMesh::ShowAfterImage() {
}

void ASSCharacterAfterImageMesh::SetSpawnParameter(const FSSCharacterAfterImageStruct& tCharacterAfterImageStruct) {
}

void ASSCharacterAfterImageMesh::InitializeCharacterAfterImage() {
}



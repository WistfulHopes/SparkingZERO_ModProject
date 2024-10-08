#include "KoratParticleBranchComponent.h"
#include "KoratFreeTimelineParticleBranchAssetGetter.h"

UKoratParticleBranchComponent::UKoratParticleBranchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssetGetter = CreateDefaultSubobject<UKoratFreeTimelineParticleBranchAssetGetter>(TEXT("AssetGetter"));
}



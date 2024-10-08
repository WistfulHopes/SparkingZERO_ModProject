#include "KoratBattleImpactTransformActor.h"
#include "Components/SceneComponent.h"

AKoratBattleImpactTransformActor::AKoratBattleImpactTransformActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}



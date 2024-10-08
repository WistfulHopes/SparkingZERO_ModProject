#include "SSBattleSettleCameraTarget.h"
#include "Components/ArrowComponent.h"

ASSBattleSettleCameraTarget::ASSBattleSettleCameraTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Root"));
}



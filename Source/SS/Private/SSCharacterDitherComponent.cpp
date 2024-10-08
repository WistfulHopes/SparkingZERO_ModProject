#include "SSCharacterDitherComponent.h"

USSCharacterDitherComponent::USSCharacterDitherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugRenderSkeleton = false;
    this->MaterialDitherTilingName = TEXT("CameraDitherTiling");
    this->MaterialDitherColorName = TEXT("CameraDitherColor");
    this->MaterialDitherSaturationName = TEXT("CameraDitherSaturation");
}



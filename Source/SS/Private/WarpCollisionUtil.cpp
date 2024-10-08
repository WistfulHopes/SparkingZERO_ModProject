#include "WarpCollisionUtil.h"

UWarpCollisionUtil::UWarpCollisionUtil() {
}

UPhysicalMaterial* UWarpCollisionUtil::GetHitResultPhysMaterial(FHitResult InHitResult) {
    return NULL;
}

FVector UWarpCollisionUtil::GetHitResultImpactPoint(FHitResult InHitResult) {
    return FVector{};
}

float UWarpCollisionUtil::GetHitResultHitDistance(FHitResult InHitResult) {
    return 0.0f;
}

AActor* UWarpCollisionUtil::GetHitResultHitActor(FHitResult InHitResult) {
    return NULL;
}



#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineTransformElement.generated.h"

UENUM(BlueprintType)
enum class EKoratFreeTimelineTransformElement : uint8 {
    Identity,
    MyselfLocation,
    MyselfRotation,
    MyselfScale,
    HitLocation,
    HitRotation,
    CharacterLocation,
    CharacterYawRotation,
    CharacterInputMoveRotation,
    OffsetLocation,
    OffsetRotation,
    OffsetScale,
    CharacterSocketLocation,
    CharacterSocketRotation,
    CharacterSocketScale,
    HitImpactPoint,
};


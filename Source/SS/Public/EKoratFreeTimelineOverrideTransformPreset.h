#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineOverrideTransformPreset.generated.h"

UENUM(BlueprintType)
enum class EKoratFreeTimelineOverrideTransformPreset : uint8 {
    Custom,
    Identity,
    HitLocationOnly,
    HitLocationAndHitRotation,
    HitLocationAndCharaYaw,
    HitLocationAndCharaInputMoveRotation,
    MyselfLocationOnly,
    MyselfLocationAndMyselfRotation,
    MyselfLocationAndRotateAndScale,
    MyselfLocationAndHitRotation,
    MyselfLocationAndCharaYaw,
    MyselfLocationAndCharaInputMoveRotation,
    OldType,
    CharacterSocketLocation,
    CharacterSocketLocationAndCharaYaw,
    CharacterSocketLocationAndCharaYawAndScale,
    CharacterSocketLocationAndRotationAndScale,
    DecalPreset,
};


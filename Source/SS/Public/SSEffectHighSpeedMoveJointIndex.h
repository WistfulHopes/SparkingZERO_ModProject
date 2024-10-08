#pragma once
#include "CoreMinimal.h"
#include "SSEffectHighSpeedMoveJointIndex.generated.h"

UENUM(BlueprintType)
enum class SSEffectHighSpeedMoveJointIndex : uint8 {
    NECK,
    HEAD,
    WAIST,
    SPINE2,
    SPINE3,
    THGH_L,
    THGH_R,
    socket_THIGH_L_Aura_Offset,
    socket_THIGH_R_Aura_Offset,
    CLANK_L,
    CLANK_R,
    CLANKROLL_L,
    CLANKROLL_R,
    TOE1_L,
    TOE1_R,
    SHOULDER_L,
    SHOULDER_R,
    ELBOW_L,
    ELBOW_R,
    ELBOWROLL_L,
    ELBOWROLL_R,
    F_MIDDLE1_L,
    F_MIDDLE1_R,
    TAIL1,
    TAIL4,
    TAIL7,
    TAIL10,
    TAIL13,
    TAIL16,
    TAIL18,
    JOINT_MAX UMETA(Hidden),
};


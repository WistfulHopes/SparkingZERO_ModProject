#pragma once
#include "CoreMinimal.h"
#include "ENewBattleCameraType.generated.h"

UENUM(BlueprintType)
enum class ENewBattleCameraType : uint8 {
    NONE,
    IDLE,
    IDLE_SLAVE,
    IDLE_SLAVE2,
    RUSH,
    BLOW_AWAY,
    BLOWN_AWAY,
    PASSIVE,
    REVENGE_COUNTER,
    TELEPORT,
    OPPONENT_TELEPORTED,
    OPPONENT_SEARCH,
    WARP_PLAY_START,
    WARP_MOVE_START,
    TEST_OPPONENT_ZSEARCH_RELEASED,
    SONIC_SWAY,
    SONIC_SWAY_FINISH,
    SONIC_SWAYED,
    SONIC_SWAYED_FINISH,
    LONG_RUSH,
    MEMBER_CHANGE_START,
    MEMBER_CHANGE_END,
    ZOOM_NOTIFY,
    MAX,
};


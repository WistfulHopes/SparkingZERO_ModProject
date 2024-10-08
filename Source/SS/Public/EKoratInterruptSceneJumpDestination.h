#pragma once
#include "CoreMinimal.h"
#include "EKoratInterruptSceneJumpDestination.generated.h"

UENUM(BlueprintType)
enum class EKoratInterruptSceneJumpDestination : uint8 {
    None,
    SceneJumpRequest,
    Invite,
    OnlineRoom,
    AfterOnlineEnable,
    BeforeOnlineEnable,
    TitleMenu,
    TitleCompanyLogo,
};


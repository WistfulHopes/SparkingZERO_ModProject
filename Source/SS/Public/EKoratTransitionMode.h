#pragma once
#include "CoreMinimal.h"
#include "EKoratTransitionMode.generated.h"

UENUM(BlueprintType)
enum class EKoratTransitionMode : uint8 {
    Battle,
    Title,
    MainMenu,
    AdvIfCharacterSelect,
    AdvIfChart,
    DramaticBattle,
    DramaticBattleEdit,
    BattleMode012,
    BattleMode010,
    BattleSetup,
    DramaticBattleSetup,
    StageSelect,
    StageSelectDramaticEdit,
    TenkaichiBudokai,
    BattleTraining,
    MissionZen,
    MissionWhis,
    Shop,
    ZCustomize,
    CustomizeDramaticEdit,
    GuestCostumeCustomize,
    PictureBook,
    MyData,
    Appreciation,
    OnegaiShenron,
    Event,
    Tutorial,
    Ending,
    EndSlate,
    None,
};


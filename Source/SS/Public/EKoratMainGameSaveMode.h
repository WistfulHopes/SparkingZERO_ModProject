#pragma once
#include "CoreMinimal.h"
#include "EKoratMainGameSaveMode.generated.h"

UENUM(BlueprintType)
enum class EKoratMainGameSaveMode : uint8 {
    None,
    System,
    Option,
    Sound,
    BattleSetup,
    BattleSetupOffline,
    BattleSetupOnline,
    BattleResult,
    AdventureIf,
    DramaticBattle,
    DramaticBattleEdit,
    MainMenu,
    BattleMode012,
    BattleMode010,
    TenkaichiBudokai,
    BattleTraining,
    MissionZen,
    MissionWhis,
    Shop,
    ZCustomize,
    PictureBook,
    MyData,
    Appreciation,
    OnegaiShenron,
    Event,
};


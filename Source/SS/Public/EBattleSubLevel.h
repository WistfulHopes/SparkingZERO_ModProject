#pragma once
#include "CoreMinimal.h"
#include "EBattleSubLevel.generated.h"

UENUM(BlueprintType)
enum class EBattleSubLevel : uint8 {
    WBP_MenuBattle,
    WBP_Single,
    WBP_Invasion,
    WBP_Episode,
    WBP_Tenkaichi,
    WBP_Training,
    WBP_Extra,
    WBP_FreeMatch,
    WBP_PlayerMatch,
    WBP_RankMatch,
    WBP_DefenseMode,
    WBP_AttackMode,
    WBP_PresetEpisode,
    WBP_UserEpisode,
    WBP_EditEpisode,
    WBP_OnlineTenkaichi,
    WBP_OfflineTenkaichi,
    WBP_NormalTraining,
    WBP_StageSetting,
    WBP_EditFreeMatch,
    WBP_ExtraOnlineMatch,
    WBP_EditDeck,
};


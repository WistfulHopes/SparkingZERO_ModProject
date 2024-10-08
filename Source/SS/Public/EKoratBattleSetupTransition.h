#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSetupTransition.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleSetupTransition : uint8 {
    None,
    BstStart,
    BstTop,
    BstTopTeam,
    BstTopFromSt,
    BstTopTeamFromSt,
    BstComStart,
    BstComTop,
    BstComTopTeam,
    BstComTopFromSt,
    BstComTopTeamFromSt,
    BstCustomize,
    BstComCustomize,
    BstCustomizeFromEt,
    BstComCharacterSelect,
    BstCharacterSelect,
    BstComCharacterSelectFromEt,
    BstCharacterSelectFromEt,
    BstComCharacterSelectEtStart,
    BstCharacterSelectEtStart,
    BstCharacterEntry,
    BstCharacterSelectMovePlace1,
    BstCharacterSelectMovePlace2,
    BstComCharacterSelectMovePlace1,
    BstComCharacterSelectMovePlace2,
    BstPreBattleStart,
    BstTopBegin = BstTop,
    BstTopEnd = BstComTopTeamFromSt,
};


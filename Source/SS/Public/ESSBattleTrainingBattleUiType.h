#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingBattleUiType.generated.h"

UENUM(BlueprintType)
enum class ESSBattleTrainingBattleUiType : uint8 {
    TextArea,
    TrainingMain,
    List_A,
    List_B,
    Base,
    Base_A,
    HelpDialog,
    Num,
};


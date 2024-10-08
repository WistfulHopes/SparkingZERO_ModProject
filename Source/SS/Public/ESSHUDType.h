#pragma once
#include "CoreMinimal.h"
#include "ESSHUDType.generated.h"

UENUM(BlueprintType)
enum class ESSHUDType : uint8 {
    StyleGuide,
    ChangeGuide,
    EmoteGuide,
    SkillGuide,
    MainGauge,
    BBoost,
    Buff,
    Max,
};


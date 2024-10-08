#pragma once
#include "CoreMinimal.h"
#include "ETansitionLevelSequenceType.generated.h"

UENUM(BlueprintType)
enum class ETansitionLevelSequenceType : uint8 {
    None,
    AdvIf,
    AdvIfChart,
    MMUAdv,
    MMUDRB,
    MMUPRA,
    MMUTRA,
    DRMOPN,
    BTLDRE,
    DREDRB,
    PTHEVT,
    OPMOVIE,
    TitleMain,
};


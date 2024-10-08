#pragma once
#include "CoreMinimal.h"
#include "ESSEndingUIType.generated.h"

UENUM(BlueprintType)
enum class ESSEndingUIType : uint8 {
    MoviePlayer,
    StaffRoll,
    Name,
    VoiceActor,
    Image,
    Post,
    SubPost,
    CompanyName,
    Skip,
    Num,
};


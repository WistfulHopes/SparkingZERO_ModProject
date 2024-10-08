#pragma once
#include "CoreMinimal.h"
#include "ESSStaffRollPartsType.generated.h"

UENUM(BlueprintType)
enum class ESSStaffRollPartsType : uint8 {
    Name,
    VoiceActor,
    Image,
    Post,
    SubPost,
    CompanyName,
};


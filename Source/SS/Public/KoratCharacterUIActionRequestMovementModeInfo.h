#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "KoratCharacterUIActionRequestMovementModeInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestMovementModeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> UIActionMovementMode;
    
    SS_API FKoratCharacterUIActionRequestMovementModeInfo();
};


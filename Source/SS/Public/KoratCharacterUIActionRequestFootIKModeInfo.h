#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterUIActionFootIKMode.h"
#include "KoratCharacterUIActionRequestFootIKModeInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestFootIKModeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterUIActionFootIKMode UIActionFootIKMode;
    
    SS_API FKoratCharacterUIActionRequestFootIKModeInfo();
};


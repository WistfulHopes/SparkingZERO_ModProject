#pragma once
#include "CoreMinimal.h"
#include "KoratRequestVisibilitySwirchInfo.generated.h"

class ASSCharacter;

USTRUCT(BlueprintType)
struct FKoratRequestVisibilitySwirchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* SSCharacter;
    
    SS_API FKoratRequestVisibilitySwirchInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuTransitionCharacterData.generated.h"

class ASSMenuCharacter;

USTRUCT(BlueprintType)
struct FSSMainMenuTransitionCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSMenuCharacter* MenuCharacter;
    
    SS_API FSSMainMenuTransitionCharacterData();
};


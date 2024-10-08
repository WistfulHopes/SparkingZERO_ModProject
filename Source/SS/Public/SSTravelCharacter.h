#pragma once
#include "CoreMinimal.h"
#include "SSTravelCharacter.generated.h"

class ASSCharacter;
class USSUICharacterReader;

USTRUCT(BlueprintType)
struct FSSTravelCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSUICharacterReader* CharacterReader;
    
    SS_API FSSTravelCharacter();
};


#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterUIActionManagerCommandOption.h"
#include "KoratCharacterUIActionManagerCommandRequest.generated.h"

class ASSCharacter;

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionManagerCommandRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterUIActionManagerCommandOption Option;
    
    SS_API FKoratCharacterUIActionManagerCommandRequest();
};


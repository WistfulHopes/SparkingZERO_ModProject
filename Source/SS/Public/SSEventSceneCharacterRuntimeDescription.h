#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneCharacterRuntimeDescription.generated.h"

class ASSCharacter;

USTRUCT(BlueprintType)
struct FSSEventSceneCharacterRuntimeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* Instance;
    
    SS_API FSSEventSceneCharacterRuntimeDescription();
};


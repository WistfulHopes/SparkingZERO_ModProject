#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSubsceneRuntimeDescriptionCO.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSEventSceneSubsceneRuntimeDescriptionCO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* Subscene;
    
    SS_API FSSEventSceneSubsceneRuntimeDescriptionCO();
};


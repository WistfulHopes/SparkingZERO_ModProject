#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSubsceneRuntimeDescriptionMV.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSEventSceneSubsceneRuntimeDescriptionMV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* Subscene;
    
    SS_API FSSEventSceneSubsceneRuntimeDescriptionMV();
};


#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSubsceneCompileDescriptionTS.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSEventSceneSubsceneCompileDescriptionTS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Subscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySlowTriggerFlashEffect;
    
    SS_API FSSEventSceneSubsceneCompileDescriptionTS();
};


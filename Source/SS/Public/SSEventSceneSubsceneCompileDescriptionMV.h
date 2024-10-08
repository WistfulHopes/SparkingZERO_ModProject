#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSubsceneCompileDescriptionMV.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSEventSceneSubsceneCompileDescriptionMV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Subscene;
    
    SS_API FSSEventSceneSubsceneCompileDescriptionMV();
};


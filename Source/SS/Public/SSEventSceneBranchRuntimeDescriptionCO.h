#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneBranchRuntimeDescriptionCO.generated.h"

class USSEventSceneDecisionBranchVision;

USTRUCT(BlueprintType)
struct FSSEventSceneBranchRuntimeDescriptionCO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText Feelings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneDecisionBranchVision* VisionWidget;
    
    SS_API FSSEventSceneBranchRuntimeDescriptionCO();
};


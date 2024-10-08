#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneBranchCompileDescriptionCO.generated.h"

class USSEventSceneDecisionBranchVision;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSSEventSceneBranchCompileDescriptionCO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Feelings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSEventSceneDecisionBranchVision> VisionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> VisionTexture;
    
    SS_API FSSEventSceneBranchCompileDescriptionCO();
};


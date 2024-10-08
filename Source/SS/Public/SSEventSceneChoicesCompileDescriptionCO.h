#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneBranchCompileDescriptionCO.h"
#include "SSEventSceneChoicesCompileDescriptionCO.generated.h"

class USSEventSceneDecisionBranch;

USTRUCT(BlueprintType)
struct FSSEventSceneChoicesCompileDescriptionCO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSEventSceneDecisionBranch> ChoicesWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Feelings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneBranchCompileDescriptionCO TopBranch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneBranchCompileDescriptionCO BottomBranch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneBranchCompileDescriptionCO LeftBranch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneBranchCompileDescriptionCO RightBranch;
    
    SS_API FSSEventSceneChoicesCompileDescriptionCO();
};


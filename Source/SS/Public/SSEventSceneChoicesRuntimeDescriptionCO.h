#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneBranchRuntimeDescriptionCO.h"
#include "SSEventSceneChoicesRuntimeDescriptionCO.generated.h"

class USSEventSceneDecisionBranch;

USTRUCT(BlueprintType)
struct FSSEventSceneChoicesRuntimeDescriptionCO {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneDecisionBranch* ChoicesWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText Feelings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneBranchRuntimeDescriptionCO TopBranch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneBranchRuntimeDescriptionCO BottomBranch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneBranchRuntimeDescriptionCO LeftBranch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneBranchRuntimeDescriptionCO RightBranch;
    
    SS_API FSSEventSceneChoicesRuntimeDescriptionCO();
};


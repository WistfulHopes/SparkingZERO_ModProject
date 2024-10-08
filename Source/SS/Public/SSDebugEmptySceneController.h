#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSDebugEmptySceneController.generated.h"

UCLASS(Blueprintable)
class ASSDebugEmptySceneController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllSubLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransitionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyToReleaseCalled;
    
public:
    ASSDebugEmptySceneController(const FObjectInitializer& ObjectInitializer);

};


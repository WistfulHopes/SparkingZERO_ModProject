#pragma once
#include "CoreMinimal.h"
#include "EKoratInterruptSceneJumpDestination.h"
#include "SSMenuSceneController.h"
#include "SSErrorDisplaySceneController.generated.h"

class ASSUiFaderHUD;
class USSDownLoadContentsCheckProcess;
class USSMenuGeneralDialog;

UCLASS(Blueprintable)
class ASSErrorDisplaySceneController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSUiFaderHUD* FaderHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDownLoadContentsCheckProcess* DownLoadContentsCheckProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratInterruptSceneJumpDestination InterruptSceneJumpDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllSubLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransitionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyToReleaseCalled;
    
public:
    ASSErrorDisplaySceneController(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "EKoratNetworkTestCommand.h"
#include "SSMenuSceneController.h"
#include "SSNetworkTestController.generated.h"

class ASSUiFaderHUD;
class USSMenuGeneralDialog;

UCLASS(Blueprintable)
class ASSNetworkTestController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSUiFaderHUD* FaderHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllSubLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransitionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyToReleaseCalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratNetworkTestCommand CommandRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratNetworkTestCommand CommandRun;
    
public:
    ASSNetworkTestController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestCommand(EKoratNetworkTestCommand InCommand);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSMenuSceneController.h"
#include "SSInviteController.generated.h"

class USSDownLoadContentsCheckProcess;
class USSInviteNetworkManager;
class USSMenuGeneralDialog;
class USSPlayerMatchNetworkManager;

UCLASS(Blueprintable)
class ASSInviteController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSInviteNetworkManager* NetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSPlayerMatchNetworkManager* PLMNetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDownLoadContentsCheckProcess* DownLoadContentsCheckProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSInviteController(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSTitleCompanyLogoController.generated.h"

class ASSCutCameraActor;
class ASSUiFaderHUD;
class USSDownLoadContentsCheckProcess;
class USSMenuGeneralDialog;
class USSOperationGuideSet;
class USSTitleCILogoManager;
class USSTitleGamerTagFirst;

UCLASS(Blueprintable)
class ASSTitleCompanyLogoController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSUiFaderHUD* FaderHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CutCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTitleCILogoManager* TitleCILogoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTitleGamerTagFirst* TitleGamerTagFirstWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDownLoadContentsCheckProcess* DownLoadContentsCheckProcess;
    
public:
    ASSTitleCompanyLogoController(const FObjectInitializer& ObjectInitializer);

};


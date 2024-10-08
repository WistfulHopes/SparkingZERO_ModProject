#pragma once
#include "CoreMinimal.h"
#include "EMainMenuSceneArea.h"
#include "SSMainMenuTransitionCharacterArray.h"
#include "SSMenuSceneController.h"
#include "SSTitleBaseController.generated.h"

class AActor;
class ASSBnidController;
class ASSCutCameraActor;
class ASSLevelSequenceActor;
class ASSOptionController;
class ASSTitleTermsController;
class ASSUiFaderHUD;
class UBillboardComponent;
class USSDownLoadContentsCheckProcess;
class USSMenuGeneralDialog;
class USSMenuManager;
class USSOperationGuideSet;
class USSOptionAssistControlManager;
class USSOptionListBrightnessManager;
class USSOptionListLanguageManager;
class USSOptionListSoundManager;
class USSOptionListVideoManager;
class USSOptionManager;
class USSOptionOperationControlManager;
class USSOptionTipsManager;
class USSOptionTutorialTitleControlManager;
class USSTitleManager;

UCLASS(Blueprintable)
class ASSTitleBaseController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSUiFaderHUD* FaderHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CutCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTitleManager* TitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuManager* TitleLogoFirstManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionAssistControlManager* AssistControlManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionOperationControlManager* OperationControlManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionManager* TTR_Opt_BG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionTutorialTitleControlManager* TTR_Opt_BG_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSOptionController* OptionController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSBnidController* BnidController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSTitleTermsController* TitleTermsController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* TitleInSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* TitleLoopSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListSoundManager* OptionListSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListBrightnessManager* OptionListBrightnessManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListVideoManager* OptionListVideoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListLanguageManager* OptionListLanguageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionTipsManager* OptionTipsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OptionHUDBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDownLoadContentsCheckProcess* DownLoadContentsCheckProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EMainMenuSceneArea, FSSMainMenuTransitionCharacterArray> MainMenuAreaCharacters;
    
public:
    ASSTitleBaseController(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSOptionController.generated.h"

class ASSBnidController;
class ASSTitleTermsController;
class UBillboardComponent;
class USSBuiltInMenu;
class USSMenuGeneralDialog;
class USSMenuManager;
class USSOperationGuideSet;
class USSOptionListBrightnessManager;
class USSOptionListControlManager;
class USSOptionListCreditManager;
class USSOptionListEtcManager;
class USSOptionListKeyControlManager;
class USSOptionListLanguageManager;
class USSOptionListSoundManager;
class USSOptionListVideoManager;
class USSOptionManager;
class USSOptionOperationControlManager;
class USSOptionTipsManager;
class USSOptionTitleManager;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSOptionController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionManager* OptionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionTitleManager* OptionTitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListControlManager* OptionListControlManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListSoundManager* OptionListSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListBrightnessManager* OptionListBrightnessManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListVideoManager* OptionListVideoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListKeyControlManager* OptionListKeyControlManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListLanguageManager* OptionListLanguageManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListCreditManager* OptionListCreditManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionListEtcManager* OptionListEtcManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBnidController* BnidController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionTipsManager* OptionTipsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* Option_BGBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionManager* TTR_Opt_BG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSOptionOperationControlManager* OperationControlManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSTitleTermsController* TitleTermsController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuManager* RunOptionListManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* OptionTitleMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OptionHUDBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
public:
    ASSOptionController(const FObjectInitializer& ObjectInitializer);

};


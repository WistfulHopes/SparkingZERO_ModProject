#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKoratBattleKey.h"
#include "SSMenuSceneController.h"
#include "SSBattleTrainingBattleUiController.generated.h"

class ASSBattleTrainingTextArea;
class USSBattleTrainingBattleMainManager;
class USSBattleTrainingBattleMenuBaseAManager;
class USSBattleTrainingBattleMenuBaseManager;
class USSBattleTrainingBattleMenuListAManager;
class USSBattleTrainingBattleMenuListBManager;
class USSBattleTrainingCommandDataAsset;
class USSBattleTrainingSettingDataAsset;
class USSDramaticBattleWLibHelpDialog;
class USSMenuManager;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSBattleTrainingBattleUiController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuManager*> SelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSBattleTrainingTextArea* TextArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleMainManager* BattleMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleMenuBaseManager* MenuBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleMenuBaseAManager* MenuBaseA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleMenuListAManager* MenuListA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleMenuListBManager* MenuListB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticBattleWLibHelpDialog* HelpDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBattleTrainingSettingDataAsset* SettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBattleTrainingCommandDataAsset* CommandData;
    
public:
    ASSBattleTrainingBattleUiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TrainingResetFinished(FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void TrainingModelFinished(FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void TrainingInputSuccess(int32 InIndex, EKoratBattleKey InBattleKey, FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void TrainingInputFinished(FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void TrainingInputFailure(int32 InIndex, EKoratBattleKey InBattleKey, FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void PracticeResetDeathRetry();
    
};


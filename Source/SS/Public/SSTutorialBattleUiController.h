#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKoratBattleKey.h"
#include "SSMenuSceneController.h"
#include "SSTutorialBattleUiController.generated.h"

class USSMenuButtonGuideHoldManager;
class USSMenuManager;
class USSOperationGuideSet;
class USSTutorialBattleAllManager;

UCLASS(Blueprintable)
class ASSTutorialBattleUiController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuManager*> SelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTutorialBattleAllManager* TutorialBattleAllManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonGuideHoldManager* ButtonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSTutorialBattleUiController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TrainingInputSuccess(int32 InIndex, EKoratBattleKey InBattleKey, FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void TrainingInputFinished(FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void TrainingInputFailure(int32 InIndex, EKoratBattleKey InBattleKey, FName InMenuName);
    
    UFUNCTION(BlueprintCallable)
    void FullPowerSmashDamageBrake();
    
};


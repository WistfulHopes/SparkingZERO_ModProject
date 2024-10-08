#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSMenuSceneController.h"
#include "SSTrainingBattleUiController.generated.h"

class ASSBattleTrainingTextArea;
class USSMenuButtonGuideHoldManager;
class USSMenuManager;
class USSOperationGuideSet;
class USSTrainingBattleUiTreinSetManager;
class USSTrainingBattleUiTreinSetRManager;

UCLASS(Blueprintable)
class ASSTrainingBattleUiController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuManager*> SelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButtonGuideHoldManager* ButtonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTrainingBattleUiTreinSetManager* TreinSetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTrainingBattleUiTreinSetRManager* TreinSetRWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSBattleTrainingTextArea* TextArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSTrainingBattleUiController(const FObjectInitializer& ObjectInitializer);

};


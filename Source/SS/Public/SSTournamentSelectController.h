#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSTournamentSelectController.generated.h"

class ASSCutCameraActor;
class USSOperationGuideSet;
class USSSortFilterDialog;
class USSTournamentRuleEditorWidget;
class USSTournamentSaveLoadWidget;
class USSTournamentSelectListWidget;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSTournamentSelectController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* ManualCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* BackgroundWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentSelectListWidget* MenuListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentRuleEditorWidget* RuleViewerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSortFilterDialog* FilterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentSaveLoadWidget* SaveLoadWidget;
    
public:
    ASSTournamentSelectController(const FObjectInitializer& ObjectInitializer);

};


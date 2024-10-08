#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSFreeTournamentMenuController.generated.h"

class ASSCutCameraActor;
class USSButtonListWidget;
class USSMainMenuRoomList;
class USSMenuDialogManager;
class USSMenuGeneralDialog;
class USSOperationGuideSet;
class USSPropertySettingsWidget;
class USSRoomIdInputWidget;
class USSSortFilterDialog;
class USSTournamentRuleEditorWidget;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSFreeTournamentMenuController : public ASSMenuSceneController {
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
    USSButtonListWidget* TopMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPropertySettingsWidget* PropertySettingsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentRuleEditorWidget* RuleViewerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSRoomIdInputWidget* RoomIdInputWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMainMenuRoomList* RoomListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSortFilterDialog* FilterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* DialogWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMenuDialogManager* DialogManager;
    
public:
    ASSFreeTournamentMenuController(const FObjectInitializer& ObjectInitializer);

};


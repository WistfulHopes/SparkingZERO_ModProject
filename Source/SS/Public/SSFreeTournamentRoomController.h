#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSFreeTournamentRoomController.generated.h"

class ASSCutCameraActor;
class ASSPlayerCardControllerActor;
class USSMenuDialogManager;
class USSMenuGeneralDialog;
class USSOperationGuideSet;
class USSPLMRoomSubMenuWidget;
class USSTournamentRoomInfoWidget;
class USSTournamentRoomPlayerListWidget;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSFreeTournamentRoomController : public ASSMenuSceneController {
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
    USSTournamentRoomInfoWidget* RoomInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSTournamentRoomPlayerListWidget* PlayerListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPLMRoomSubMenuWidget* SubMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSPlayerCardControllerActor* PlayerCardActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* GeneralDialogWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMenuDialogManager* DialogManager;
    
public:
    ASSFreeTournamentRoomController(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSPlayerMatchRoomController.generated.h"

class ASSCutCameraActor;
class ASSPlayerCardControllerActor;
class USSMenuDialogManager;
class USSOperationGuideSet;
class USSPLMRoomInfoWidget;
class USSPLMRoomPlayerListWidget;
class USSPLMRoomSubMenuWidget;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSPlayerMatchRoomController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* ManualCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* BackgroundWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPLMRoomInfoWidget* RoomInformationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPLMRoomPlayerListWidget* PlayerListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* TimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSPLMRoomSubMenuWidget* SubMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSPlayerCardControllerActor* PlayerCardActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMenuDialogManager* DialogManager;
    
public:
    ASSPlayerMatchRoomController(const FObjectInitializer& ObjectInitializer);

};


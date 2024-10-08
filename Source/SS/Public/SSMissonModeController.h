#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSMissonModeController.generated.h"

class ASS3DUIActor;
class ASSCutCameraActor;

UCLASS(Blueprintable)
class ASSMissonModeController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASS3DUIActor*> WidgetsActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* ManualCameraActor;
    
public:
    ASSMissonModeController(const FObjectInitializer& ObjectInitializer);

};


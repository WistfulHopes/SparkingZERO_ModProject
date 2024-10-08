#pragma once
#include "CoreMinimal.h"
#include "EBattleCameraMode.h"
#include "EBattleCameraTarget.h"
#include "SSCameraActor.h"
#include "SSBattleCameraDebugActor.generated.h"

UCLASS(Blueprintable)
class ASSBattleCameraDebugActor : public ASSCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationMaxSpeedFreeCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMaxSpeedFreeCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementMaxSpeedFreeCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMinFreeCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMaxFreeCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleCameraMode BattleCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleCameraTarget BattleCameraTarget;
    
public:
    ASSBattleCameraDebugActor(const FObjectInitializer& ObjectInitializer);

};


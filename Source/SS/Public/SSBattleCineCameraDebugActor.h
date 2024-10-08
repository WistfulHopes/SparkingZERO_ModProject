#pragma once
#include "CoreMinimal.h"
#include "EBattleCineCameraMode.h"
#include "EBattleCineCameraTarget.h"
#include "SSCineCameraActor.h"
#include "SSBattleCineCameraDebugActor.generated.h"

UCLASS(Blueprintable)
class ASSBattleCineCameraDebugActor : public ASSCineCameraActor {
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
    EBattleCineCameraMode BattleCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleCineCameraTarget BattleCameraTarget;
    
public:
    ASSBattleCineCameraDebugActor(const FObjectInitializer& ObjectInitializer);

};


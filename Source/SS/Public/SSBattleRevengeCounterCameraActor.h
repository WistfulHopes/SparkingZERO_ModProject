#pragma once
#include "CoreMinimal.h"
#include "SSNewBattleCameraActor.h"
#include "SSBattleRevengeCounterCameraActor.generated.h"

UCLASS(Blueprintable)
class ASSBattleRevengeCounterCameraActor : public ASSNewBattleCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevengeCounterCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartCamLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDragonDashStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetLockOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MyCharaMoveSpeed;
    
public:
    ASSBattleRevengeCounterCameraActor(const FObjectInitializer& ObjectInitializer);

};


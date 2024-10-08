#pragma once
#include "CoreMinimal.h"
#include "SSNewBattleCameraActor.h"
#include "SSBattlePassiveCameraActor.generated.h"

UCLASS(Blueprintable)
class ASSBattlePassiveCameraActor : public ASSNewBattleCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassiveCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartCamLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDragonDashStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetLockOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MyCharaMoveSpeed;
    
public:
    ASSBattlePassiveCameraActor(const FObjectInitializer& ObjectInitializer);

};


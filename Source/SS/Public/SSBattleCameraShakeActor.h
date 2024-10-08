#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKoratBattleCameraShakeMode.h"
#include "EKoratBattleCameraShakeType.h"
#include "SSBattleCameraShakeActor.generated.h"

UCLASS(Blueprintable)
class ASSBattleCameraShakeActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CameraShakeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratBattleCameraShakeMode CameraShakeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratBattleCameraShakeType CameraShakeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CameraShakeDistanceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 CameraShakeLoopCountMax;
    
public:
    ASSBattleCameraShakeActor(const FObjectInitializer& ObjectInitializer);

};


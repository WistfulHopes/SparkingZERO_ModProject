#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECameraGlobalSlot.h"
#include "EShowFromCameraMode.h"
#include "SSEffectSwitchShowCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSEffectSwitchShowCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECameraGlobalSlot CameraSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EShowFromCameraMode ShowFromCameraMode;
    
public:
    USSEffectSwitchShowCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShowFromCameraMode(EShowFromCameraMode InCameraMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSlot(ECameraGlobalSlot InCameraSlot);
    
};


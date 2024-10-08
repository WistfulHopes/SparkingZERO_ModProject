#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlaySoundFromCameraMode.h"
#include "SSSoundSwitchPlayCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SS_API USSSoundSwitchPlayCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EPlaySoundFromCameraMode PlaySoundFromCameraMode;
    
public:
    USSSoundSwitchPlayCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlaySoundFromCameraMode(EPlaySoundFromCameraMode InCameraMode);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSEffectHighSpeedMoveJointIndex.h"
#include "SSTrailMaterialSetupComponent.generated.h"

class ASSCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSTrailMaterialSetupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    SSEffectHighSpeedMoveJointIndex UseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    USSTrailMaterialSetupComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExecuteActorDelegate();
    
    UFUNCTION(BlueprintCallable)
    void SetExecuteActor(ASSCharacter* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemComponentActivated(UActorComponent* Component, bool bReset);
    
};


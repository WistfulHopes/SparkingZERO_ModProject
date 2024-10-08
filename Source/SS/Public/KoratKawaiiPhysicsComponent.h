#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratKawaiiPhysicsParameters.h"
#include "KoratKawaiiPhysicsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratKawaiiPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratKawaiiPhysicsParameters Parameters;
    
public:
    UKoratKawaiiPhysicsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceTeleport(bool Enable);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratGrappleParameters.h"
#include "KoratCharacterGrappleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratCharacterGrappleComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratGrappleParameters> GrappleParameters;
    
public:
    UKoratCharacterGrappleComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugDraw(float DeltaTime) const;
    
};


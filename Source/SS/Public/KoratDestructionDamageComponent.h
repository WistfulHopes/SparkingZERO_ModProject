#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EKoratDestructionDamageLevel.h"
#include "KoratDestructionFieldParameter.h"
#include "KoratDestructionDamageComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratDestructionDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UKoratDestructionDamageComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EKoratDestructionDamageLevel CheckDamageLevel(const FKoratDestructionFieldParameter& Parameter);
    
};


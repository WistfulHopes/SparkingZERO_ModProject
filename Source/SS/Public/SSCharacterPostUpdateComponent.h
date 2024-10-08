#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSCharacterPostUpdateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterPostUpdateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USSCharacterPostUpdateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetComponentTagName();
    
};


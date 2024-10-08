#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSCharacterWaitSkeletalMeshEvalPreComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterWaitSkeletalMeshEvalPreComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USSCharacterWaitSkeletalMeshEvalPreComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSCharacterWaitSkeletalMeshEvalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterWaitSkeletalMeshEvalComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USSCharacterWaitSkeletalMeshEvalComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "SSCharacterCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    USSCharacterCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SSLookAtComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSLookAtComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USSLookAtComponent(const FObjectInitializer& ObjectInitializer);

};


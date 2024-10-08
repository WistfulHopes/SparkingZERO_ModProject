#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpDebugModelViewerModelCtrlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPRUNTIME_API USpDebugModelViewerModelCtrlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpDebugModelViewerModelCtrlComponent(const FObjectInitializer& ObjectInitializer);

};


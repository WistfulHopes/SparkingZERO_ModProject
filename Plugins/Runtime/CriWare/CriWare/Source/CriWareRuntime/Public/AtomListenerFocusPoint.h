#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AtomListenerFocusPoint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomListenerFocusPoint : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFocusLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionFocusLevel;
    
    UAtomListenerFocusPoint(const FObjectInitializer& ObjectInitializer);

};


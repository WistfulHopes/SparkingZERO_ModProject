#pragma once
#include "CoreMinimal.h"
#include "AtomListenerFocusPointInfo.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomListenerFocusPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionLevel;
    
    FAtomListenerFocusPointInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SSCharacterActionTarget.generated.h"

class UWorld;

UCLASS(Blueprintable)
class USSCharacterActionTarget : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    USSCharacterActionTarget();

    UFUNCTION(BlueprintCallable)
    void DebugDrawTarget(UWorld* World, FColor Color, float Size, float Duration);
    
};


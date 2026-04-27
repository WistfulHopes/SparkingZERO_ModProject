#pragma once
#include "CoreMinimal.h"
#include "Math/Box.h"
#include "UObject/Object.h"
#include "SSAreaLimitChecker.generated.h"

class AActor;

UCLASS(Blueprintable)
class USSAreaLimitChecker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AreaWallActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBox> AreaWallActorBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CeilActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox CeilActorBounds;
    
public:
    USSAreaLimitChecker();

};


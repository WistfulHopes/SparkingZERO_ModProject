#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFocusTargetType.h"
#include "SSFocusTargetActor.generated.h"

UCLASS(Blueprintable)
class ASSFocusTargetActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float lifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Playing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EFocusTargetType FocusTargetType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bBindSequence;
    
    ASSFocusTargetActor(const FObjectInitializer& ObjectInitializer);

};


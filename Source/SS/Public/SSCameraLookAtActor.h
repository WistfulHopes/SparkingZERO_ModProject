#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSCameraLookAtActor.generated.h"

UCLASS(Blueprintable)
class ASSCameraLookAtActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendTimeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendTimeEnd;
    
public:
    ASSCameraLookAtActor(const FObjectInitializer& ObjectInitializer);

};


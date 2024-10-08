#pragma once
#include "CoreMinimal.h"
#include "SSCutCameraActor.h"
#include "SSTestCharaSelectCameraActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASSTestCharaSelectCameraActor : public ASSCutCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
public:
    ASSTestCharaSelectCameraActor(const FObjectInitializer& ObjectInitializer);

};


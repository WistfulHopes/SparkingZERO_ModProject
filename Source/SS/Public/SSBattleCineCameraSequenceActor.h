#pragma once
#include "CoreMinimal.h"
#include "SSCineCameraActor.h"
#include "SSBattleCineCameraSequenceActor.generated.h"

class ASSCharacter;

UCLASS(Blueprintable)
class ASSBattleCineCameraSequenceActor : public ASSCineCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* MyPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* TargetPawn;
    
public:
    ASSBattleCineCameraSequenceActor(const FObjectInitializer& ObjectInitializer);

};


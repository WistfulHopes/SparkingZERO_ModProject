#pragma once
#include "CoreMinimal.h"
#include "SSUiLevelScriptActor.h"
#include "SSFreeTournamentRoomLSActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASSFreeTournamentRoomLSActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraAttachRootActor;
    
public:
    ASSFreeTournamentRoomLSActor(const FObjectInitializer& ObjectInitializer);

};


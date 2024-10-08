#pragma once
#include "CoreMinimal.h"
#include "SSUiLevelScriptActor.h"
#include "SSFreeTournamentMenuLSActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASSFreeTournamentMenuLSActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraAttachRootActor;
    
public:
    ASSFreeTournamentMenuLSActor(const FObjectInitializer& ObjectInitializer);

};


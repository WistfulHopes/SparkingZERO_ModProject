#pragma once
#include "CoreMinimal.h"
#include "SSUiLevelScriptActor.h"
#include "SSTournamentSelectLSActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASSTournamentSelectLSActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraAttachRootActor;
    
public:
    ASSTournamentSelectLSActor(const FObjectInitializer& ObjectInitializer);

};


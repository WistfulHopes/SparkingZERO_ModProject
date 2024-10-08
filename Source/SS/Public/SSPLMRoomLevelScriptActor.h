#pragma once
#include "CoreMinimal.h"
#include "SSUiLevelScriptActor.h"
#include "SSPLMRoomLevelScriptActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASSPLMRoomLevelScriptActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraAttachRootActor;
    
public:
    ASSPLMRoomLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};


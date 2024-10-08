#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSCollisionCheckActor.generated.h"

UCLASS(Blueprintable)
class ASSCollisionCheckActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseEditorTick;
    
    ASSCollisionCheckActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EditorTick(float DeltaTime);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSMapBackGroundActor.generated.h"

UCLASS(Blueprintable)
class ASSMapBackGroundActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEraseTheBackgroundDrawing;
    
    ASSMapBackGroundActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEraseTheBackgroundDrawing(const bool bInHide);
    
};


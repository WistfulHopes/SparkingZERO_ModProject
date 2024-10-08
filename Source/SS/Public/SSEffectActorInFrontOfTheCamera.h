#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSEffectActorInFrontOfTheCamera.generated.h"

class APlayerController;
class ASSChameleonNative;

UCLASS(Blueprintable)
class ASSEffectActorInFrontOfTheCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bAttach1PCamera: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSChameleonNative* ChameleonActor;
    
public:
    ASSEffectActorInFrontOfTheCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAttach1PCamera(const bool Attach1P);
    
};


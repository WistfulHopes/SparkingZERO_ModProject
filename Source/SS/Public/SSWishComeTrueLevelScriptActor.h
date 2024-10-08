#pragma once
#include "CoreMinimal.h"
#include "SSUiLevelScriptActor.h"
#include "SSWishComeTrueLevelScriptActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASSWishComeTrueLevelScriptActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInWaitTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraAttachRootActor;
    
public:
    ASSWishComeTrueLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayDarkCloudsSequence();
    
};


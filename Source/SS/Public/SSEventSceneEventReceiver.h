#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EEventSceneCameraPriority.h"
#include "SSEventSceneEventReceiver.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI)
class ASSEventSceneEventReceiver : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventSceneCameraPriority CameraPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraSwitchable;
    
public:
    ASSEventSceneEventReceiver(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCameraSwitchable(bool bInCameraSwitchable);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPriority(const EEventSceneCameraPriority& InPriority);
    
};


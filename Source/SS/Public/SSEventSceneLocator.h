#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSEventSceneLocator.generated.h"

class USceneComponent;

UCLASS(Blueprintable, HideDropdown, Transient)
class ASSEventSceneLocator : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ASSEventSceneLocator(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSTravelCharacter.h"
#include "SSTravelSystemWorker.generated.h"

class ASSTravelSystemSceneTransitionBas;

UCLASS(Blueprintable)
class ASSTravelSystemWorker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSTravelSystemSceneTransitionBas* SceneTransitionWorker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSTravelCharacter> TravelCharacters;
    
public:
    ASSTravelSystemWorker(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloadedCallback();
    
};


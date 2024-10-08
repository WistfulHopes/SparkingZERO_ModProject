#pragma once
#include "CoreMinimal.h"
#include "SSTravelSystemSceneTransitionBas.h"
#include "SSTravelSystemSceneTransMMUPRA.generated.h"

class ASSLevelSequenceActor;
class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class ASSTravelSystemSceneTransMMUPRA : public ASSTravelSystemSceneTransitionBas {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* AssetContainerLevelStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* LightingLevelStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ULevelStreamingDynamic*> NextLightingLevels;
    
public:
    ASSTravelSystemSceneTransMMUPRA(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnMapDisplayed();
    
};


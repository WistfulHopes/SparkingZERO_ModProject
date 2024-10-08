#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "SSEventSceneCutsceneRuntimeDescriptionDE.h"
#include "SSEventSceneGuideWidgetsDE.h"
#include "SSEventSceneScript.h"
#include "SSEventSceneScriptDE.generated.h"

class ASSEventScenePicture;
class ASSLevelSequenceActor;
class UObject;

UCLASS(Blueprintable, HideDropdown)
class ASSEventSceneScriptDE : public ASSEventSceneScript {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneGuideWidgetsDE GuideWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneCutsceneRuntimeDescriptionDE> Descriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSLevelSequenceActor*> SubsceneSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSLevelSequenceActor*> ConstantTimeSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSEventScenePicture* Picture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LayerSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* SEFadeSequence;
    
public:
    ASSEventSceneScriptDE(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitSubsceneFinish(UObject* WorldContextObject, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void ProceedSubscene();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlaySubscene(UObject* WorldContextObject, FLatentActionInfo InLatentInfo);
    
};


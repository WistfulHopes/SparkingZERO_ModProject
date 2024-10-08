#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "KoratMovieSceneEventScenePayload.h"
#include "SSEventSceneGuideWidgetsTS.h"
#include "SSEventSceneScript.h"
#include "SSEventSceneSubsceneRuntimeDescriptionTS.h"
#include "SSEventSceneScriptTS.generated.h"

class ASSLevelSequenceActor;
class UObject;

UCLASS(Blueprintable, HideDropdown)
class ASSEventSceneScriptTS : public ASSEventSceneScript {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneGuideWidgetsTS GuideWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneSubsceneRuntimeDescriptionTS> SubsceneDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* ActionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSLevelSequenceActor*> OptionSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratMovieSceneEventScenePayload> Payloads;
    
public:
    ASSEventSceneScriptTS(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitSubsceneFinish(UObject* WorldContextObject, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void ProceedSubscene();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlaySubscene(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const TArray<int32>& InCharacterIds);
    
};


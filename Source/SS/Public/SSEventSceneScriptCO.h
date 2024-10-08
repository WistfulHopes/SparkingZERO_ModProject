#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "ESSEventSceneChoicesResult.h"
#include "SSEventSceneChoicesRuntimeDescriptionCO.h"
#include "SSEventSceneGuideWidgetsCO.h"
#include "SSEventSceneScript.h"
#include "SSEventSceneSubsceneRuntimeDescriptionCO.h"
#include "SSEventSceneSubsceneSequenceCO.h"
#include "SSEventSceneScriptCO.generated.h"

class ASSCharacter;
class ASSLevelSequenceActor;
class UObject;

UCLASS(Blueprintable, HideDropdown)
class ASSEventSceneScriptCO : public ASSEventSceneScript {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneGuideWidgetsCO GuideWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneSubsceneRuntimeDescriptionCO> SubsceneDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSCharacter*> LeadingCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSubsceneSequenceCO SubsceneSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneChoicesRuntimeDescriptionCO ChoicesDescription;
    
public:
    ASSEventSceneScriptCO(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitSubsceneFinish(UObject* WorldContextObject, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitDialogueFeed(UObject* WorldContextObject, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetLeadingCharacters(const TArray<int32>& InCharacterIds);
    
    UFUNCTION(BlueprintCallable)
    void SetFpsCameraRotateLimits(const float InUp, const float InDown, const float InLeft, const float InRight);
    
    UFUNCTION(BlueprintCallable)
    void SetFpsCameraFov(const float InFov);
    
    UFUNCTION(BlueprintCallable)
    void ProceedSubscene();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlaySubscene(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const TArray<int32>& InCharacterIds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void OpenChoices(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, ESSEventSceneChoicesResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void JumpSubscene(const int32 InNextSubscene);
    
};


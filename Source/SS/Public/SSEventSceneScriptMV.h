#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "SSEventSceneGuideWidgetsMV.h"
#include "SSEventSceneScript.h"
#include "SSEventSceneSubsceneRuntimeDescriptionMV.h"
#include "SSEventSceneScriptMV.generated.h"

class ASSCharacter;
class ASSLevelSequenceActor;
class UObject;
class USSEventSceneIFSuggest;

UCLASS(Blueprintable, HideDropdown)
class ASSEventSceneScriptMV : public ASSEventSceneScript {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneGuideWidgetsMV GuideWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSubsceneRuntimeDescriptionMV SubsceneDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSCharacter*> LeadingCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* SubsceneSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneIFSuggest* IFSuggestWidget;
    
public:
    ASSEventSceneScriptMV(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void WaitSubsceneFinish(UObject* WorldContextObject, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetLeadingCharacters(const TArray<int32>& InCharacterIds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PlaySubscene(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const TArray<int32>& InCharacterIds);
    
};


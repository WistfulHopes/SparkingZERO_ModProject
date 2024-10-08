#pragma once
#include "CoreMinimal.h"
#include "Particles/Emitter.h"
#include "EKoratSetCustomTimeDilationReason.h"
#include "KoratExecuteActorInterface.h"
#include "KoratIdManagedClient.h"
#include "OnSetExecuteActorDelegate.h"
#include "Templates/SubclassOf.h"
#include "KoratEmitter.generated.h"

class AActor;
class AKoratEmitter;
class UKoratDefaultIdData;
class UKoratInteractAtbComponent;
class UKoratSelectEffectColorComponent;
class UKoratSeqActorUtilityComponent;
class ULevelSequence;
class UMaterialInstanceDynamic;
class UMovieSceneSequence;
class UParticleSystem;
class USSCharacterDitherComponent;
class USSEffectAfterimageComponent;
class USSEffectToonPointLightComponent;
class USceneComponent;

UCLASS(Blueprintable, MinimalAPI)
class AKoratEmitter : public AEmitter, public IKoratIdManagedClient, public IKoratExecuteActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ExecuteActorInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTerrainRay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TerrainSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronizeWithOwnerActorVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystemForFinishedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AKoratEmitter> EmitterForFinishedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* SequenceForFinishedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDefaultIdData* IdDataInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratSeqActorUtilityComponent* UtilityCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratSelectEffectColorComponent* SelectEffectColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ParticleTemplateSoruceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ParticleTemplateReplaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDitherAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDitherAlphaAutoCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCheckedVisibleValueMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterDitherComponent* DitherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbComponent* InteractAtbComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetExecuteActor OnSetExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ParticleLineCheckIgnoreActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableShowingCheckByBlastImpact;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachRootCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformAdjustCompo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSEffectToonPointLightComponent* ToonPointLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSEffectAfterimageComponent* AfterimageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectLimitsManagerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ParentActorForTickCheck;
    
public:
    AKoratEmitter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UnregisterCustomTimeDilationDelegate();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleValue(const float InValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetExecuteActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCustomTimeDilationDelegate();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnFinishedEffect();
    
    UFUNCTION(BlueprintCallable)
    void OnSetCustomTimeDilation(const float InTimeDilation, const EKoratSetCustomTimeDilationReason InReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EditorParticleBranchRestore();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void SetOwnerSequenceInterface(UMovieSceneSequence* InSequence) override PURE_VIRTUAL(SetOwnerSequenceInterface,);
    
    UFUNCTION()
    void SetExecuteActorInterface(AActor* InExecuteActor) override PURE_VIRTUAL(SetExecuteActorInterface,);
    
    UFUNCTION()
    void SetEditorExecuteActorInterface(AActor* InEditorExecuteActor) override PURE_VIRTUAL(SetEditorExecuteActorInterface,);
    
    UFUNCTION()
    UMovieSceneSequence* GetOnewrSequenceInterface() const override PURE_VIRTUAL(GetOnewrSequenceInterface, return NULL;);
    
    UFUNCTION()
    AActor* GetExecuteActorInterface() const override PURE_VIRTUAL(GetExecuteActorInterface, return NULL;);
    
};


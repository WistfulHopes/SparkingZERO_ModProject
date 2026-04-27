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
class AKoratEmitter : public AEmitter, public IKoratIdManagedClient, public IKoratExecuteActorInterface
{
    GENERATED_BODY()

public:
    // --- Basic properties ---
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

    // Prevent recursive sequence duplication
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
    ULevelSequence* SequenceForFinishedEffect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDefaultIdData* IdDataInstance;

    // Mark all volatile components as transient + duplicate transient
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
    UKoratSeqActorUtilityComponent* UtilityCompo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
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

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
    USSCharacterDitherComponent* DitherComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbComponent* InteractAtbComponent;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetExecuteActor OnSetExecuteActor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ParticleLineCheckIgnoreActorClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableShowingCheckByBlastImpact;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDestroyByWarpCharacter;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachRootCompo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformAdjustCompo;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
    USSEffectToonPointLightComponent* ToonPointLightComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
    USSEffectAfterimageComponent* AfterimageComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterialInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ParentActorForTickCheck;

public:
    AKoratEmitter(const FObjectInitializer& ObjectInitializer);

    virtual void PostDuplicate(EDuplicateMode::Type DuplicateMode) override;

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

    // --- Interface overrides ---
public:
    UFUNCTION()
    virtual void SetOwnerSequenceInterface(UMovieSceneSequence* InSequence) override;

    UFUNCTION()
    virtual void SetExecuteActorInterface(AActor* InExecuteActor) override;

    UFUNCTION()
    virtual void SetEditorExecuteActorInterface(AActor* InEditorExecuteActor) override;

    UFUNCTION()
    virtual UMovieSceneSequence* GetOnewrSequenceInterface() const override;

    UFUNCTION()
    virtual AActor* GetExecuteActorInterface() const override;
};

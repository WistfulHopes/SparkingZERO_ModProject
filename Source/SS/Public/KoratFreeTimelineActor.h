#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EKoratFreeTimelineActorPlayType.h"
#include "EKoratFreeTimelineActorRequest.h"
#include "EKoratFreeTimelineOverrideTransformPreset.h"
#include "EKoratFreeTimelineTransformElement.h"
#include "FreeTimelineActorParamater.h"
#include "KoratActionDataList.h"
#include "KoratAuraAssignDataList.h"
#include "KoratAuraLevelDataList.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratEffectMultipleColorInterface.h"
#include "KoratExecuteActorInterface.h"
#include "KoratFreeTimelinePlaybckSettings.h"
#include "KoratFreeTimelinePlayerHandle.h"
#include "KoratFreeTimelineRequestInfo.h"
#include "KoratFreeTimelineTypeSetting.h"
#include "KoratIdManagedClient.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractAttributeData.h"
#include "KoratInteractTriggerTypeDataList.h"
#include "KoratSequencePlayInfo.h"
#include "KoratFreeTimelineActor.generated.h"

class AKoratFreeTimelineActor;
class ASSCharacter;
class ASSLevelSequenceActor;
class UKoratDefaultIdData;
class UKoratEffectMultipleColorComponent;
class UKoratFreeTimelineAssetGetComp;
class UKoratFreeTimelineAssetGetter;
class UKoratFreeTimelineInstanceData;
class UKoratFreeTimelinePlayerBase;
class UKoratInteractActionTriggerParam;
class UKoratInteractAtbColliderComponent;
class UKoratInteractAtbLineTraceComponent;
class UKoratInteractAtbSpaceComponent;
class UKoratInteractAtbTypeParam;
class UKoratInteractHitInformationBase;
class UKoratInternalAtbSpaceParameter;
class UKoratInternalColliderParameter;
class UKoratInternalLineTraceParameter;
class UKoratPlayerRequestController;
class UMovieSceneSequence;
class UObject;
class USceneComponent;

UCLASS(Blueprintable, MinimalAPI)
class AKoratFreeTimelineActor : public AActor, public IKoratIdManagedClient, public IKoratEffectMultipleColorInterface, public IKoratExecuteActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelinePlayerBase* FreeTimelinePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratFreeTimelinePlayerHandle> FreeTimelinePlayerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratFreeTimelinePlayerHandle> WaitPlayCompletePlayerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineAssetGetter* FreeTimelineAssetGetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineAssetGetComp* FreeTimelineAssetGetterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbLineTraceComponent* LineTraceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbColliderComponent* ColliderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbSpaceComponent* SpaceAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayCompleteAndDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bReferenceFreeTimelineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIgnoreComponentPostion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableFinishPlayOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseCollisionPresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform TransformOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractTriggerTypeDataList InteractTriggerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineOverrideTransformPreset OverrideTransformPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratFreeTimelineTransformElement> TransformProcessingOrderArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineActorRequest RequestPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineActorRequest CurrentRequestPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratPlayerRequestController* RequestController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineRequestInfo DebugRequestInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelinePlaybckSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencePlayInfo> PlayDetailInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseSequencePlayInfoByKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratSequencePlayInfo RequestPlayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineTypeSetting RequestFreeTimelineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString SpawnPosSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* ColorSourceByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratEffectMultipleColorComponent* EffectMultipleColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDefaultIdData* IdDataInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineActorPlayType RequestAuraPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratAuraLevelDataList RequestAuraLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratAuraAssignDataList RequestAuraAssignID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineInstanceData* InstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> SpawnedOwnerSequenceActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachRootComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* LastUsedAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratInternalLineTraceParameter* SaveSpawnLineTraceParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratInternalAtbSpaceParameter* SaveSpawnAtbSpaceParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratInternalColliderParameter* SaveSpawnAtbColliderParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractActionTriggerParam* SaveActionTriggerParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbTypeParam* SaveAtbTypeParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFreeTimelineActorParamater SaveSpawnParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail EffectMultipleColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratInteractHitInformationBase* HitInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratInteractAttributeData EffectInteractData;
    
public:
    AKoratFreeTimelineActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static AKoratFreeTimelineActor* SpawnFreeTimelineActor(const FFreeTimelineActorParamater InParams, UObject* SourceObject);
    
    UFUNCTION(BlueprintCallable)
    void SetUseSequencePlayInfoName(const FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformOffset(const FTransform InTransform);
    
    UFUNCTION(BlueprintCallable)
    bool SetSourceColor(const FKoratEffectColorDataDetail& InSourceColorData);
    
    UFUNCTION(BlueprintCallable)
    void SetSequencePlayInfo(const TArray<FKoratSequencePlayInfo> InInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestPlayer(EKoratFreeTimelineActorRequest InRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetReferensActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayedDestroy(const bool bInPlayCompletedDestroy);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideTransformPreset(const EKoratFreeTimelineOverrideTransformPreset InPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractTriggerOverride(const FKoratInteractTriggerTypeDataList& InTriggerOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeTimelineType(const FKoratFreeTimelineTypeSetting InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetExecuteActor(ASSCharacter* InExecuteCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectInteractData(const FKoratInteractAttributeData& InIntaractData);
    
    UFUNCTION(BlueprintCallable)
    void SetColorSourceByCharacter(ASSCharacter* InColorSourceByChracter);
    
    UFUNCTION(BlueprintCallable)
    void SetAtbNameUseAtbType(const FKoratInteractAtbTypeDataList InDataList);
    
    UFUNCTION(BlueprintCallable)
    void SetActionNameUseTrigger(const FKoratActionDataList InDataList);
    
    UFUNCTION(BlueprintCallable)
    void RequestSequencePlayInfo(const FKoratSequencePlayInfo InInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayComplete(UKoratFreeTimelinePlayerBase* InFreeTimelinePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform MakeOverrideTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOneShot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUseSequencePlayInfoName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<EKoratFreeTimelineTransformElement> GetTransformProcessingOrderArrayBasedOnPreset(const EKoratFreeTimelineOverrideTransformPreset InPreset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<EKoratFreeTimelineTransformElement> GetTransformProcessingOrderArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformElement(const EKoratFreeTimelineTransformElement InType) const;
    
    UFUNCTION(BlueprintCallable)
    FKoratEffectColorDataDetail GetSourceColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratFreeTimelineActorRequest GetRequestPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    FKoratInteractAtbTypeDataList GetInteractAtbType(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FKoratSequencePlayInfo> FindSequencePlayInfo(const FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void ClearSequencePlayInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlay();
    

    // Fix for true pure virtual functions not being implemented
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


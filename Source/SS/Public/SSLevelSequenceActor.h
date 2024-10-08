#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceActor.h"
#include "MovieSceneObjectBindingID.h"
#include "EKoratSetCustomTimeDilationReason.h"
#include "KoratActionDataList.h"
#include "KoratBuffFormTypeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratCharacterPointLightData.h"
#include "KoratEtcResources.h"
#include "KoratOverrideTransformDescription.h"
#include "KoratRebindDescription.h"
#include "KoratRebindDescriptionByTag.h"
#include "KoratSequencePlayDescription.h"
#include "KoratSequencePlayInfo.h"
#include "KoratSequencerRebindInfo.h"
#include "SSLevelSequenceActor.generated.h"

class AActor;
class AKoratOverrideTransformActor;
class ASSCharacter;
class ASSCutCameraDirector;
class ULevelSequence;
class UMovieSceneSequence;
class USSLevelSequencePlayer;

UCLASS(Blueprintable, MinimalAPI)
class ASSLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ManagedId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencerRebindInfo> RebindInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoDestroyPlayStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyDelayCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* CancelLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelPlayEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRebindOriginTrackOverrideTransformActor;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AKoratOverrideTransformActor>> RebindOverrideTransformActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWarpCtrlSequenceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWarpCtrlSequenceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList WarpCtrlSequenceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDemonstrationFromSaveAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCutCameraDirector> RebindedCutCameraDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RebindedTargetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraLerpTimeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CameraLerpTimeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CameraSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CameraBranch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ManualCameraReconnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool UseCameraRootTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CameraRootTransformActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform CameraRootTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LocalCameraRootTransformActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> RegistedCustomTimeDilationActor;
    
public:
    ASSLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool ValidateCameras(UMovieSceneSequence* InMasterSequence, FString& OutErrText);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCustomTimeDilation();
    
    UFUNCTION(BlueprintCallable)
    void StopSoundPlayer();
    
    UFUNCTION(BlueprintCallable)
    void StopSequencePlayer();
    
    UFUNCTION(BlueprintCallable)
    void StopPlayerAndDestroyDelayCheck();
    
    UFUNCTION(BlueprintCallable)
    void StopPlayerAndDestroyDelay(const bool bCancel);
    
    UFUNCTION(BlueprintCallable)
    void StopPlayerAndDestroy(const bool bCancel);
    
private:
    UFUNCTION(BlueprintCallable)
    void StartCharacterCameraFromPlayerOnPlay();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWorldToonPointLightData(const FKoratCharacterPointLightData& InData);
    
    UFUNCTION(BlueprintCallable)
    bool SetupRebinds(const TArray<FKoratRebindDescription>& InRebindArray);
    
    UFUNCTION(BlueprintCallable)
    bool SetupRebind(const FKoratRebindDescription& InRebind);
    
    UFUNCTION(BlueprintCallable)
    bool SetupPlayDescription(UPARAM(Ref) FKoratSequencePlayDescription& InPlayDescription);
    
    UFUNCTION(BlueprintCallable)
    bool SetupOverrideTransform(const FKoratOverrideTransformDescription& InOverrideTransformParam);
    
    UFUNCTION(BlueprintCallable)
    bool SetupEtcResources(UPARAM(Ref) FKoratEtcResources& InEtcResource);
    
    UFUNCTION(BlueprintCallable)
    bool SetReindByTag(UPARAM(Ref) FKoratRebindDescriptionByTag& InRebindInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetRebindsForGame(bool bRebindCharacterCamera, bool bRebindFrontCamera, float InCameraLerpTimeStart, float InCameraLerpTimeEnd, int32 InCameraSlot, int32 InCameraBranch, bool InManualCameraReconnect, bool InBCameraRootTransform, AActor* InCameraRootTransformActor, const FTransform& InCameraRootTransform, bool InNoUseOwnerCutDirector, float InDelayConnectTime, const TMap<FString, ASSCharacter*>& InRebindCharacters, const TArray<FKoratCharacterDataList>& InPhysicalDisparityCharacterIDS);
    
    UFUNCTION(BlueprintCallable)
    bool SetRebind(UPARAM(Ref) FString& InNameRegexPattern, AActor* RebindActor, const bool DisableAnimTrack, const bool DisableTransformTrack);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayInfoNextLabel(const FName Label, const FName NewNextLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayInfo(const TArray<FKoratSequencePlayInfo>& InPlayInfoList);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterEffectColorDataSet(const FKoratCharacterEffectColorSetData& InColorSetData);
    
    UFUNCTION(BlueprintCallable)
    void SetCancelLevelSequence(ULevelSequence* InCancelLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCustomTimeDilation();
    
    UFUNCTION(BlueprintCallable)
    bool PlaySequencePlayerInLooping(const int32 StartFrame, const bool bPauseAtEnd, const int32 NumLoops);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySequencePlayerByInfo(const FName Label, const float PlayRatio);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySequencePlayer(const int32 StartFrame, const bool bPauseAtEnd);
    
    UFUNCTION(BlueprintCallable)
    bool PlaySequence(const FKoratSequencePlayDescription& InPlayDescription);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSetCustomTimeDilation(const float InTimeDilation, const EKoratSetCustomTimeDilationReason InReason);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnChanedBuffForm(const FKoratBuffFormTypeDataList& InPreForm, const FKoratBuffFormTypeDataList& InNewForm);
    
private:
    UFUNCTION(BlueprintCallable)
    void LogOnDestroyed(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void KillMySelf();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSequencePlayerPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    USSLevelSequencePlayer* GetSSSequencePlayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndEffectSequenceCamera();
    
private:
    UFUNCTION()
    void AddRebindInfo(FMovieSceneObjectBindingID InBindingId, const FString& InName, uint32 InActorGUID);
    
};


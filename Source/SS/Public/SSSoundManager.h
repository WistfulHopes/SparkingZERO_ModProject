#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EKoratTransitionMode.h"
#include "ESSAnimeSongsModeWhenStartBroadCast.h"
#include "ESSCharacterVoiceLanguage.h"
#include "ESSSoundGroupType.h"
#include "KoratBGMDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratSoundHandle.h"
#include "KoratSoundPlayAtb.h"
#include "OnChangeBattleBGMDelegate.h"
#include "OnStopBattleBGMDelegate.h"
#include "OnStopSparkingBGMDelegate.h"
#include "SSSoundManager.generated.h"

class AActor;
class AKoratAtomCueSheetLoaderActor;
class ASSCharacter;
class UKoratLipsAnalyzerPool;
class USSAtomComponentManager;
class USceneComponent;
class USoundAtomCueSheet;
class UWorld;

UCLASS(Blueprintable)
class USSSoundManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UKoratLipsAnalyzerPool*> LipsAnalyzerPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundAtomCueSheet*> AtomCueSheetInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AKoratAtomCueSheetLoaderActor*> AtomCueSheetLoaderActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundAtomCueSheet*> AtomCueSheetUnLoadList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, int32> NotLoadMainMenuCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSAtomComponentManager* UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSAtomComponentManager* SEBattleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSAtomComponentManager* BGMManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSAtomComponentManager* VoiceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSAtomComponentManager* SEMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESSCharacterVoiceLanguage CharacterVoiceLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LevelScriptActor;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopBattleBGM OnStopBattleBGM;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopSparkingBGM OnStopSparkingBGM;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeBattleBGM OnChangeBattleBGM;
    
    USSSoundManager();

    UFUNCTION(BlueprintCallable)
    void Update(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UnloadAcb(const FName& InCueSheetName);
    
    UFUNCTION(BlueprintCallable)
    void StopSparkingBGM();
    
    UFUNCTION(BlueprintCallable)
    void StopSoundByType(const ESSSoundGroupType InSoundGroupType);
    
    UFUNCTION(BlueprintCallable)
    void StopSound(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle);
    
    UFUNCTION(BlueprintCallable)
    void StopLoadAcb(const FName& InCueSheetName, const FString& InCueSheetPath);
    
    UFUNCTION(BlueprintCallable)
    void StopInsertBGM();
    
    UFUNCTION(BlueprintCallable)
    void StopByCategoryName(const FString& InCategoryName);
    
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void StopBattleBGM();
    
    UFUNCTION(BlueprintCallable)
    void StopAllSound();
    
    UFUNCTION(BlueprintCallable)
    void StartPoseMenu(const EKoratTransitionMode InTransitionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeRateByCategory(const FString& InCategoryName, const float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle InHandle, const float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetNextBlockIndex(FKoratSoundHandle InPlayHandle, int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterVoiceLanguage(const ESSCharacterVoiceLanguage InCharacterVoiceLangage);
    
    UFUNCTION(BlueprintCallable)
    void SetAisacByName(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle InHandle, const FString& ControlName, float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void ReserveBGM(const FKoratBGMDataList InBGMDataList);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAtomCueSheetLoaderActor(const FName& InCueSheetName);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSound();
    
    UFUNCTION(BlueprintCallable)
    bool ReattachSound(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle, USceneComponent* InAttachToComponent, const FName InAttachPointName, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlaySoundByID(const FName& InCueSheetName, const int32 InSoundId, const ESSSoundGroupType InSoundGroupType, FKoratSoundPlayAtb InSoundPlayAtb, ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlaySound(const FName& InCueSheetName, const FString& InSoundName, const ESSSoundGroupType InSoundGroupType, FKoratSoundPlayAtb InSoundPlayAtb, ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayInsertBGM(const FKoratBGMDataList InBGMDataList, const float InDurationInTime, const float InDurationOutTime, const bool InCrossFade, const ESSAnimeSongsModeWhenStartBroadCast InAnimeSongsModeWhenStartBroadCast, const FKoratBGMDataList InOriginalBGMDataList);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayChangeLabelBGM(const FKoratBGMDataList InBGMDataList, const float InFadeInTime, const float InFadeOutTime, const bool IsCrossFade);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayBGM(const FKoratBGMDataList InBGMDataList, const float InFadeInTime, const float InFadeOutTime, const bool IsCrossFade, const bool IsOverwrite, const ESSAnimeSongsModeWhenStartBroadCast InAnimeSongsModeWhenStartBroadCast, const FKoratBGMDataList InOriginalBGMDataList);
    
    UFUNCTION(BlueprintCallable)
    void PauseSoundByType(const ESSSoundGroupType InSoundGroupType, const bool bInPause);
    
    UFUNCTION(BlueprintCallable)
    void PauseSound(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle, const bool bInPause);
    
    UFUNCTION(BlueprintCallable)
    void PauseByCategoryName(const FString& InCategoryName, const bool bInPause);
    
    UFUNCTION(BlueprintCallable)
    void PauseAllSound(const bool bInPause);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelChange(AActor* InLevelScriptActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleFinish();
    
public:
    UFUNCTION(BlueprintCallable)
    USoundAtomCueSheet* LoadAcb(const FName& InCueSheetName, const FString& InCueSheetPath);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle);
    
    UFUNCTION(BlueprintCallable)
    bool IsPausedByCategoryName(const FString& InCategoryName);
    
    UFUNCTION(BlueprintCallable)
    bool IsPaused(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle);
    
    UFUNCTION(BlueprintCallable)
    bool IsDisplayDisableSoundDeviceDialog();
    
    UFUNCTION(BlueprintCallable)
    bool IsActive(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    FName GetEventCueSheetName();
    
    UFUNCTION(BlueprintCallable)
    ESSCharacterVoiceLanguage GetCharacterVoiceLanguage();
    
    UFUNCTION(BlueprintCallable)
    void FinishPoseMenu(const EKoratTransitionMode InTransitionMode);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCueSheet* FindAcb(const FName& InCueSheetName, const bool bIsLoad);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(const ESSSoundGroupType InSoundGroupType, const FKoratSoundHandle& InHandle, const float InFadeOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void AttachAwbFileToLoadedCueSheet();
    
    UFUNCTION(BlueprintCallable)
    void AttachAwbFile(USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAcb(UWorld* InWorld, const FName& InCueSheetName, const FString& InCueSheetPath);
    
    UFUNCTION(BlueprintCallable)
    void AddAtomCueSheetUnLoadList(USoundAtomCueSheet* InCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void AddAtomCueSheetInfo(USoundAtomCueSheet* InCueSheet);
    
};


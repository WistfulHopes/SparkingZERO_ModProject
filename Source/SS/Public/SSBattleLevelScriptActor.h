#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "ECameraGlobalSlot.h"
#include "EKoratBattleTimeoverRule.h"
#include "EProcessingOrderPartitionOfDuringPhysics.h"
#include "EProcessingOrderPartitionOfPostPhysics.h"
#include "EProcessingOrderPartitionOfPostUpdateWork.h"
#include "EProcessingOrderPartitionOfPrePhysics.h"
#include "KoratBattleConversation.h"
#include "KoratBattleConversationSet.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratBattlePlayMap.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratPlayerStartDataList.h"
#include "OnChangeCharacterDelegate.h"
#include "SSBattlePlayerInfo.h"
#include "SSMapLevelScriptActor.h"
#include "SSTravelSystemInterface.h"
#include "SSBattleLevelScriptActor.generated.h"

class AActor;
class AKoratCharacterUIActionManager;
class AKoratEffectHitAirWallManager;
class ASSBattleBenchCharacter;
class ASSBattleDebugDrawActor;
class ASSBattleDirectingActor;
class ASSBattleImpactProcedure;
class ASSBattlePracticeManager;
class ASSBattleRequestVisibilitySwirchActor;
class ASSBattleSettleCameraTarget;
class ASSBattleTrainingBattleUiController;
class ASSBulletBeamViewManager;
class ASSBulletCommandManager;
class ASSBulletControllerManager;
class ASSCharacter;
class ASSCharacterBuffManager;
class ASSCharacterMeshTickStopActor;
class ASSCharacterToonPointLightCtrlNative;
class ASSCharacterWarpCtrl;
class ASSCutCameraActor;
class ASSCutCameraDirector;
class ASSExplosionManager;
class ASSMapWarpDataAssetHolder;
class ASSNavSystemManager;
class ASSRootCameraDirector;
class ASSTutorialBattleScriptDirector;
class ASSTutorialBattleUiController;
class AWindSimFieldActor;
class AWindSimFieldManager;
class UActorComponent;
class UKoratCharacterMLSDataAsset;
class ULevelStreaming;
class ULevelStreamingDynamic;
class UObject;
class USSCharacterStorageManager;
class USSEventSceneBlockAssetContainer;
class UUserWidget;

UCLASS(Blueprintable, MinimalAPI)
class ASSBattleLevelScriptActor : public ASSMapLevelScriptActor, public ISSTravelSystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleTimeoverRule BattleTimeoverRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayMap PlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter> PlayCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCharacter OnChangeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSRootCameraDirector*> RootCameraDirectors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FSSBattlePlayerInfo> PlayerPawns;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASSCharacter>> EnteredPlayerPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacterToonPointLightCtrlNative* CharacterToonPointLightCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSNavSystemManager* NavSystemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattlePracticeManager* PracticeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleTrainingBattleUiController* BattleTrainingBattleUiController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSTutorialBattleUiController* TutorialBattleUiController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSCutCameraDirector*> CameraDirectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraDirector* ExternalCutDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWindSimFieldActor* WindSimFieldActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWindSimFieldManager* WindSimFieldManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneBlockAssetContainer* EventBlockAssetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacterBuffManager* BuffManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBulletCommandManager* BulletCommandManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBulletControllerManager* BulletControllerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBulletBeamViewManager* BulletBeamViewManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSExplosionManager* ExplosionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSTutorialBattleScriptDirector* TutorialBattleScriptDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKoratEffectHitAirWallManager* EffectHitAirWallManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratPlayerStartDataList, ASSBattleBenchCharacter*> BattleTeamCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> PreloadingWidgetAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* PreloadingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> ResidentSystemSubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> ResultSubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleDebugDrawActor* BattleDebugDrawActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSCharacter*> SubstituteCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKoratCharacterUIActionManager* CharacterUIActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleDirectingActor* BattleDirectingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacterMeshTickStopActor* CharacterMeshTickStopActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EProcessingOrderPartitionOfDuringPhysics, AActor*> ProcessingOrderPartitionActorOfDuringPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EProcessingOrderPartitionOfPostPhysics, AActor*> ProcessingOrderPartitionActorOfPostPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EProcessingOrderPartitionOfPrePhysics, AActor*> ProcessingOrderPartitionActorOfPrePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EProcessingOrderPartitionOfPostUpdateWork, AActor*> ProcessingOrderPartitionActorOfPostUpdateWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleRequestVisibilitySwirchActor* BattleRequestVisibilitySwirchActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBattleConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableBattleConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleConversation> BattleConversationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList BattleConversationCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBattleAnnouncement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText BattleAnnouncementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleSettleCameraTarget* SettleCameraTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> BattleSystemResidentLoadClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> BattleSystemResidentLoadInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> BattleSystemLoadClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> BattleSystemLoadInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> PreloadTeamCharaLoadClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> PreloadTeamCharaLoadInstances;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSBattleImpactProcedure*> BattleImpactProcedures;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBattleLoadFinished;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterStorageManager* CharacterStorageManager;
    
    ASSBattleLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadCharacter(const int32 InPlaySide, const FKoratCharacterDataList& InCharacterDataList, const FKoratCharacterCostumeDataList& InCostume, UKoratCharacterMLSDataAsset* InExtendMLSDataAsset, ASSCharacter* InSSCharacter);
    
    UFUNCTION(BlueprintCallable)
    void UnloadBattleScenePhase();
    
    UFUNCTION(BlueprintCallable)
    void UnloadBattleAssets();
    
    UFUNCTION(BlueprintCallable)
    void StartLoadCharacter(const int32 InPlaySide, const FKoratCharacterDataList& InCharacter, const FKoratCharacterCostumeDataList& InCostume, UKoratCharacterMLSDataAsset* InExtendMLSDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void SpawnToonPointLightCtrl();
    
    UFUNCTION(BlueprintCallable)
    void SpawnNavSystemManager();
    
    UFUNCTION(BlueprintCallable)
    void SpawnChameleon();
    
    UFUNCTION(BlueprintCallable)
    void SpawnBattleImpactProcedures(const TArray<FName>& NameList);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBattleImpactProcedure(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBattleCharacter(TArray<ASSCharacter*>& OutCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetupPreloadBattledAssets();
    
    UFUNCTION(BlueprintCallable)
    void SetupMapWarpDataAssetHolder();
    
    UFUNCTION(BlueprintCallable)
    void SetupCharacterWarpCtrl();
    
    UFUNCTION(BlueprintCallable)
    void SetPreloadingWidget(const TSoftClassPtr<UUserWidget> InWidgetAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuCameraForcePriority(float InPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDisableConversationFlg(bool InDisableConversationFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleConversationSetData(FKoratBattleConversationSet InBattleConversationSetData);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleConversationFlg(bool InConversationFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleConversationData(FKoratBattleConversation InBattleConversationData);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPrePhysics(EProcessingOrderPartitionOfPrePhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPostPhysics(EProcessingOrderPartitionOfPostPhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickDuringPhysics(EProcessingOrderPartitionOfDuringPhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="WorldContextObject"))
    void PreloadSublevels(UObject* WorldContextObject, FLatentActionInfo InLatentInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInteractiveWindActivationChangedCallback(const TArray<FString>& _Args);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadBattleScenePhase();
    
    UFUNCTION(BlueprintCallable)
    void LoadBattleCharacter();
    
    UFUNCTION(BlueprintCallable)
    void LoadBattleAssets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameRunning() const;
    
    UFUNCTION(BlueprintCallable)
    ASSRootCameraDirector* GetRootCameraDirectorFromTarget();
    
    UFUNCTION(BlueprintCallable)
    ASSRootCameraDirector* GetRootCameraDirector(int32 InPlayerSide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetProcessingOrderPartitionActorOfPostPhysics(EProcessingOrderPartitionOfPostPhysics InPartition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetProcessingOrderPartitionActorOfDuringPhysics(EProcessingOrderPartitionOfDuringPhysics InPartition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSCharacter* GetPlayerPawn(const int32 InPlaySide) const;
    
    UFUNCTION(BlueprintCallable)
    ASSCutCameraDirector* GetMenuCameraDirector();
    
    UFUNCTION(BlueprintCallable)
    ASSMapWarpDataAssetHolder* GetMapWarpDataAssetHolder();
    
    UFUNCTION(BlueprintCallable)
    ASSCutCameraActor* GetDirectorMainCamera(int32 InPlaySide, ECameraGlobalSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    ASSCharacterWarpCtrl* GetCharacterWarpCtrl();
    
    UFUNCTION(BlueprintCallable)
    AKoratCharacterUIActionManager* GetCharacterUIActionManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSBattleRequestVisibilitySwirchActor* GetBattleRequestVisibilitySwirchActor() const;
    
    UFUNCTION(BlueprintCallable)
    void GetBattleMapSubLevel(TArray<FString>& OutSubLevelNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetBattleElapsedTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool GetBattleDisableConversationFlg();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSBattleDirectingActor* GetBattleDirectingActor() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetBattleConversationFlg();
    
    UFUNCTION(BlueprintCallable)
    void DisableBulletAll();
    
    UFUNCTION(BlueprintCallable)
    void DisableAiAll();
    
    UFUNCTION(BlueprintCallable)
    void DestroyMapWarpDataAssetHolder();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCharacterWarpCtrl();
    
    UFUNCTION(BlueprintCallable)
    void DestroyBattleCharacter(ASSCharacter* InCharacter, bool InIsRequestGC);
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleConversationData();
    
    UFUNCTION(BlueprintCallable)
    void BattleSystemTerminate();
    
    UFUNCTION(BlueprintCallable)
    void BattleSystemInitialize();
    
    UFUNCTION(BlueprintCallable)
    void BattleConversationDataRemoveAt(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrePhysics(EProcessingOrderPartitionOfPrePhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPostUpdateWork(EProcessingOrderPartitionOfPostUpdateWork InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPostPhysics(EProcessingOrderPartitionOfPostPhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddTickDuringPhysics(EProcessingOrderPartitionOfDuringPhysics InPartitionIndex, AActor* InNewActor, UActorComponent* InNewComponent);
    

    // Fix for true pure virtual functions not being implemented
};


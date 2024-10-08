#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratMapDataList.h"
#include "SSLevelScriptActor.h"
#include "SSMapLevelScriptActor.generated.h"

class AActor;
class ASSAquaticSurface;
class ASSCharacter;
class UKoratEffectMapData;
class ULevelSequence;
class ULevelStreamingDynamic;
class USSLevelLoadingProxy;

UCLASS(Blueprintable)
class ASSMapLevelScriptActor : public ASSLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSLevelLoadingProxy* LevelLoadingProxy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSAquaticSurface*> AquaticSurfaceCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorInFrontOfTheCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* BlackoutTheBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MpcPriorityManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MapBackGroundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratEffectMapData* EffectMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSCharacter*> MapCharacters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ULevelStreamingDynamic*> PreloadingSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratMapDataList CurrentPlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratMapDataList TargetPlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratMapDataList RequestPlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratMapDataList UnloadReserveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ULevelStreamingDynamic*> DisplaySubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ULevelStreamingDynamic*> UnloadSubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> MapChangeDestructOTLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TestPlayMapSW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime TestSwitchPlayMap_StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime TestSwitchPlayMap_TimeUnloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime TestSwitchPlayMap_TimeLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime TestSwitchPlayMap_TimeAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EraseTheBackgroundDrawingCounter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratMapDataList MapAssetLoadKey;
    
public:
    ASSMapLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadWorldLevelStreamingsExceptKeep(const TArray<FString>& InKeepLevelPackageNames);
    
    UFUNCTION(BlueprintCallable)
    void UnloadWorldLevelStreamings();
    
    UFUNCTION(BlueprintCallable)
    void UnloadPlayMapAsync();
    
    UFUNCTION(BlueprintCallable)
    void UnloadPlayMap();
    
    UFUNCTION(BlueprintCallable)
    void TestSwitchPlayMap();
    
    UFUNCTION(BlueprintCallable)
    bool SwitchPlayMap(const FKoratMapDataList& InMapDataList, bool bInKeepSameSublevel, bool bInSpawnMapCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SublevelShownCallback();
    
    UFUNCTION(BlueprintCallable)
    void StepLoadSublevelShownCallback();
    
    UFUNCTION(BlueprintCallable)
    void SpawnMpcPriorityManager();
    
    UFUNCTION(BlueprintCallable)
    void SpawnBlackoutTheBackground();
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowAllSubLevel();
    
    UFUNCTION(BlueprintCallable)
    void SetShouldBeVisibleForDisplaySubLevel(bool bInShouldBeVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetEraseTheBackgroundDrawing(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void SaveLoadedLevelInfo(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void SaveActiveLevelDumpInfo(const FString& Filename);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LightScenarioShownCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVictoryAppealPositionTheStartingPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayMapSwitched() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAllSubLevelVisible();
    
    UFUNCTION(BlueprintCallable)
    bool IsAllSubLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void HideAllSubLevel();
    
    UFUNCTION(BlueprintCallable)
    TArray<ASSCharacter*> GetMapCharacters();
    
    UFUNCTION(BlueprintCallable)
    UKoratEffectMapData* GetEffectMapDataCallBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratMapDataList GetCurrentPlayMap() const;
    
    UFUNCTION(BlueprintCallable)
    void EraseTheBackgroundDrawing(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void BurstLoadAllMapsIncludedLightScenario(const TArray<FString>& LevelNames);
    
};


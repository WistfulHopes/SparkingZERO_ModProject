#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCpuLevel.h"
#include "EKoratBattleKeyMode.h"
#include "ESSBGMCategoryType.h"
#include "KoratCharacterDataList.h"
#include "KoratPlayerStartDataList.h"
#include "SSMenuManager.h"
#include "SSDebugBattleSetupMenuManager.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSDebugBattleSetupMenuManager : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> AlliesTeamStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> EnemyTeamStartData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* SelectedStartButtonOfLastSession;
    
public:
    USSDebugBattleSetupMenuManager();

    UFUNCTION(BlueprintCallable)
    void SetTeamCharacterName(FKoratCharacterDataList In1p0, FKoratCharacterDataList In1p1, FKoratCharacterDataList In1p2, FKoratCharacterDataList In1p3, FKoratCharacterDataList In1p4, FKoratCharacterDataList In2p0, FKoratCharacterDataList In2p1, FKoratCharacterDataList In2p2, FKoratCharacterDataList In2p3, FKoratCharacterDataList In2p4);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SaveMenuSetting(const UWidget* InSelectedButton, const FText& InSelectedMap, const TArray<FText>& InSelectedPlayer1, const TArray<FText>& InSelectedPlayer2, bool bInOnlineBattleFlg, EKoratBattleKeyMode InBattleKeyMode, int32 InOfflineSelectNo, int32 InOnlineSelectNo, const FText& InSelectedBGM, const FText& InSelectedSparkingBGM1P, const FText& InSelectedSparkingBGM2P, int32 InTimeLimitSelectNo, bool InLastMaxMaintain1p, bool InLastMaxMaintain2p, bool InLastOutField, const FText InBattleCpuLevel);
    
    UFUNCTION(BlueprintCallable)
    void SaveDataReset();
    
    UFUNCTION(BlueprintCallable)
    void SaveDataOpenShop();
    
    UFUNCTION(BlueprintCallable)
    void SaveDataOpenAll();
    
    UFUNCTION(BlueprintCallable)
    void SaveDataLoad();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetStageSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    EKoratBattleCpuLevel GetCurrentBattleCpuLevel(UObject* WorldContextObject, const FText InCurrentCpuLevelText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetCharacter2PSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem, int32 InMemberNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetCharacter1PSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem, int32 InMemberNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetBGMSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem, ESSBGMCategoryType InBGMCategoryType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetBattleCpuLevelSelectParameter(UObject* WorldContextObject, TArray<FText>& OutItems, FText& OutCurrentItem);
    
};


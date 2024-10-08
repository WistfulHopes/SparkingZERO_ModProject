#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingSettingReviewType.h"
#include "KoratBGMDataList.h"
#include "KoratBattleDirectingData.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratBattlePlayMap.h"
#include "KoratBattleTrainingCommandDataList.h"
#include "KoratBattleTrainingLinesDataList.h"
#include "KoratPlayerStartDataList.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class USSBattleTrainingSettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSBattleTrainingSettingReviewType, FKoratBattleTrainingLinesDataList> Review;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleTrainingCommandDataList> Commands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleTrainingCommandDataList> ClassicCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattlePlayCharacter> AlliesTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> AlliesTeamStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattlePlayCharacter> EnemyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> EnemyTeamStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleDirectingData DirectingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BattleBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList SparkingBGM1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList SparkingBGM2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayMap PlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleTrainingCommandDataList> Command;
    
    USSBattleTrainingSettingDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataList.h"
#include "KoratBattleDirectingData.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratBattlePlayMap.h"
#include "KoratEventSceneDataList.h"
#include "KoratPlayerStartDataList.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFBattleDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSDragonAdventureIFBattleDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
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
    FKoratEventSceneDataList ScriptBeforeBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratEventSceneDataList> ScriptAfterBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> TransitionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> TransitionSequenceFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> ResultSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> ResultSequencerBadEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> VoiceIDBlackList;
    
    USSDragonAdventureIFBattleDataAsset();

    UFUNCTION(BlueprintCallable)
    void DisplayBattleDirectingInOutputlog();
    
};


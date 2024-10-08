#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleMemberRule.h"
#include "EKoratHealthRecoveryMode.h"
#include "ETournamentEntryAnimType.h"
#include "ETournamentTimeLimit.h"
#include "ETournamentVoiceEventId.h"
#include "ETournamentZItemCustomizeType.h"
#include "KoratBattleDirectingSetup.h"
#include "KoratCharacterFilterDataList.h"
#include "KoratConversationDataList.h"
#include "KoratMapDataList.h"
#include "KoratRewardDataList.h"
#include "KoratRewardLotteryDataList.h"
#include "SSTournamentReservedTeamData.h"
#include "SSTournamentRuleSet.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SS_API FSSTournamentRuleSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TournamentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TournamentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterFilterDataList> PlayerCharacterRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterFilterDataList> ComCharacterRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETournamentTimeLimit Timelimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList ReservedStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleMemberRule MemberRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMemberChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCharacterSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETournamentZItemCustomizeType ZItemCustomizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratHealthRecoveryMode HealthRecoveryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealthRecoveryPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOutOfField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TournamentNameImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> EntryAnimIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETournamentEntryAnimType EntryAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratRewardDataList> FirstVictoryReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRewardLotteryDataList RepeatVictoryReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleDirectingSetup> BattleDirectingSetups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETournamentVoiceEventId, FKoratConversationDataList> VoiceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSSTournamentReservedTeamData> ReservedComTeams;
    
    FSSTournamentRuleSet();
};


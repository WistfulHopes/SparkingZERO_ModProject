#pragma once
#include "CoreMinimal.h"
#include "EDebugVirtualNetPlayerRoleType.h"
#include "EKoratBattleKeyMode.h"
#include "EKoratBattleOfflineMode.h"
#include "EKoratBattleOnlineMode.h"
#include "EKoratBattleStartAppealType.h"
#include "EKoratBattleTimeoverRule.h"
#include "KoratBGMDataList.h"
#include "KoratBattleChangeSettingData.h"
#include "KoratBattleCombinedInfo.h"
#include "KoratBattleDirectingData.h"
#include "KoratBattleDirectingInfo.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratBattlePlayMap.h"
#include "KoratBattleTeamChangeMembers.h"
#include "KoratFormChangeCharacterItemEquipment.h"
#include "KoratPlayerStartDataList.h"
#include "SSOptionAssistParam.h"
#include "SSOptionControlParam.h"
#include "KoratBattleSetting.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleMapParameterIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayMap BattlePlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleCharacterParameterIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter> BattlePlayCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter> BattlePlayCharacterTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList SparkingBGM1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList SparkingBGM2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleTeamChangeMembers> BattleTeamChangeMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleCombinedInfo> BattleCombinedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratFormChangeCharacterItemEquipment> FormChangeCharacterItemEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlliesTeamMemberNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyTeamMemberNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleKeyMode BattleKeyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlineBattleFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleOfflineMode BattleOfflineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleOnlineMode BattleOnlineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugVirtualNetPlayerRoleType DbgNetRollType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlineBattleSlaveFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleChangeSettingData BattleChangeSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleDirectingData BattleDirectingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleDirectingInfo BattleDirectingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionAssistParam AlliesTeamAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionAssistParam EnemyTeamAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionControlParam AlliesBattleOptionParamControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOptionControlParam EnemyBattleOptionParamControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter> BattlePlayCharacterTeamBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleTeamChangeMembers> BattleTeamChangeMembersBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayMap BattleMapBackUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBattleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBattleLoopCharacterRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBattleLoopMapRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBattleLoopPadAddRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBattleLoopErrorRestartOnlineAutoBattleMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleTimeoverRule BattleTimeoverRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetryPlayLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleStartAppealType StartAppealType;
    
    SS_API FKoratBattleSetting();
};


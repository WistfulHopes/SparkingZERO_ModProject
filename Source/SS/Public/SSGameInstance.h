#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetTextLibrary.h"
#include "Engine/GameInstance.h"
#include "InputCoreTypes.h"
#include "ESSKeyInputType.h"
#include "EBattleWinLose.h"
#include "EDebugVirtualNetPlayerRoleType.h"
#include "EDragonType.h"
#include "EKoratBattleCpuLevel.h"
#include "EKoratBattleFormat.h"
#include "EKoratBattleKeyMode.h"
#include "EKoratBattleMemberRule.h"
#include "EKoratBattleMenu.h"
#include "EKoratBattleOfflineMode.h"
#include "EKoratBattleOnlineMode.h"
#include "EKoratBattlePauseMode.h"
#include "EKoratBattlePauseResultMode.h"
#include "EKoratBattleRetryMode.h"
#include "EKoratBattleSetupStartMode.h"
#include "EKoratBattleStartAppealType.h"
#include "EKoratBattleStartMode.h"
#include "EKoratBattleTimeoverRule.h"
#include "EKoratMenuWLibStartMode.h"
#include "EKoratOnlineBattleMatchingState.h"
#include "EKoratSortFilterUseMode.h"
#include "EKoratTransitionMode.h"
#include "EMenuMissionMode.h"
#include "ESSBattleMode010Difficulty.h"
#include "ESSOptionManagerPlatformType.h"
#include "KeyInputDIK_FKEY.h"
#include "KoratBGMDataList.h"
#include "KoratBattleChangeSettingData.h"
#include "KoratBattleDirectingCondition.h"
#include "KoratBattleDirectingData.h"
#include "KoratBattleDirectingInfo.h"
#include "KoratBattleDirectingSetup.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratBattlePlayMap.h"
#include "KoratBattleResult.h"
#include "KoratBattleResultLines.h"
#include "KoratBattleRetrySetting.h"
#include "KoratBattleReward.h"
#include "KoratBattleSetting.h"
#include "KoratCharaSortMenuDataRecord.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterFilterDataList.h"
#include "KoratFormChangeCharacterItemEquipment.h"
#include "KoratMapDataList.h"
#include "KoratPlayerStartDataList.h"
#include "KoratShopBannerTextureInfo.h"
#include "KoratTrainingSetting.h"
#include "KoratUILevelDataList.h"
#include "SSBattleMode010Param.h"
#include "SSBattleMode010Result.h"
#include "SSBattleMode011Param.h"
#include "SSBattleMode011Result.h"
#include "SSDebugAdventureIFTestSetting.h"
#include "SSDebugCutEditorTestSetting.h"
#include "SSDragonAdventureIFParam.h"
#include "SSGalleryParam.h"
#include "SSMapInteractiveWindParams.h"
#include "SSOptionAssistParam.h"
#include "SSRankMatchConditions.h"
#include "SSTournamentPlayerTeamInfo.h"
#include "SSTournamentRoundMatchResults.h"
#include "SSTournamentRuleSet.h"
#include "SSGameInstance.generated.h"

class ASSLevelSequenceActor;
class ASSPlayerController;
class UKoratMPCController;
class ULevelStreamingDynamic;
class UMaterialParameterCollection;
class UObject;
class USSBattleReplaySaveGame;
class USSChunkInstallManager;
class USSDebugAdventureIFTestManager;
class USSDownLoadContentsManager;
class USSDramaticDataManager;
class USSDramaticImageGenerationManager;
class USSDramticBattleBattleDataRecord;
class USSInputDeviceManager;
class USSLoggingToolManager;
class USSMenuInterruptManager;
class USSMenuManager;
class USSMissionDataManager;
class USSMythicalOrbManager;
class USSNotificationManager;
class USSPaperTheaterDataAsset;
class USSReplayDataManager;
class USSShareUtility;
class USSStopWatch;
class USSVersionSettings;
class USSWaitingIconManager;
class USoundAtomCueSheet;

UCLASS(Blueprintable, NonTransient)
class USSGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USSMenuManager>> TestingWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug1PMaxMaintain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug2PMaxMaintain;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharaSortMenuDataRecord> BattleCharacterSortElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetupStageListIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMapDataList> SetupStageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetupCharacterListIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> SetupCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetupBGMListIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBGMDataList> SetupBGMList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundAtomCueSheet>> LoadCueSheetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCueSheetListLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleSetupCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> CombinationLoadArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetting BattleSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveBattleDirectingTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetting BattleSettingForStandByTraining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratOnlineBattleMatchingState OnlineBattleMatchingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlineBattleObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlineBattleRematchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> AlliesTeamStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> EnemyTeamStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleMode010Param BattleMode010Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleMode010Result BattleMode010Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, int32> BattleMode010EPBonusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleMode011Param BattleMode011Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleMode011Result BattleMode011Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratTrainingSetting TrainingSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleStartMode BattleStartMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BattleStartFadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratTransitionMode TransitionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleResult BattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleRetrySetting BattleRetrySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplayRetryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattlePauseMode BattlePauseMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattlePauseResultMode BattlePauseResultMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSReplayDataManager* ReplayDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSBattleReplaySaveGame* ReplaySaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ReplaySlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReplayUserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> AgingReplayDataNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime AgingReplayStartDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAgingReplayLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugReplayOptionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugReplayOptionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugReplayOptionRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugReplayOptionAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSDragonAdventureIFParam DragonAdventureIFParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSGalleryParam GalleryParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramticBattleBattleDataRecord*> CreatedDramaticBattleDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* DramaticBattleOpeningLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* DramaticBattleEndingSubLevelForLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* DramaticBattleEndingLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTransitionDramaticEpilogueEnding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAfterDramaticEnding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticDataManager* DaramaticDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartKoratPDramaticImageGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTitleCompanyLogoDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivitySetEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugTitleTransitionAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartKoratPAfterLanguageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestLangCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartupSystemLangCodeEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartupSystemLangCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainMenuLastDisplayedAreaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastStartedActivityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuMissionMode MissionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMissionDataManager* MissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDragonType WishCTType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMythicalOrbManager* MythicalOrbManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTournamentRuleSet TournamentRuleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTournamentSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTournamentPlayerTeamInfo> TournamentPlayerTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TournamentRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TournamentCompleteBattles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTournamentRoundMatchResults TournamentRoundMatchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTournamentFinalWinWithoutPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSNotificationManager* NotificationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSPaperTheaterDataAsset* PaperTheaterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSInputDeviceManager* InputDeviceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMenuInterruptManager* MenuInterruptManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSWaitingIconManager* WaitingIconManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSChunkInstallManager* ChunkInstallManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDownLoadContentsManager* DownLoadContentsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticImageGenerationManager* DramaticImageGenerationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSShareUtility* ShareUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDebugAdventureIFTestManager* AdventureIFTestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSLoggingToolManager* LoggingToolManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FKeyInputDIK_FKEY> JpKeyInputTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FKeyInputDIK_FKEY> JpKeyInputTableOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FKeyInputDIK_FKEY> JpKeyInputTableOption2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FText> KeyInputIconTextTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FText> KeyInputIconTextTable2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FText> DrawInputIconTextTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FText> DrawInputIconTextTable2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSOptionManagerPlatformType KeyInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSOptionManagerPlatformType KeyInputType2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeKeyInputTypeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeKeyInputJapanKeybord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeKeyInputFrenchKeybord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeKeyInputGermanKeybord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeKeyInputThaiKeybord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey InputMenuKeyTrig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey InputMenuKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* InteractiveWindMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMapInteractiveWindParams DefaultMapInteractiveWindParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTravelSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratUILevelDataList StartupUILevelForDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSStopWatch* DebugStopWatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleSetupStartMode BattleSetupStartMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleSetupEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawMontageStateEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterSelectFillAllCharaEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBneSubmissionVer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattlePauseKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattlePauseNonKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugPauseKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveFrontKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveBackKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveFrontClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveBackClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveRightClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveLeftClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleShortDashKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleChargeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleKidanKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleRushKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMikiwameKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleRevengeCounterKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveUpClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleMoveDownClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleGuardClassicKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleChargeClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleRevengeCounterClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleVanishingAssault1ClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleVanishingAssault2ClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleUltimateForte1ClassicKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleUltimateForte2ClassicKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleBlastSkill1ClassicKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleBlastSkill2ClassicKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleUltimateBlastClassicKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleUltimateForte1Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleUltimateForte2Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleBlastSkill1Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleBlastSkill2Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleUltimateBlastKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleGuardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteChangeUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteChangeRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteChangeDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteChangeLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDragonDashStartKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleVanishingAssault1Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleVanishingAssault2Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleRushDerivativeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleLightningAttackKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDownRevivalKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleBlastBoostKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattlePowerImpactKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattlePowerImpactClassicKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCrashImpactDefenceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleBlastImpactKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleSpeedImpactKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleSpeedImpactClassicKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDirectingKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleToggleTransformGuideKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleStyleChangeUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleStyleChangeRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleStyleChangeDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleStyleChangeLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleHudToLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleHudToRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleToggleTransformGuideClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleStyleChangeUpClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleStyleChangeRightClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleStyleChangeDownClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleStyleChangeLeftClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeUpClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeRightClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeDownClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleCharacterChangeLeftClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteClassicKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteChangeUpClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteChangeRightClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteChangeDownClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleEmoteChangeLeftClassicKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraLockChangeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraChangeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraSelectKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraMoveUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraMoveDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraMoveRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraMoveLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraMoveFrontKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraMoveBackKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraTurnUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraTurnDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraTurnRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraTurnLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraTargetKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraRollRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraRollLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraZoomInKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraZoomOutKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraSpeedUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraSpeedDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraResetKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraPrReset1Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleFreeCameraPrReset2Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugLockOnChangeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugSwapPlayerControllerIDKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugResetTransformKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugSaveTransformKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleHUDDebugUIToggleVisibleKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugPowerImpactKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugCrashImpactKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugSpeedImpactKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugBlastImpactKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugSuperZCounterKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugUltimateBlastKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugPlayActionKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugRevengeCounterKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugRevengeDashKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugNormalInputTimingKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugEasyInputTimingKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugRushCameraKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugLocomotionTiltKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugLocomotionBlowKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugSaveInputKeysP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugSaveInputKeysP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugReplayInputKeysP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> BattleDebugReplayInputKeysP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> AssistUiKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> PreviewUiKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> AuxiliaryPreviousUiKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> AuxiliaryNextUiKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> OptionUiKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> AttentionUiKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> CameraSwitchingUiKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> UI_LeftThumbstickKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuCursorRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuCursorLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuCursorUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuCursorDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuSelectRightKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuSelectLeftKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuSelectUpKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuSelectDownKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuDebugTitleAfterOPMovieKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> MainMenuDebugTitleSecondKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> DebugMenuOpenCloseKeyboardKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> DebugMenuOpenCloseGamepadKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoubleClickLimitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratMPCController* MPCController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratShopBannerTextureInfo ShopBannerTextureInfo;
    
public:
    USSGameInstance();

    UFUNCTION(BlueprintCallable)
    void ValidSetupStageList();
    
    UFUNCTION(BlueprintCallable)
    void ValidSetupCharacterList();
    
    UFUNCTION(BlueprintCallable)
    void ValidSetupBGMList();
    
    UFUNCTION(BlueprintCallable)
    void ValidateBattleMapSetting();
    
    UFUNCTION(BlueprintCallable)
    void ValidateBattleCharacterSetting();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBattlePlayerTeamState();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBattleMode010Param();
    
    UFUNCTION(BlueprintCallable)
    int32 TeamCharacterAdd(int32 InTeamNo, FKoratCharacterDataList InCharacter, FKoratCharacterCostumeDataList InCostume, bool bCirculation);
    
    UFUNCTION(BlueprintCallable)
    void StartActivityFromMainMenu(const FString& InActivityId);
    
    UFUNCTION(BlueprintCallable)
    void SetWishCTType(EDragonType InDragonType);
    
    UFUNCTION(BlueprintCallable)
    bool SetupReplayDataForDebugOnlineBattle(const FString& InSlotName, int32 InUserIndex, const FString& InRootPath);
    
    UFUNCTION(BlueprintCallable)
    bool SetupReplayData(const FString& InSlotName, int32 InUserIndex, const FString& InRootPath);
    
    UFUNCTION(BlueprintCallable)
    void SetupMapRandom();
    
    UFUNCTION(BlueprintCallable)
    void SetupKeyToDeviceIconType(const FKey& InKey, ASSPlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetupCharacterRandom();
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialData();
    
    UFUNCTION(BlueprintCallable)
    void SetTransitionMode(const EKoratTransitionMode InTransitionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentCpuLevel(EKoratBattleCpuLevel InCpuLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamCameraSpeed(int32 InPlayerNo, int32 InLR, int32 InUD);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamAssistParamAuto();
    
    UFUNCTION(BlueprintCallable)
    void SetTeamAssistParam(int32 InPlayerNo, FSSOptionAssistParam InAssistParam);
    
    UFUNCTION(BlueprintCallable)
    void SetStartupUILevelByDebugMenu(FKoratUILevelDataList InUILevel);
    
    UFUNCTION(BlueprintCallable)
    void SetStartAppealType(EKoratBattleStartAppealType InStartAppealType);
    
    UFUNCTION(BlueprintCallable)
    void SetSparkingBGM2P(const FKoratBGMDataList& InSparkingBGM2P);
    
    UFUNCTION(BlueprintCallable)
    void SetSparkingBGM1P(const FKoratBGMDataList& InSparkingBGM1P);
    
    UFUNCTION(BlueprintCallable)
    void SetSetupStageList(const TArray<FKoratMapDataList>& InSetupStageList);
    
    UFUNCTION(BlueprintCallable)
    void SetSetupCharacterList(const TArray<FKoratCharacterDataList>& InSetupStageList);
    
    UFUNCTION(BlueprintCallable)
    void SetSetupBGMList(const TArray<FKoratBGMDataList>& InSetupBGMList);
    
    UFUNCTION(BlueprintCallable)
    void SetRetryPlayLevel(int32 InRetryPlayLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetReplaySlotName(const FString& InReplaySlotName, const int32 InReplayUserIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetReplaySaveGame(USSBattleReplaySaveGame* InReplaySaveGame);
    
    UFUNCTION(BlueprintCallable)
    void SetRankMatchConditions(FSSRankMatchConditions InConditions);
    
    UFUNCTION(BlueprintCallable)
    void SetRankingType(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    void SetPaperTheaterData(USSPaperTheaterDataAsset* InPaperTheaterData);
    
    UFUNCTION(BlueprintCallable)
    void SetOutField(const bool InOutField);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineBattleSlaveFlg(const bool InOnlineSlaveFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineBattleRematchCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineBattleObserver(bool InObserver);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineBattleMatchingState(EKoratOnlineBattleMatchingState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineBattleFlg(const bool InOnlineModeFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetNoMartialArts(const bool InNoMartialArts);
    
    UFUNCTION(BlueprintCallable)
    void SetNoChangeAll(const bool InNoChange);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionMode(EMenuMissionMode InMissionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMainMenuLastDisplayedAreaIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLoseRetryCount(int32 InLoseRetryCount);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadCueSheetList(const TArray<TSoftObjectPtr<USoundAtomCueSheet>>& InLoadCueSheet);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTransitionDramaticEpilogueEnding(bool InIsTransitionEpilogueEnding);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDebugCutEditorTestValid(bool bInIsValid);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDebugAdventureIFTestValid(bool bInIsValid);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCueSheetListLoaded(bool InIsLoaded);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBattleMode010CharaSelectStart(bool bInIsBattleMode010CharaSelectStart);
    
    UFUNCTION(BlueprintCallable)
    void SetInviteSceneJumpRequesIsValid(bool InFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetInviteSceneIsErrorChkValid(bool InFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetFormChangeCharacterItemEquipment(const TArray<FKoratFormChangeCharacterItemEquipment>& InItemEquipment);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTravelSystem(bool InEnableTravelSystem);
    
    UFUNCTION(BlueprintCallable)
    void SetDramaticWLibStartMode(EKoratMenuWLibStartMode InWLibStartMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDramaticWLibBrowseUserId(const FString& InUserId);
    
    UFUNCTION(BlueprintCallable)
    void SetDramaticBattleOpeningLevelSequenceActor(ASSLevelSequenceActor* InLevelSequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void SetDramaticBattleEndingSubLevelForLevelSequence(ULevelStreamingDynamic* InSubLevelForLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetDramaticBattleEndingLevelSequenceActor(ASSLevelSequenceActor* InLevelSequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugNetRollType(const EDebugVirtualNetPlayerRoleType InDbgNetRollType);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMaxMaintain(int32 InPlayer, bool InFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCutEditorTestSetting(FSSDebugCutEditorTestSetting& InSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAdventureIFTestSetting(FSSDebugAdventureIFTestSetting& InSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSelectFillAllCharaTest(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBneSubmissionVer(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTimeoverRule(EKoratBattleTimeoverRule InRule);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTimelimit(float InTimelimit);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleStartMode(const EKoratBattleStartMode InBattleStartMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleStartFadeColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSetupStartMode(EKoratBattleSetupStartMode InBattleSetupMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSetupEnd(bool InbBattleSetupEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSettingLiveCommentary(bool InLiveCommentary);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSettingForStandByTraining(const FKoratBattleSetting InBattleSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSetting(const FKoratBattleSetting InBattleSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleReward(TArray<FKoratBattleReward> InBattleReward);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleRetrySettingMode(EKoratBattleRetryMode InBattleRetryMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleRetrySetting(FKoratBattleRetrySetting InBattleRetrySetting);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleResult(const FKoratBattleResult& InBattleResult);
    
    UFUNCTION(BlueprintCallable)
    void SetBattlePlayerTeam(const TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter>& InPlayerTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetBattlePlayers(const TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter>& InPlayers);
    
    UFUNCTION(BlueprintCallable)
    void SetBattlePauseResultMode(EKoratBattlePauseResultMode InBattlePauseResultMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBattlePauseMode(EKoratBattlePauseMode InBattlePauseMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleOnlineMode(const EKoratBattleOnlineMode InBattleOnlineMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleOfflineMode(const EKoratBattleOfflineMode InBattleOfflineMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMode010UseEventPointBoost(bool bInIsUse);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMode010BattleTime(FTimespan InBattleTime);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMenu(const EKoratBattleMenu InBattleMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMemberRule(const EKoratBattleMemberRule InBattleMemberRule);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMapSetting(bool InFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMap(const FKoratBattlePlayMap& InMap, const bool InSetBackUp);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleLiveCommentary(const bool InLiveCommentary);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleKeyMode(const EKoratBattleKeyMode InBattleKeyMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleFormat(const EKoratBattleFormat InBattleFormat);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingSetup(TArray<FKoratBattleDirectingSetup>& InTables);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingInfo(FKoratBattleDirectingInfo& InBattleDirectingInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleDirectingData(const FKoratBattleDirectingData& InBattleDirectingData);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleCpuLevel(const EKoratBattleCpuLevel InBattleCpuLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleCharacterSetting(bool InFlg);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleChangeSettingData(const FKoratBattleChangeSettingData& InBattleChangeSettingData);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleBGM(const FKoratBGMDataList& InBattleBGM);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoBattleLoopMapRandom(const bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoBattleLoopCharacterRandom(const bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoBattleLoopbPadAddRandom(const bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoBattleLoop(const bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAfterDramaticExtraBattle(bool InAfterDramaticExtraBattle);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveBattleDirectingTableIndex(const int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectBattleMode010Difficulty(ESSBattleMode010Difficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void ResetDefaultBattleSetting();
    
    UFUNCTION(BlueprintCallable)
    void ResetBattleStartFadeColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OpenFileDialog(const FString& Title, const FString& FileTypes, const FString& InLastPath, const bool bAllowMultipleFileSelections, FString& OutLastPath, TArray<FString>& OutOpenFilenames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipOpAppealInDramaticBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipEdAppealInDramaticBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetupStageListValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetupCharacterListValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetupBGMListValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineBattleMatching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineBattleMatched() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineBattleBeforeMatching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableTravelSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawMontageStateEnable() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDownloadBattleMode010Param();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugCutEditorTestValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugAdventureIFTestValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterSelectFillAllCharaTest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBneSubmissionVer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleStartModeRetry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleRetrySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleResultLinesExist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMode010CharaSelectStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMenuTrainingOrStandByTraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMenuTraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMenuStandByTraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMenuFreeTournamentTraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMenuDramaticBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMenuAdventureIf() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleDirectingActiveMode() const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidSetupStageList();
    
    UFUNCTION(BlueprintCallable)
    void InvalidSetupCharacterList();
    
    UFUNCTION(BlueprintCallable)
    void InvalidSetupBGMList();
    
    UFUNCTION(BlueprintCallable)
    void InvalidateBattleMapSetting();
    
    UFUNCTION(BlueprintCallable)
    void InvalidateBattleCharacterSetting();
    
    UFUNCTION(BlueprintCallable)
    void InitBattlePlayerTeam();
    
    UFUNCTION(BlueprintCallable)
    void InitBattleMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSVersionSettings* GetVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratTransitionMode GetTransitionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleCpuLevel GetTournamentDefaultCpuLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleCpuLevel GetTournamentCpuLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTitleGameVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratUILevelDataList GetStartupUILevelByDebugMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleStartAppealType GetStartAppealType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBGMDataList GetSparkingBGM2P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBGMDataList GetSparkingBGM1P() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratMapDataList> GetSetupStageList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratCharacterDataList> GetSetupCharacterList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratBGMDataList> GetSetupBGMList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSaveDataVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRetryPlayLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReplayUserIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetReplaySlotName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleReplaySaveGame* GetReplaySaveGame() const;
    
    UFUNCTION(BlueprintCallable)
    FSSRankMatchConditions GetRankMatchConditions();
    
    UFUNCTION(BlueprintCallable)
    USSPaperTheaterDataAsset* GetPaperTheaterData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOutField() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnlineBattleSlaveFlg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlineBattleRematchCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnlineBattleObserver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratOnlineBattleMatchingState GetOnlineBattleMatchingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnlineBattleFlg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNoMartialArts() const;
    
    UFUNCTION(BlueprintCallable)
    FSSOptionAssistParam GetMatchingAssistParam(int32 InPlaySide);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMainMenuLastDisplayedAreaIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLoseRetryCount() const;
    
    UFUNCTION(BlueprintCallable)
    USSLoggingToolManager* GetLoggingToolManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<USoundAtomCueSheet>> GetLoadCueSheetList() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLineSplitText(FText InText, TArray<FText>& OutSplitText);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsTransitionDramaticEpilogueEnding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCueSheetListLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetEventMessageText(FName InMessegeID);
    
    UFUNCTION(BlueprintCallable)
    FText GetEventCharaNameText(FName InCharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnhanceditems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleMenu GetEKoratBattleMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDramaVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSDramaticDataManager* GetDramaticDataManager() const;
    
    UFUNCTION(BlueprintCallable)
    ASSLevelSequenceActor* GetDramaticBattleOpeningLevelSequenceActor();
    
    UFUNCTION(BlueprintCallable)
    ULevelStreamingDynamic* GetDramaticBattleEndingSubLevelForLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    ASSLevelSequenceActor* GetDramaticBattleEndingLevelSequenceActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDebugVirtualNetPlayerRoleType GetDebugNetRollType() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugMaxMaintain(int32 InPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSDebugCutEditorTestSetting GetDebugCutEditorTestSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSDebugAdventureIFTestSetting GetDebugAdventureIFTestSetting() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetConversionText(FText InText, TArray<FText> InWord, const FString& InStyleName);
    
    UFUNCTION(BlueprintCallable)
    FText GetConversionDateTimeWithDigits(const FText InText, const TArray<int32> InDateTimeArray, const TArray<int32>& InDigitArray);
    
    UFUNCTION(BlueprintCallable)
    FText GetConversionDateTimePeriod(FText InText, TArray<int32> InDateTimePeriod);
    
    UFUNCTION(BlueprintCallable)
    FText GetConversionDateTime(FText InText, TArray<int32> InDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCommonFadeTimeBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBattleVersion() const;
    
    UFUNCTION(BlueprintCallable)
    EKoratBattleTimeoverRule GetBattleTimeoverRule();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleStartMode GetBattleStartMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetBattleStartFadeColor() const;
    
    UFUNCTION(BlueprintCallable)
    EKoratBattleSetupStartMode GetBattleSetupStartMode();
    
    UFUNCTION(BlueprintCallable)
    bool GetBattleSetupEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratCharacterDataList> GetBattleSetupCharacterList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBattleSetting GetBattleSettingForStandByTraining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBattleSetting GetBattleSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratBattleReward> GetBattleReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBattleResultLines GetBattleResultLines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter> GetBattlePlayers() const;
    
    UFUNCTION(BlueprintCallable)
    EKoratBattlePauseResultMode GetBattlePauseResultMode();
    
    UFUNCTION(BlueprintCallable)
    EKoratBattlePauseMode GetBattlePauseMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleOnlineMode GetBattleOnlineMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleOfflineMode GetBattleOfflineMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSBattleMode011Result GetBattleMode011Result() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSBattleMode011Param GetBattleMode011Param() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSBattleMode010Result GetBattleMode010Result() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSBattleMode010Param GetBattleMode010Param() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleMode010EPBonus(FKoratCharacterDataList InCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBattlePlayMap GetBattleMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleLiveCommentary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleKeyMode GetBattleKeyMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratBattleFormat GetBattleFormat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratCharaSortMenuDataRecord> GetBattleCharacterSortElements() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FKoratCharacterFilterDataList> GetBattleCharacterFilterElements(EKoratSortFilterUseMode UseMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBGMDataList GetBattleBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoBattleLoopPadAddRandom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoBattleLoopMapRandom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoBattleLoopCharacterRandom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoBattleLoop() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAgingReplayDataNameList();
    
    UFUNCTION(BlueprintCallable)
    void EndActivityFromMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void EndActivityFromDragonAdventureIF();
    
    UFUNCTION(BlueprintCallable)
    void DownloadBattleMode010Param();
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleDirectingData();
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleChangeSettingData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleWinLose CheckSpConclusionWithKnockDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckKnockDown(const FKoratBattleDirectingCondition& InCondition, const bool InMoment) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSKeyInputType ChangeRichTextTagTableKey(const FText& InText, FText& OutKeyText, FText& OutText, int32 PlaySide) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSKeyInputType ChangeRichTextTagTable(const FText& InText, FText& OutText, ETextGender InGender, int32 PlaySide, ESSOptionManagerPlatformType InPlatformType) const;
    
    UFUNCTION(BlueprintCallable)
    void AddBattleReward(TArray<FKoratBattleReward> InBattleReward);
    
};


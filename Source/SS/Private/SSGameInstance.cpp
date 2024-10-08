#include "SSGameInstance.h"

USSGameInstance::USSGameInstance() {
    this->bDebug1PMaxMaintain = false;
    this->bDebug2PMaxMaintain = false;
    this->bSetupStageListIsValid = false;
    this->bSetupCharacterListIsValid = false;
    this->bSetupBGMListIsValid = false;
    this->IsCueSheetListLoaded = false;
    this->bBattleSetupCameraMode = false;
    this->ActiveBattleDirectingTableIndex = 0;
    this->OnlineBattleMatchingState = EKoratOnlineBattleMatchingState::None;
    this->bOnlineBattleObserver = false;
    this->OnlineBattleRematchCount = 0;
    this->BattleStartMode = EKoratBattleStartMode::First;
    this->TransitionMode = EKoratTransitionMode::Battle;
    this->ReplayRetryCount = 0;
    this->BattlePauseMode = EKoratBattlePauseMode::Normal;
    this->BattlePauseResultMode = EKoratBattlePauseResultMode::Non;
    this->ReplaySaveGame = NULL;
    this->ReplaySlotName = TEXT("ReplaySave");
    this->ReplayUserIndex = 0;
    this->bAgingReplayLoop = false;
    this->bDebugReplayOptionMap = true;
    this->bDebugReplayOptionCharacter = true;
    this->bDebugReplayOptionRandomSeed = true;
    this->bDebugReplayOptionAI = true;
    this->DramaticBattleOpeningLevelSequenceActor = NULL;
    this->DramaticBattleEndingSubLevelForLevelSequence = NULL;
    this->DramaticBattleEndingLevelSequenceActor = NULL;
    this->bIsTransitionDramaticEpilogueEnding = false;
    this->bIsAfterDramaticEnding = false;
    this->DaramaticDataManager = NULL;
    this->bStartKoratPDramaticImageGeneration = false;
    this->bTitleCompanyLogoDisplayed = false;
    this->bActivitySetEnd = false;
    this->bDebugTitleTransitionAdjust = false;
    this->bStartKoratPAfterLanguageSetting = false;
    this->RequestLangCode = 0;
    this->bStartupSystemLangCodeEnable = false;
    this->StartupSystemLangCode = 0;
    this->MainMenuLastDisplayedAreaIndex = -1;
    this->MissionMode = EMenuMissionMode::LifeLong;
    this->MissionManager = NULL;
    this->WishCTType = EDragonType::None;
    this->MythicalOrbManager = NULL;
    this->RankingType = 0;
    this->bTournamentSetup = false;
    this->TournamentRound = 0;
    this->TournamentCompleteBattles = 0;
    this->bTournamentFinalWinWithoutPlaying = false;
    this->NotificationManager = NULL;
    this->PaperTheaterData = NULL;
    this->InputDeviceManager = NULL;
    this->MenuInterruptManager = NULL;
    this->WaitingIconManager = NULL;
    this->ChunkInstallManager = NULL;
    this->DownLoadContentsManager = NULL;
    this->DramaticImageGenerationManager = NULL;
    this->ShareUtility = NULL;
    this->AdventureIFTestManager = NULL;
    this->LoggingToolManager = NULL;
    this->KeyInputType = ESSOptionManagerPlatformType::Auto;
    this->KeyInputType2P = ESSOptionManagerPlatformType::Auto;
    this->ChangeKeyInputTypeMode = 0;
    this->bChangeKeyInputJapanKeybord = false;
    this->bChangeKeyInputFrenchKeybord = false;
    this->bChangeKeyInputGermanKeybord = false;
    this->bChangeKeyInputThaiKeybord = false;
    this->InteractiveWindMaterialParameterCollection = NULL;
    this->bEnableTravelSystem = false;
    this->DebugStopWatch = NULL;
    this->BattleSetupStartMode = EKoratBattleSetupStartMode::None;
    this->bBattleSetupEnd = false;
    this->bDrawMontageStateEnable = false;
    this->bCharacterSelectFillAllCharaEnable = false;
    this->bBneSubmissionVer = false;
    this->DoubleClickLimitTime = 0.30f;
    this->MPCController = NULL;
}

void USSGameInstance::ValidSetupStageList() {
}

void USSGameInstance::ValidSetupCharacterList() {
}

void USSGameInstance::ValidSetupBGMList() {
}

void USSGameInstance::ValidateBattleMapSetting() {
}

void USSGameInstance::ValidateBattleCharacterSetting() {
}

void USSGameInstance::UpdateBattlePlayerTeamState() {
}

void USSGameInstance::UpdateBattleMode010Param() {
}

int32 USSGameInstance::TeamCharacterAdd(int32 InTeamNo, FKoratCharacterDataList InCharacter, FKoratCharacterCostumeDataList InCostume, bool bCirculation) {
    return 0;
}

void USSGameInstance::StartActivityFromMainMenu(const FString& InActivityId) {
}

void USSGameInstance::SetWishCTType(EDragonType InDragonType) {
}

bool USSGameInstance::SetupReplayDataForDebugOnlineBattle(const FString& InSlotName, int32 InUserIndex, const FString& InRootPath) {
    return false;
}

bool USSGameInstance::SetupReplayData(const FString& InSlotName, int32 InUserIndex, const FString& InRootPath) {
    return false;
}

void USSGameInstance::SetupMapRandom() {
}

void USSGameInstance::SetupKeyToDeviceIconType(const FKey& InKey, ASSPlayerController* InPlayerController) {
}

void USSGameInstance::SetupCharacterRandom() {
}

void USSGameInstance::SetTutorialData() {
}

void USSGameInstance::SetTransitionMode(const EKoratTransitionMode InTransitionMode) {
}

void USSGameInstance::SetTournamentCpuLevel(EKoratBattleCpuLevel InCpuLevel) {
}

void USSGameInstance::SetTeamCameraSpeed(int32 InPlayerNo, int32 InLR, int32 InUD) {
}

void USSGameInstance::SetTeamAssistParamAuto() {
}

void USSGameInstance::SetTeamAssistParam(int32 InPlayerNo, FSSOptionAssistParam InAssistParam) {
}

void USSGameInstance::SetStartupUILevelByDebugMenu(FKoratUILevelDataList InUILevel) {
}

void USSGameInstance::SetStartAppealType(EKoratBattleStartAppealType InStartAppealType) {
}

void USSGameInstance::SetSparkingBGM2P(const FKoratBGMDataList& InSparkingBGM2P) {
}

void USSGameInstance::SetSparkingBGM1P(const FKoratBGMDataList& InSparkingBGM1P) {
}

void USSGameInstance::SetSetupStageList(const TArray<FKoratMapDataList>& InSetupStageList) {
}

void USSGameInstance::SetSetupCharacterList(const TArray<FKoratCharacterDataList>& InSetupStageList) {
}

void USSGameInstance::SetSetupBGMList(const TArray<FKoratBGMDataList>& InSetupBGMList) {
}

void USSGameInstance::SetRetryPlayLevel(int32 InRetryPlayLevel) {
}

void USSGameInstance::SetReplaySlotName(const FString& InReplaySlotName, const int32 InReplayUserIndex) {
}

void USSGameInstance::SetReplaySaveGame(USSBattleReplaySaveGame* InReplaySaveGame) {
}

void USSGameInstance::SetRankMatchConditions(FSSRankMatchConditions InConditions) {
}

void USSGameInstance::SetRankingType(int32 InType) {
}

void USSGameInstance::SetPaperTheaterData(USSPaperTheaterDataAsset* InPaperTheaterData) {
}

void USSGameInstance::SetOutField(const bool InOutField) {
}

void USSGameInstance::SetOnlineBattleSlaveFlg(const bool InOnlineSlaveFlg) {
}

void USSGameInstance::SetOnlineBattleRematchCount(int32 InCount) {
}

void USSGameInstance::SetOnlineBattleObserver(bool InObserver) {
}

void USSGameInstance::SetOnlineBattleMatchingState(EKoratOnlineBattleMatchingState InState) {
}

void USSGameInstance::SetOnlineBattleFlg(const bool InOnlineModeFlg) {
}

void USSGameInstance::SetNoMartialArts(const bool InNoMartialArts) {
}

void USSGameInstance::SetNoChangeAll(const bool InNoChange) {
}

void USSGameInstance::SetMissionMode(EMenuMissionMode InMissionMode) {
}

void USSGameInstance::SetMainMenuLastDisplayedAreaIndex(int32 InIndex) {
}

void USSGameInstance::SetLoseRetryCount(int32 InLoseRetryCount) {
}

void USSGameInstance::SetLoadCueSheetList(const TArray<TSoftObjectPtr<USoundAtomCueSheet>>& InLoadCueSheet) {
}

void USSGameInstance::SetIsTransitionDramaticEpilogueEnding(bool InIsTransitionEpilogueEnding) {
}

void USSGameInstance::SetIsDebugCutEditorTestValid(bool bInIsValid) {
}

void USSGameInstance::SetIsDebugAdventureIFTestValid(bool bInIsValid) {
}

void USSGameInstance::SetIsCueSheetListLoaded(bool InIsLoaded) {
}

void USSGameInstance::SetIsBattleMode010CharaSelectStart(bool bInIsBattleMode010CharaSelectStart) {
}

void USSGameInstance::SetInviteSceneJumpRequesIsValid(bool InFlg) {
}

void USSGameInstance::SetInviteSceneIsErrorChkValid(bool InFlg) {
}

void USSGameInstance::SetFormChangeCharacterItemEquipment(const TArray<FKoratFormChangeCharacterItemEquipment>& InItemEquipment) {
}

void USSGameInstance::SetEnableTravelSystem(bool InEnableTravelSystem) {
}

void USSGameInstance::SetDramaticWLibStartMode(EKoratMenuWLibStartMode InWLibStartMode) {
}

void USSGameInstance::SetDramaticWLibBrowseUserId(const FString& InUserId) {
}

void USSGameInstance::SetDramaticBattleOpeningLevelSequenceActor(ASSLevelSequenceActor* InLevelSequenceActor) {
}

void USSGameInstance::SetDramaticBattleEndingSubLevelForLevelSequence(ULevelStreamingDynamic* InSubLevelForLevelSequence) {
}

void USSGameInstance::SetDramaticBattleEndingLevelSequenceActor(ASSLevelSequenceActor* InLevelSequenceActor) {
}

void USSGameInstance::SetDebugNetRollType(const EDebugVirtualNetPlayerRoleType InDbgNetRollType) {
}

void USSGameInstance::SetDebugMaxMaintain(int32 InPlayer, bool InFlg) {
}

void USSGameInstance::SetDebugCutEditorTestSetting(FSSDebugCutEditorTestSetting& InSetting) {
}

void USSGameInstance::SetDebugAdventureIFTestSetting(FSSDebugAdventureIFTestSetting& InSetting) {
}

void USSGameInstance::SetCharacterSelectFillAllCharaTest(bool bInEnable) {
}

void USSGameInstance::SetBneSubmissionVer(bool bInEnable) {
}

void USSGameInstance::SetBattleTimeoverRule(EKoratBattleTimeoverRule InRule) {
}

void USSGameInstance::SetBattleTimelimit(float InTimelimit) {
}

void USSGameInstance::SetBattleStartMode(const EKoratBattleStartMode InBattleStartMode) {
}

void USSGameInstance::SetBattleStartFadeColor(const FLinearColor& InColor) {
}

void USSGameInstance::SetBattleSetupStartMode(EKoratBattleSetupStartMode InBattleSetupMode) {
}

void USSGameInstance::SetBattleSetupEnd(bool InbBattleSetupEnd) {
}

void USSGameInstance::SetBattleSettingLiveCommentary(bool InLiveCommentary) {
}

void USSGameInstance::SetBattleSettingForStandByTraining(const FKoratBattleSetting InBattleSetting) {
}

void USSGameInstance::SetBattleSetting(const FKoratBattleSetting InBattleSetting) {
}

void USSGameInstance::SetBattleReward(TArray<FKoratBattleReward> InBattleReward) {
}

void USSGameInstance::SetBattleRetrySettingMode(EKoratBattleRetryMode InBattleRetryMode) {
}

void USSGameInstance::SetBattleRetrySetting(FKoratBattleRetrySetting InBattleRetrySetting) {
}

void USSGameInstance::SetBattleResult(const FKoratBattleResult& InBattleResult) {
}

void USSGameInstance::SetBattlePlayerTeam(const TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter>& InPlayerTeam) {
}

void USSGameInstance::SetBattlePlayers(const TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter>& InPlayers) {
}

void USSGameInstance::SetBattlePauseResultMode(EKoratBattlePauseResultMode InBattlePauseResultMode) {
}

void USSGameInstance::SetBattlePauseMode(EKoratBattlePauseMode InBattlePauseMode) {
}

void USSGameInstance::SetBattleOnlineMode(const EKoratBattleOnlineMode InBattleOnlineMode) {
}

void USSGameInstance::SetBattleOfflineMode(const EKoratBattleOfflineMode InBattleOfflineMode) {
}

void USSGameInstance::SetBattleMode010UseEventPointBoost(bool bInIsUse) {
}

void USSGameInstance::SetBattleMode010BattleTime(FTimespan InBattleTime) {
}

void USSGameInstance::SetBattleMenu(const EKoratBattleMenu InBattleMenu) {
}

void USSGameInstance::SetBattleMemberRule(const EKoratBattleMemberRule InBattleMemberRule) {
}

void USSGameInstance::SetBattleMapSetting(bool InFlg) {
}

void USSGameInstance::SetBattleMap(const FKoratBattlePlayMap& InMap, const bool InSetBackUp) {
}

void USSGameInstance::SetBattleLiveCommentary(const bool InLiveCommentary) {
}

void USSGameInstance::SetBattleKeyMode(const EKoratBattleKeyMode InBattleKeyMode) {
}

void USSGameInstance::SetBattleFormat(const EKoratBattleFormat InBattleFormat) {
}

void USSGameInstance::SetBattleDirectingSetup(TArray<FKoratBattleDirectingSetup>& InTables) {
}

void USSGameInstance::SetBattleDirectingInfo(FKoratBattleDirectingInfo& InBattleDirectingInfo) {
}

void USSGameInstance::SetBattleDirectingData(const FKoratBattleDirectingData& InBattleDirectingData) {
}

void USSGameInstance::SetBattleCpuLevel(const EKoratBattleCpuLevel InBattleCpuLevel) {
}

void USSGameInstance::SetBattleCharacterSetting(bool InFlg) {
}

void USSGameInstance::SetBattleChangeSettingData(const FKoratBattleChangeSettingData& InBattleChangeSettingData) {
}

void USSGameInstance::SetBattleBGM(const FKoratBGMDataList& InBattleBGM) {
}

void USSGameInstance::SetAutoBattleLoopMapRandom(const bool InEnable) {
}

void USSGameInstance::SetAutoBattleLoopCharacterRandom(const bool InEnable) {
}

void USSGameInstance::SetAutoBattleLoopbPadAddRandom(const bool InEnable) {
}

void USSGameInstance::SetAutoBattleLoop(const bool InEnable) {
}

void USSGameInstance::SetAfterDramaticExtraBattle(bool InAfterDramaticExtraBattle) {
}

void USSGameInstance::SetActiveBattleDirectingTableIndex(const int32 InIndex) {
}

void USSGameInstance::SelectBattleMode010Difficulty(ESSBattleMode010Difficulty InDifficulty) {
}

void USSGameInstance::ResetDefaultBattleSetting() {
}

void USSGameInstance::ResetBattleStartFadeColor() {
}

bool USSGameInstance::OpenFileDialog(const FString& Title, const FString& FileTypes, const FString& InLastPath, const bool bAllowMultipleFileSelections, FString& OutLastPath, TArray<FString>& OutOpenFilenames) const {
    return false;
}

bool USSGameInstance::IsSkipOpAppealInDramaticBattle() const {
    return false;
}

bool USSGameInstance::IsSkipEdAppealInDramaticBattle() const {
    return false;
}

bool USSGameInstance::IsSetupStageListValid() const {
    return false;
}

bool USSGameInstance::IsSetupCharacterListValid() const {
    return false;
}

bool USSGameInstance::IsSetupBGMListValid() const {
    return false;
}

bool USSGameInstance::IsOnlineBattleMatching() const {
    return false;
}

bool USSGameInstance::IsOnlineBattleMatched() const {
    return false;
}

bool USSGameInstance::IsOnlineBattleBeforeMatching() const {
    return false;
}

bool USSGameInstance::IsEnableTravelSystem() const {
    return false;
}

bool USSGameInstance::IsDrawMontageStateEnable() const {
    return false;
}

bool USSGameInstance::IsDownloadBattleMode010Param() {
    return false;
}

bool USSGameInstance::IsDebugCutEditorTestValid() const {
    return false;
}

bool USSGameInstance::IsDebugAdventureIFTestValid() const {
    return false;
}

bool USSGameInstance::IsCharacterSelectFillAllCharaTest() const {
    return false;
}

bool USSGameInstance::IsBneSubmissionVer() const {
    return false;
}

bool USSGameInstance::IsBattleStartModeRetry() const {
    return false;
}

bool USSGameInstance::IsBattleRetrySetting() const {
    return false;
}

bool USSGameInstance::IsBattleResultLinesExist() const {
    return false;
}

bool USSGameInstance::IsBattleMode010CharaSelectStart() const {
    return false;
}

bool USSGameInstance::IsBattleMenuTrainingOrStandByTraining() const {
    return false;
}

bool USSGameInstance::IsBattleMenuTraining() const {
    return false;
}

bool USSGameInstance::IsBattleMenuStandByTraining() const {
    return false;
}

bool USSGameInstance::IsBattleMenuFreeTournamentTraining() const {
    return false;
}

bool USSGameInstance::IsBattleMenuDramaticBattle() const {
    return false;
}

bool USSGameInstance::IsBattleMenuAdventureIf() const {
    return false;
}

bool USSGameInstance::IsBattleDirectingActiveMode() const {
    return false;
}

void USSGameInstance::InvalidSetupStageList() {
}

void USSGameInstance::InvalidSetupCharacterList() {
}

void USSGameInstance::InvalidSetupBGMList() {
}

void USSGameInstance::InvalidateBattleMapSetting() {
}

void USSGameInstance::InvalidateBattleCharacterSetting() {
}

void USSGameInstance::InitBattlePlayerTeam() {
}

void USSGameInstance::InitBattleMap() {
}

USSVersionSettings* USSGameInstance::GetVersion() const {
    return NULL;
}

EKoratTransitionMode USSGameInstance::GetTransitionMode() const {
    return EKoratTransitionMode::Battle;
}

EKoratBattleCpuLevel USSGameInstance::GetTournamentDefaultCpuLevel() const {
    return EKoratBattleCpuLevel::None;
}

EKoratBattleCpuLevel USSGameInstance::GetTournamentCpuLevel() const {
    return EKoratBattleCpuLevel::None;
}

FString USSGameInstance::GetTitleGameVersion() const {
    return TEXT("");
}

FKoratUILevelDataList USSGameInstance::GetStartupUILevelByDebugMenu() const {
    return FKoratUILevelDataList{};
}

EKoratBattleStartAppealType USSGameInstance::GetStartAppealType() const {
    return EKoratBattleStartAppealType::Normal;
}

FKoratBGMDataList USSGameInstance::GetSparkingBGM2P() const {
    return FKoratBGMDataList{};
}

FKoratBGMDataList USSGameInstance::GetSparkingBGM1P() const {
    return FKoratBGMDataList{};
}

TArray<FKoratMapDataList> USSGameInstance::GetSetupStageList() const {
    return TArray<FKoratMapDataList>();
}

TArray<FKoratCharacterDataList> USSGameInstance::GetSetupCharacterList() const {
    return TArray<FKoratCharacterDataList>();
}

TArray<FKoratBGMDataList> USSGameInstance::GetSetupBGMList() const {
    return TArray<FKoratBGMDataList>();
}

FString USSGameInstance::GetServerVersion() const {
    return TEXT("");
}

FString USSGameInstance::GetSaveDataVersion() const {
    return TEXT("");
}

int32 USSGameInstance::GetRetryPlayLevel() const {
    return 0;
}

int32 USSGameInstance::GetReplayUserIndex() const {
    return 0;
}

FString USSGameInstance::GetReplaySlotName() const {
    return TEXT("");
}

USSBattleReplaySaveGame* USSGameInstance::GetReplaySaveGame() const {
    return NULL;
}

FSSRankMatchConditions USSGameInstance::GetRankMatchConditions() {
    return FSSRankMatchConditions{};
}

USSPaperTheaterDataAsset* USSGameInstance::GetPaperTheaterData() {
    return NULL;
}

bool USSGameInstance::GetOutField() const {
    return false;
}

bool USSGameInstance::GetOnlineBattleSlaveFlg() const {
    return false;
}

int32 USSGameInstance::GetOnlineBattleRematchCount() const {
    return 0;
}

bool USSGameInstance::GetOnlineBattleObserver() const {
    return false;
}

EKoratOnlineBattleMatchingState USSGameInstance::GetOnlineBattleMatchingState() const {
    return EKoratOnlineBattleMatchingState::None;
}

bool USSGameInstance::GetOnlineBattleFlg() const {
    return false;
}

bool USSGameInstance::GetNoMartialArts() const {
    return false;
}

FSSOptionAssistParam USSGameInstance::GetMatchingAssistParam(int32 InPlaySide) {
    return FSSOptionAssistParam{};
}

int32 USSGameInstance::GetMainMenuLastDisplayedAreaIndex() {
    return 0;
}

int32 USSGameInstance::GetLoseRetryCount() const {
    return 0;
}

USSLoggingToolManager* USSGameInstance::GetLoggingToolManager() {
    return NULL;
}

TArray<TSoftObjectPtr<USoundAtomCueSheet>> USSGameInstance::GetLoadCueSheetList() const {
    return TArray<TSoftObjectPtr<USoundAtomCueSheet>>();
}

int32 USSGameInstance::GetLineSplitText(FText InText, TArray<FText>& OutSplitText) {
    return 0;
}

bool USSGameInstance::GetIsTransitionDramaticEpilogueEnding() {
    return false;
}

bool USSGameInstance::GetIsCueSheetListLoaded() const {
    return false;
}

FText USSGameInstance::GetEventMessageText(FName InMessegeID) {
    return FText::GetEmpty();
}

FText USSGameInstance::GetEventCharaNameText(FName InCharaID) {
    return FText::GetEmpty();
}

bool USSGameInstance::GetEnhanceditems() const {
    return false;
}

EKoratBattleMenu USSGameInstance::GetEKoratBattleMenu() const {
    return EKoratBattleMenu::SetupBattle;
}

FString USSGameInstance::GetDramaVersion() const {
    return TEXT("");
}

USSDramaticDataManager* USSGameInstance::GetDramaticDataManager() const {
    return NULL;
}

ASSLevelSequenceActor* USSGameInstance::GetDramaticBattleOpeningLevelSequenceActor() {
    return NULL;
}

ULevelStreamingDynamic* USSGameInstance::GetDramaticBattleEndingSubLevelForLevelSequence() {
    return NULL;
}

ASSLevelSequenceActor* USSGameInstance::GetDramaticBattleEndingLevelSequenceActor() {
    return NULL;
}

EDebugVirtualNetPlayerRoleType USSGameInstance::GetDebugNetRollType() const {
    return EDebugVirtualNetPlayerRoleType::Off;
}

bool USSGameInstance::GetDebugMaxMaintain(int32 InPlayer) {
    return false;
}

FSSDebugCutEditorTestSetting USSGameInstance::GetDebugCutEditorTestSetting() const {
    return FSSDebugCutEditorTestSetting{};
}

FSSDebugAdventureIFTestSetting USSGameInstance::GetDebugAdventureIFTestSetting() const {
    return FSSDebugAdventureIFTestSetting{};
}

FText USSGameInstance::GetConversionText(FText InText, TArray<FText> InWord, const FString& InStyleName) {
    return FText::GetEmpty();
}

FText USSGameInstance::GetConversionDateTimeWithDigits(const FText InText, const TArray<int32> InDateTimeArray, const TArray<int32>& InDigitArray) {
    return FText::GetEmpty();
}

FText USSGameInstance::GetConversionDateTimePeriod(FText InText, TArray<int32> InDateTimePeriod) {
    return FText::GetEmpty();
}

FText USSGameInstance::GetConversionDateTime(FText InText, TArray<int32> InDateTime) {
    return FText::GetEmpty();
}

float USSGameInstance::GetCommonFadeTimeBP() const {
    return 0.0f;
}

FString USSGameInstance::GetBattleVersion() const {
    return TEXT("");
}

EKoratBattleTimeoverRule USSGameInstance::GetBattleTimeoverRule() {
    return EKoratBattleTimeoverRule::None;
}

EKoratBattleStartMode USSGameInstance::GetBattleStartMode() const {
    return EKoratBattleStartMode::First;
}

FLinearColor USSGameInstance::GetBattleStartFadeColor() const {
    return FLinearColor{};
}

EKoratBattleSetupStartMode USSGameInstance::GetBattleSetupStartMode() {
    return EKoratBattleSetupStartMode::None;
}

bool USSGameInstance::GetBattleSetupEnd() {
    return false;
}

TArray<FKoratCharacterDataList> USSGameInstance::GetBattleSetupCharacterList() const {
    return TArray<FKoratCharacterDataList>();
}

FKoratBattleSetting USSGameInstance::GetBattleSettingForStandByTraining() const {
    return FKoratBattleSetting{};
}

FKoratBattleSetting USSGameInstance::GetBattleSetting() const {
    return FKoratBattleSetting{};
}

TArray<FKoratBattleReward> USSGameInstance::GetBattleReward() const {
    return TArray<FKoratBattleReward>();
}

FKoratBattleResultLines USSGameInstance::GetBattleResultLines() const {
    return FKoratBattleResultLines{};
}

TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter> USSGameInstance::GetBattlePlayers() const {
    return TMap<FKoratPlayerStartDataList, FKoratBattlePlayCharacter>();
}

EKoratBattlePauseResultMode USSGameInstance::GetBattlePauseResultMode() {
    return EKoratBattlePauseResultMode::Non;
}

EKoratBattlePauseMode USSGameInstance::GetBattlePauseMode() {
    return EKoratBattlePauseMode::Normal;
}

EKoratBattleOnlineMode USSGameInstance::GetBattleOnlineMode() const {
    return EKoratBattleOnlineMode::None;
}

EKoratBattleOfflineMode USSGameInstance::GetBattleOfflineMode() const {
    return EKoratBattleOfflineMode::SingleBattle;
}

FSSBattleMode011Result USSGameInstance::GetBattleMode011Result() const {
    return FSSBattleMode011Result{};
}

FSSBattleMode011Param USSGameInstance::GetBattleMode011Param() const {
    return FSSBattleMode011Param{};
}

FSSBattleMode010Result USSGameInstance::GetBattleMode010Result() const {
    return FSSBattleMode010Result{};
}

FSSBattleMode010Param USSGameInstance::GetBattleMode010Param() const {
    return FSSBattleMode010Param{};
}

int32 USSGameInstance::GetBattleMode010EPBonus(FKoratCharacterDataList InCharacterId) {
    return 0;
}

FKoratBattlePlayMap USSGameInstance::GetBattleMap() const {
    return FKoratBattlePlayMap{};
}

bool USSGameInstance::GetBattleLiveCommentary() const {
    return false;
}

EKoratBattleKeyMode USSGameInstance::GetBattleKeyMode() const {
    return EKoratBattleKeyMode::Key1Pvs2P;
}

EKoratBattleFormat USSGameInstance::GetBattleFormat() const {
    return EKoratBattleFormat::OneVsOne;
}

TArray<FKoratCharaSortMenuDataRecord> USSGameInstance::GetBattleCharacterSortElements() const {
    return TArray<FKoratCharaSortMenuDataRecord>();
}

TArray<FKoratCharacterFilterDataList> USSGameInstance::GetBattleCharacterFilterElements(EKoratSortFilterUseMode UseMode) {
    return TArray<FKoratCharacterFilterDataList>();
}

FKoratBGMDataList USSGameInstance::GetBattleBGM() const {
    return FKoratBGMDataList{};
}

bool USSGameInstance::GetAutoBattleLoopPadAddRandom() const {
    return false;
}

bool USSGameInstance::GetAutoBattleLoopMapRandom() const {
    return false;
}

bool USSGameInstance::GetAutoBattleLoopCharacterRandom() const {
    return false;
}

bool USSGameInstance::GetAutoBattleLoop() const {
    return false;
}

TArray<FString> USSGameInstance::GetAgingReplayDataNameList() {
    return TArray<FString>();
}

void USSGameInstance::EndActivityFromMainMenu() {
}

void USSGameInstance::EndActivityFromDragonAdventureIF() {
}

void USSGameInstance::DownloadBattleMode010Param() {
}

void USSGameInstance::ClearBattleDirectingData() {
}

void USSGameInstance::ClearBattleChangeSettingData() {
}

EBattleWinLose USSGameInstance::CheckSpConclusionWithKnockDown() const {
    return EBattleWinLose::None;
}

bool USSGameInstance::CheckKnockDown(const FKoratBattleDirectingCondition& InCondition, const bool InMoment) const {
    return false;
}

ESSKeyInputType USSGameInstance::ChangeRichTextTagTableKey(const FText& InText, FText& OutKeyText, FText& OutText, int32 PlaySide) const {
    return ESSKeyInputType::UI_Option;
}

ESSKeyInputType USSGameInstance::ChangeRichTextTagTable(const FText& InText, FText& OutText, ETextGender InGender, int32 PlaySide, ESSOptionManagerPlatformType InPlatformType) const {
    return ESSKeyInputType::UI_Option;
}

void USSGameInstance::AddBattleReward(TArray<FKoratBattleReward> InBattleReward) {
}



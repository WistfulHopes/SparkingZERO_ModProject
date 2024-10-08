#include "KoratGameSingleton.h"
#include "KoratAttackCollisionPool.h"
#include "KoratFreeTimelinePlayerFactoryProxy.h"
#include "SSAppNetworkWorker.h"
#include "SSEffectManager.h"
#include "SSPlayerMatchNetworkManager.h"
#include "SSReplayDataUIManager.h"
#include "SSReplayManager.h"
#include "SSSaveDataManager.h"
#include "SSSoundManager.h"

UKoratGameSingleton::UKoratGameSingleton() {
    this->FacialExpressionData = NULL;
    this->ExFacialExpressionData = NULL;
    this->BattleAssetData = NULL;
    this->BattleScenePhaseData = NULL;
    this->MenuCommonAssetData = NULL;
    this->DragonAdventureIFData = NULL;
    this->DragonAdventureIFChartData = NULL;
    this->DragonAdventureIFCommonData = NULL;
    this->DragonAdventureIFRouteClearInfo = NULL;
    this->GalleryTheaterData = NULL;
    this->GalleryMyDataData = NULL;
    this->GalleryPictureBookData = NULL;
    this->PlayerCardData = NULL;
    this->EndingData = NULL;
    this->MovieListData = NULL;
    this->BattleTrainingData = NULL;
    this->BattleTrainingLinesListData = NULL;
    this->BattleTrainingItemListData = NULL;
    this->BattleTrainingSettingListData = NULL;
    this->BattleTrainingCommandListData = NULL;
    this->BattleTrainingBattleUiData = NULL;
    this->TrainingBattleUiData = NULL;
    this->TutorialBattleUiData = NULL;
    this->DramaticBattleAssetDataAsset = NULL;
    this->DramaticBattleBattleDataAsset = NULL;
    this->DramaticExtraData = NULL;
    this->BattleSetupAssetData = NULL;
    this->TeamTalkAssetData = NULL;
    this->ShopMenuAssetData = NULL;
    this->BannerAssetData = NULL;
    this->ShopFloorAssetData = NULL;
    this->ShopSalesItemAssetData = NULL;
    this->ShopBaseItemAssetData = NULL;
    this->MainMenuAssetData = NULL;
    this->MainMenuSceneData = NULL;
    this->MainMenuListMenuData = NULL;
    this->MainMenuSubLevelData = NULL;
    this->MatchingCondPropData = NULL;
    this->NotificationData = NULL;
    this->WishCTData = NULL;
    this->WishCTResource = NULL;
    this->WishCTCategory = NULL;
    this->WishCTContents = NULL;
    this->RankingResource = NULL;
    this->PLMRoomResource = NULL;
    this->TournamentSelectResources = NULL;
    this->TournamentChartResources = NULL;
    this->TournamentListData = NULL;
    this->FreeTournamentResources = NULL;
    this->BattleMode010ListData = NULL;
    this->EventSceneMenuData = NULL;
    this->TitleData = NULL;
    this->TitleCompanyLogoData = NULL;
    this->TutorialData = NULL;
    this->CharacterData = NULL;
    this->CharacterFigureData = NULL;
    this->ReplaceAnimation = NULL;
    this->SubInstanceTagData = NULL;
    this->CharacterBoneData = NULL;
    this->SpeciesData = NULL;
    this->CharacterGroupData = NULL;
    this->BlastGroupData = NULL;
    this->BuffFormTypeData = NULL;
    this->DefaultCharacterData = NULL;
    this->PlayerStartData = NULL;
    this->UILevelData = NULL;
    this->MapData = NULL;
    this->SubLevelLoadParamsData = NULL;
    this->MultiDeviceSettingData = NULL;
    this->EffectAtbTypeData = NULL;
    this->EffectAtbBrkTypeData = NULL;
    this->TermsListData = NULL;
    this->IconTitleListData = NULL;
    this->TextTitleListData = NULL;
    this->EditPartsImageListData = NULL;
    this->EditPartsTextListData = NULL;
    this->StampListData = NULL;
    this->PlayerCardBGListData = NULL;
    this->AuraPointLightData = NULL;
    this->AuraRimLightData = NULL;
    this->AuraLevelData = NULL;
    this->AuraAssignData = NULL;
    this->AuraCommonAssignData = NULL;
    this->AuraCommonData = NULL;
    this->EquipmentPointLightData = NULL;
    this->WorldPointLightData = NULL;
    this->EquipmentRimLightData = NULL;
    this->PointLightFrequencyData = NULL;
    this->RimLightFrequencyData = NULL;
    this->EffectToonPointLightGroupData = NULL;
    this->EffectExpData = NULL;
    this->EffectDrownOutData = NULL;
    this->EffectHitData = NULL;
    this->EffectBulletRatData = NULL;
    this->EffectBulletDecalAndKnockData = NULL;
    this->EffectRatData = NULL;
    this->DebugDecalActorManager = NULL;
    this->EffectHitAirWallData = NULL;
    this->EffectStaData = NULL;
    this->EffectEnvData = NULL;
    this->WaterEffectData = NULL;
    this->BattleEffectData = NULL;
    this->ActionData = NULL;
    this->CombativesKeyData = NULL;
    this->BulletKeyData = NULL;
    this->EffectBoneSocketData = NULL;
    this->BulletEffectData = NULL;
    this->EnergyBulletDirectionData = NULL;
    this->GuardReactionData = NULL;
    this->DamageReactionData = NULL;
    this->BlastForteTypeData = NULL;
    this->LungeEndDamageData = NULL;
    this->BlastSkillTypeData = NULL;
    this->BlastReactionData = NULL;
    this->BlastActionData = NULL;
    this->BlastActionCategoryData = NULL;
    this->EffectMatParamNameData = NULL;
    this->HitBackMovementData = NULL;
    this->HitStopData = NULL;
    this->AttackHomingData = NULL;
    this->ArmorData = NULL;
    this->ArmorBreakLevelData = NULL;
    this->ArmorLevelData = NULL;
    this->CameraModeData = NULL;
    this->SearchData = NULL;
    this->SearchCompatibleData = NULL;
    this->AiData = NULL;
    this->BattlePracticeData = NULL;
    this->BattleSettleData = NULL;
    this->CharacterTypeData = NULL;
    this->DPData = NULL;
    this->TaketurnsData = NULL;
    this->CharacterItemData = NULL;
    this->ReplaceCorrectCharacterItem = NULL;
    this->StockItemData = NULL;
    this->CharacterAttributeTagData = NULL;
    this->CharacterFilterData = NULL;
    this->MenuData = NULL;
    this->SeriesTitleData = NULL;
    this->PatternVoiceData = NULL;
    this->PatternSubtitlesData = NULL;
    this->BGMData = NULL;
    this->SelectorLabelData = NULL;
    this->SurfaceTypeSettingData = NULL;
    this->HapticFeedbackSettingData = NULL;
    this->ChainPlaySoundData = NULL;
    this->GroupIdData = NULL;
    this->ReplaceTransitionActionData = NULL;
    this->ActionCameraDataDefault = NULL;
    this->LocomotionSectionData = NULL;
    this->ChangeCharacterActionData = NULL;
    this->InteractAtbEnumAssetData = NULL;
    this->InteractTriggerEnumAssetData = NULL;
    this->InteractAtbDataAssetData = NULL;
    this->SpaceAreaTypeAssetData = NULL;
    this->SpaceAreaSettingAssetData = NULL;
    this->FreeTimelineTypeDataAssetData = NULL;
    this->EffectFigureTranformTypeDataAssetData = NULL;
    this->WindMotorAssetData = NULL;
    this->BuffCategoryData = NULL;
    this->ShakeForceTypeAssetData = NULL;
    this->EffectLimitsData = NULL;
    this->ObjectLimitGroupIDEnum = NULL;
    this->ObjectLimitAssetData = NULL;
    this->FreeTimelineTypeSettingData = NULL;
    this->UIActionData = NULL;
    this->EffectColorSetDataTypeEnum = NULL;
    this->SelectEffectColorComponentBluePrintClass = NULL;
    this->EffectColorDataReplaceTypeEnum = NULL;
    this->EffectColorTypeReplaceData = NULL;
    this->EffectInteractNiagaraTypeEnum = NULL;
    this->EffectInteractNiagaraData = NULL;
    this->EffectInteractDecalTypeEnum = NULL;
    this->EffectInteractDecalData = NULL;
    this->EffectVelocityLineData = NULL;
    this->EffectVelocityLineTypeData = NULL;
    this->CustomEffectVelocityLineData = NULL;
    this->EventSceneData = NULL;
    this->EventSceneLocatorData = NULL;
    this->EventSceneSubtitleSystemData = NULL;
    this->KoratSystemData = NULL;
    this->BattleDirectingBuffData = NULL;
    this->BattleDirectingTaketurnWaitSecond = 0.02f;
    this->SoundPlayer = CreateDefaultSubobject<USSSoundManager>(TEXT("SoundManager"));
    this->EffectManager = CreateDefaultSubobject<USSEffectManager>(TEXT("EffetManager"));
    this->SaveDataManager = CreateDefaultSubobject<USSSaveDataManager>(TEXT("SaveDataManager"));
    this->PlayerFactoryProxy = CreateDefaultSubobject<UKoratFreeTimelinePlayerFactoryProxy>(TEXT("PlayerFactoryProxy"));
    this->AppNetworkWorker = CreateDefaultSubobject<USSAppNetworkWorker>(TEXT("AppNetworkWorker"));
    this->PlayerMatchNetworkManager = CreateDefaultSubobject<USSPlayerMatchNetworkManager>(TEXT("PlayerMatchNetworkManager"));
    this->ParticleParameterDataAsset = NULL;
    this->AttackCollisionPool = CreateDefaultSubobject<UKoratAttackCollisionPool>(TEXT("AttackCollisionPool"));
    this->OperationGuideDataAsset = NULL;
    this->RingMenuDataAsset = NULL;
    this->MenuMissionLevelDataAsset = NULL;
    this->MissionDataAsset = NULL;
    this->MissionTrophyDataAsset = NULL;
    this->RewardDataAsset = NULL;
    this->MythicalOrbDataAsset = NULL;
    this->MissionFilterDataAsset = NULL;
    this->MissionSortDataAsset = NULL;
    this->DownLoadContentsDataAsset = NULL;
    this->RewardLotteryList = NULL;
    this->RankMatchRankDataAsset = NULL;
    this->DestructionAttackParameterDataAsset = NULL;
    this->DestructionManagerClass = NULL;
    this->DestructionManager = NULL;
    this->DestructionFadeParameterName = TEXT("DestructionFade");
    this->PostProcessManagerChameleonAgentType = NULL;
    this->PostProcessManagerChameleonComponentType = NULL;
    this->PostProcessManagerBPChameleonType = NULL;
    this->ReplayDataUIManager = CreateDefaultSubobject<USSReplayDataUIManager>(TEXT("ReplayDataUIManager"));
    this->ReplayUIManager = CreateDefaultSubobject<USSReplayManager>(TEXT("ReplayUIManager"));
    this->ButtonGuideDataAsset = NULL;
    this->KoratOperationGuideTextDataAsset = NULL;
    this->DRMEditCommonData = NULL;
    this->DRMEditActionData = NULL;
    this->DRMEditBaseTextData = NULL;
    this->DRMEditBlankTextData = NULL;
    this->DRMEditCameraData = NULL;
    this->DRMEditCharacterData = NULL;
    this->DRMEditEffectData = NULL;
    this->DRMEditFacialData = NULL;
    this->DRMEditLayerData = NULL;
    this->DRMEditLocatorData = NULL;
    this->DRMEditPictureData = NULL;
    this->DRMEditSceneTransformData = NULL;
    this->DRMEditSentenceTextData = NULL;
    this->DRMEditSituationData = NULL;
    this->DRMEditSocketData = NULL;
    this->DRMEditWordTextData = NULL;
    this->DramaticBattleNewCutEditorData = NULL;
    this->DramaticBattleCutEditorData = NULL;
    this->DramaticBattleCutEditorUIWindowData = NULL;
    this->DramaticBattleCutEditorSceneViewData = NULL;
    this->DramaticBattleCutEditorTimeLineData = NULL;
    this->DramaticBattleCutEditorInitialSelectUIWindowData = NULL;
    this->DramaticBattleCutEditorInitialSelectUI2DWindowData = NULL;
    this->DramaticBattleCutEditorInitialSelectUI3DWindowData = NULL;
    this->ConversationData = NULL;
    this->OptionData = NULL;
    this->BattleResultData = NULL;
    this->DramaticBattleTipsData = NULL;
    this->PlatformImageData = NULL;
    this->SequenceBindingTagSetting = NULL;
    this->PowerImpactNGCharaDataAsset = NULL;
    this->CharacterRaderChartClass = NULL;
}



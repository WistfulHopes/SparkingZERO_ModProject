#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratActionDataList.h"
#include "KoratBuffFormTypeDataList.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratEffectColorReplaceTypeSetting.h"
#include "KoratGroupIdDataList.h"
#include "Templates/SubclassOf.h"
#include "KoratGameSingleton.generated.h"

class UKoratActionDataAsset;
class UKoratArmorBreakLevelDataAsset;
class UKoratArmorDataAsset;
class UKoratArmorLevelDataAsset;
class UKoratAttackCollisionPool;
class UKoratAttackHomingDataAsset;
class UKoratAuraAssignDataAsset;
class UKoratAuraLevelDataAsset;
class UKoratAuraPointLightDataAsset;
class UKoratAuraRimLightDataAsset;
class UKoratBGMDataAsset;
class UKoratBannerDataAsset;
class UKoratBattleAssetDataAsset;
class UKoratBattleDirectingBuffDataAsset;
class UKoratBattleEffectDataAsset;
class UKoratBattleResultDataAsset;
class UKoratBattleScenePhaseDataAsset;
class UKoratBattleSetupDataAsset;
class UKoratBattleTaketurnsDataAsset;
class UKoratBindingTagDataAsset;
class UKoratBlastActionCategoryDataAsset;
class UKoratBlastActionDataAsset;
class UKoratBlastForteTypeDataAsset;
class UKoratBlastGroupDataAsset;
class UKoratBlastReactionDataAsset;
class UKoratBlastSkillTypeDataAsset;
class UKoratBuffCategoryDataAsset;
class UKoratBuffFormTypeDataAsset;
class UKoratBulletEffectDataAsset;
class UKoratBulletKeyDataAsset;
class UKoratButtonGuideDataAsset;
class UKoratCameraModeDataAsset;
class UKoratChainPlaySoundDataAsset;
class UKoratCharacterAttributeTagDataAsset;
class UKoratCharacterBoneDataAsset;
class UKoratCharacterDataAsset;
class UKoratCharacterFigureDataAsset;
class UKoratCharacterFilterDataAsset;
class UKoratCharacterGroupDataAsset;
class UKoratCharacterItemDataAsset;
class UKoratCharacterLocomotionSectionDataAsset;
class UKoratCharacterTypeDataAsset;
class UKoratCombativesKeyDataAsset;
class UKoratConversationDataAsset;
class UKoratCustomVelocityLineEffectDataAsset;
class UKoratDPDataAsset;
class UKoratDRMEditActionDataAsset;
class UKoratDRMEditBaseTextDataAsset;
class UKoratDRMEditBlankTextDataAsset;
class UKoratDRMEditCameraDataAsset;
class UKoratDRMEditCharacterDataAsset;
class UKoratDRMEditCommonDataAsset;
class UKoratDRMEditEffectDataAsset;
class UKoratDRMEditFacialDataAsset;
class UKoratDRMEditLayerDataAsset;
class UKoratDRMEditLocatorDataAsset;
class UKoratDRMEditPictureDataAsset;
class UKoratDRMEditSceneTransformDataAsset;
class UKoratDRMEditSentenceTextDataAsset;
class UKoratDRMEditSituationDataAsset;
class UKoratDRMEditSocketDataAsset;
class UKoratDRMEditWordTextDataAsset;
class UKoratDamageReactionDataAsset;
class UKoratDebugDecalActorManagerDataAsset;
class UKoratDestructionAttackParameterDataAsset;
class UKoratDestructionManager;
class UKoratDramaticBattleDataAsset;
class UKoratDramaticBattleTipsDataAsset;
class UKoratEffectAtbBrkTypeDataAsset;
class UKoratEffectAtbTypeDataAsset;
class UKoratEffectBoneSocketDataAsset;
class UKoratEffectBulletDecalAndKnockDataAsset;
class UKoratEffectBulletRatDataAsset;
class UKoratEffectColorTypeReplaceDataAsset;
class UKoratEffectDrownOutDataAsset;
class UKoratEffectEnvDataAsset;
class UKoratEffectExpDataAsset;
class UKoratEffectFigTransTypeDataAsset;
class UKoratEffectHitAirWallDataAsset;
class UKoratEffectHitDataAsset;
class UKoratEffectLimitsDataAsset;
class UKoratEffectMatParamNameDataAsset;
class UKoratEffectRatDataAsset;
class UKoratEffectStaDataAsset;
class UKoratEffectToonPointLightGroupDataAsset;
class UKoratEnergyBulletDirectionDataAsset;
class UKoratEquipmentPointLightDataAsset;
class UKoratEquipmentRimLightDataAsset;
class UKoratEventSceneDataAsset;
class UKoratEventSceneLocatorDataAsset;
class UKoratEventSceneMenuDataAsset;
class UKoratEventSceneSubtitleSystemDataAsset;
class UKoratFreeTimelinePlayerFactoryProxy;
class UKoratFreeTimelineTypeDataAsset;
class UKoratFreeTimelineTypeSettingDataAsset;
class UKoratGroupIdDataAsset;
class UKoratGuardReactionDataAsset;
class UKoratHitBackMovementDataAsset;
class UKoratHitStopDataAsset;
class UKoratInteractAtbDataAsset;
class UKoratInteractAtbEnumDataAsset;
class UKoratInteractDecalDataAsset;
class UKoratInteractNiagaraDataAsset;
class UKoratInteractTriggerEnumDataAsset;
class UKoratLungeEndDamageDataAsset;
class UKoratMPCDataAsset;
class UKoratMapDataAsset;
class UKoratMenuCommonDataAsset;
class UKoratMenuDataAsset;
class UKoratMultiDeviceSettingDataAsset;
class UKoratObjectLimitDataAsset;
class UKoratOperationGuideDataAsset;
class UKoratOptionDataAsset;
class UKoratPatternSubtitlesDataAsset;
class UKoratPatternVoiceDataAsset;
class UKoratPlatformImageDataAsset;
class UKoratPlayerStartDataAsset;
class UKoratPointLightFrequencyDataAsset;
class UKoratReplaceAnimationDataAsset;
class UKoratReplaceCorrectCharacterItemDataAsset;
class UKoratReplaceTransitionActionDataAsset;
class UKoratRimLightFrequencyDataAsset;
class UKoratSearchCompatibleDataAsset;
class UKoratSearchDataAsset;
class UKoratSelectEffectColorComponent;
class UKoratSelectLabelSettingDataAsset;
class UKoratSeriesTitleDataAsset;
class UKoratShakeForceTypeDataAsset;
class UKoratShopBaseItemDataAsset;
class UKoratShopFloorDataAsset;
class UKoratShopMenuDataAsset;
class UKoratShopSalesItemDataAsset;
class UKoratSpaceAreaSettingDataAsset;
class UKoratSpaceAreaTypeDataAsset;
class UKoratSpeciesDataAsset;
class UKoratStockItemDataAsset;
class UKoratSubInstanceTagDataAsset;
class UKoratTeamTalkDataAsset;
class UKoratTitleCompanyLogoDataAsset;
class UKoratTitleDataAsset;
class UKoratTutorialDataAsset;
class UKoratUIActionDataAsset;
class UKoratUILevelDataAsset;
class UKoratVelocityLineEffectTypeDataAsset;
class UKoratVelocityLineEffectsDataAsset;
class UKoratWaterEffectDataAsset;
class UKoratWindMotorDataAsset;
class UKoratWorldPointLightDataAsset;
class USSActionCameraDataAsset;
class USSAiDataAsset;
class USSAppNetworkWorker;
class USSAuraAssignDataAsset;
class USSAuraDataAsset;
class USSBattleDebugWidget;
class USSBattleMode010ListDataAsset;
class USSBattlePracticeDataAsset;
class USSBattleSettleDataAsset;
class USSBattleTrainingBattleUiDataAsset;
class USSBattleTrainingCommandListDataAsset;
class USSBattleTrainingDataAsset;
class USSBattleTrainingItemListDataAsset;
class USSBattleTrainingLinesListDataAsset;
class USSBattleTrainingSettingListDataAsset;
class USSChangeCharacterActionDataAsset;
class USSCharacterDataAsset;
class USSCharacterRaderChart;
class USSDownLoadContentsDataAsset;
class USSDragonAdventureIFChartDataAsset;
class USSDragonAdventureIFCommonDataAsset;
class USSDragonAdventureIFDataAsset;
class USSDragonAdventureIFRouteClearInfoAsset;
class USSDramaticBattleCutEditorDataAsset;
class USSDramaticBattleCutEditorInitialSelectUIWindowDataAsset;
class USSDramaticBattleCutEditorSceneViewDataAsset;
class USSDramaticBattleCutEditorTimeLineDataAsset;
class USSDramaticBattleCutEditorUIWindowDataAsset;
class USSDramaticBattleDataAsset;
class USSDramaticBattleNewCutEditorDataAsset;
class USSDramaticExtraDataAsset;
class USSEditPartsImageListDataAsset;
class USSEditPartsTextListDataAsset;
class USSEffectManager;
class USSEndingDataAsset;
class USSExFacialExpressionDataAsset;
class USSFacialExpressionDataAsset;
class USSFreeTournamentResDataAsset;
class USSGalleryMyDataDataAsset;
class USSGalleryPictureBookDataAsset;
class USSGalleryTheaterDataAsset;
class USSHapticFeedbackSettingDataAsset;
class USSIconTitleListDataAsset;
class USSKoratSystemDataAsset;
class USSMainMenuDataAsset;
class USSMainMenuListMenuDataAsset;
class USSMainMenuSceneDataAsset;
class USSMainMenuSubLevelDataAsset;
class USSMatchingCondPropDataAsset;
class USSMenuMissionLevelDataAsset;
class USSMissionDataAsset;
class USSMissionFilterDataAsset;
class USSMissionSortDataAsset;
class USSMissionTrophyDataAsset;
class USSMovieListDataAsset;
class USSMythicalOrbDataAsset;
class USSNotificationDataAsset;
class USSOperationGuideDataAsset;
class USSPLMRoomResourceDataAsset;
class USSParticleParameterDataAsset;
class USSPlayerCardBGListDataAsset;
class USSPlayerCardDataAsset;
class USSPlayerMatchNetworkManager;
class USSPowerImpactNGCharaDataAsset;
class USSRankMatchRankDataAsset;
class USSRankingResourceDataAsset;
class USSReplayDataUIManager;
class USSReplayManager;
class USSRewardDataAsset;
class USSRewardLotteryListDataAsset;
class USSRingMenuDataAsset;
class USSSaveDataManager;
class USSSoundManager;
class USSStampListDataAsset;
class USSSubLevelLoadParamsDataAsset;
class USSSurfaceTypeSettingDataAsset;
class USSTermsListDataAsset;
class USSTextTitleListDataAsset;
class USSTournamentChartResDataAsset;
class USSTournamentListDataAsset;
class USSTournamentSelectResDataAsset;
class USSTrainingBattleUiDataAsset;
class USSTutorialBattleUiDataAsset;
class USSWishComeTrueCategoryDataAsset;
class USSWishComeTrueContentsDataAsset;
class USSWishComeTrueDataAsset;
class USSWishComeTrueResourceDataAsset;
class USoundAtomCueSheet;
class UUserDefinedEnum;

UCLASS(Blueprintable, MinimalAPI)
class UKoratGameSingleton : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> SoundUISECueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> SoundBattleSECueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> SoundBGMCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> SoundEventVoiceCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> SoundEventVoiceCueSheetUS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> SoundEventSECueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> SoundMovieCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> SoundMovieCueSheetUS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundSEFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundVoiceFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSFacialExpressionDataAsset* FacialExpressionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSExFacialExpressionDataAsset* ExFacialExpressionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBattleAssetDataAsset* BattleAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBattleScenePhaseDataAsset* BattleScenePhaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMenuCommonDataAsset* MenuCommonAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFDataAsset* DragonAdventureIFData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFChartDataAsset* DragonAdventureIFChartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCommonDataAsset* DragonAdventureIFCommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFRouteClearInfoAsset* DragonAdventureIFRouteClearInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSGalleryTheaterDataAsset* GalleryTheaterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSGalleryMyDataDataAsset* GalleryMyDataData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSGalleryPictureBookDataAsset* GalleryPictureBookData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSPlayerCardDataAsset* PlayerCardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEndingDataAsset* EndingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMovieListDataAsset* MovieListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleTrainingDataAsset* BattleTrainingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleTrainingLinesListDataAsset* BattleTrainingLinesListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleTrainingItemListDataAsset* BattleTrainingItemListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleTrainingSettingListDataAsset* BattleTrainingSettingListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleTrainingCommandListDataAsset* BattleTrainingCommandListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleTrainingBattleUiDataAsset* BattleTrainingBattleUiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTrainingBattleUiDataAsset* TrainingBattleUiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTutorialBattleUiDataAsset* TutorialBattleUiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDramaticBattleDataAsset* DramaticBattleAssetDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataAsset* DramaticBattleBattleDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticExtraDataAsset* DramaticExtraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBattleSetupDataAsset* BattleSetupAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratTeamTalkDataAsset* TeamTalkAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratShopMenuDataAsset* ShopMenuAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBannerDataAsset* BannerAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratShopFloorDataAsset* ShopFloorAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratShopSalesItemDataAsset* ShopSalesItemAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratShopBaseItemDataAsset* ShopBaseItemAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMainMenuDataAsset* MainMenuAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMainMenuSceneDataAsset* MainMenuSceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMainMenuListMenuDataAsset* MainMenuListMenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMainMenuSubLevelDataAsset* MainMenuSubLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMatchingCondPropDataAsset* MatchingCondPropData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSNotificationDataAsset* NotificationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSWishComeTrueDataAsset* WishCTData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSWishComeTrueResourceDataAsset* WishCTResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSWishComeTrueCategoryDataAsset* WishCTCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSWishComeTrueContentsDataAsset* WishCTContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSRankingResourceDataAsset* RankingResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSPLMRoomResourceDataAsset* PLMRoomResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTournamentSelectResDataAsset* TournamentSelectResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTournamentChartResDataAsset* TournamentChartResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTournamentListDataAsset* TournamentListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSFreeTournamentResDataAsset* FreeTournamentResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleMode010ListDataAsset* BattleMode010ListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEventSceneMenuDataAsset* EventSceneMenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratTitleDataAsset* TitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratTitleCompanyLogoDataAsset* TitleCompanyLogoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratTutorialDataAsset* TutorialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterDataAsset* CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterFigureDataAsset* CharacterFigureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratReplaceAnimationDataAsset* ReplaceAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSubInstanceTagDataAsset* SubInstanceTagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterBoneDataAsset* CharacterBoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSpeciesDataAsset* SpeciesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterGroupDataAsset* CharacterGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBlastGroupDataAsset* BlastGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBuffFormTypeDataAsset* BuffFormTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterDataAsset* DefaultCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratPlayerStartDataAsset* PlayerStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratUILevelDataAsset* UILevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMapDataAsset* MapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSSubLevelLoadParamsDataAsset* SubLevelLoadParamsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMultiDeviceSettingDataAsset* MultiDeviceSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectAtbTypeDataAsset* EffectAtbTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectAtbBrkTypeDataAsset* EffectAtbBrkTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTermsListDataAsset* TermsListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSIconTitleListDataAsset* IconTitleListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTextTitleListDataAsset* TextTitleListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEditPartsImageListDataAsset* EditPartsImageListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEditPartsTextListDataAsset* EditPartsTextListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSStampListDataAsset* StampListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSPlayerCardBGListDataAsset* PlayerCardBGListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList FormChangeEffectKeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> FormChangeReleaseActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList BlfEffectKeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList BlfEffectDefaultKeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAuraPointLightDataAsset* AuraPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAuraRimLightDataAsset* AuraRimLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAuraLevelDataAsset* AuraLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAuraAssignDataAsset* AuraAssignData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAuraAssignDataAsset* AuraCommonAssignData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAuraDataAsset* AuraCommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEquipmentPointLightDataAsset* EquipmentPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratWorldPointLightDataAsset* WorldPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEquipmentRimLightDataAsset* EquipmentRimLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratPointLightFrequencyDataAsset* PointLightFrequencyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratRimLightFrequencyDataAsset* RimLightFrequencyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectToonPointLightGroupDataAsset* EffectToonPointLightGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratGroupIdDataList, FKoratGroupIdDataList> ConbineGroupIDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectExpDataAsset* EffectExpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectDrownOutDataAsset* EffectDrownOutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectHitDataAsset* EffectHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectBulletRatDataAsset* EffectBulletRatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectBulletDecalAndKnockDataAsset* EffectBulletDecalAndKnockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectRatDataAsset* EffectRatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDebugDecalActorManagerDataAsset* DebugDecalActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectHitAirWallDataAsset* EffectHitAirWallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectStaDataAsset* EffectStaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectEnvDataAsset* EffectEnvData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratWaterEffectDataAsset* WaterEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBattleEffectDataAsset* BattleEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UKoratMPCDataAsset> MPCData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratActionDataAsset* ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCombativesKeyDataAsset* CombativesKeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBulletKeyDataAsset* BulletKeyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectBoneSocketDataAsset* EffectBoneSocketData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBulletEffectDataAsset* BulletEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEnergyBulletDirectionDataAsset* EnergyBulletDirectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratGuardReactionDataAsset* GuardReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDamageReactionDataAsset* DamageReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBlastForteTypeDataAsset* BlastForteTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratLungeEndDamageDataAsset* LungeEndDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBlastSkillTypeDataAsset* BlastSkillTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBlastReactionDataAsset* BlastReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBlastActionDataAsset* BlastActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBlastActionCategoryDataAsset* BlastActionCategoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectMatParamNameDataAsset* EffectMatParamNameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratHitBackMovementDataAsset* HitBackMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratHitStopDataAsset* HitStopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratAttackHomingDataAsset* AttackHomingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratArmorDataAsset* ArmorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratArmorBreakLevelDataAsset* ArmorBreakLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratArmorLevelDataAsset* ArmorLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCameraModeDataAsset* CameraModeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSearchDataAsset* SearchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSearchCompatibleDataAsset* SearchCompatibleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAiDataAsset* AiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattlePracticeDataAsset* BattlePracticeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBattleSettleDataAsset* BattleSettleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterTypeDataAsset* CharacterTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDPDataAsset* DPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBattleTaketurnsDataAsset* TaketurnsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterItemDataAsset* CharacterItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratReplaceCorrectCharacterItemDataAsset* ReplaceCorrectCharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratStockItemDataAsset* StockItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterAttributeTagDataAsset* CharacterAttributeTagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterFilterDataAsset* CharacterFilterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMenuDataAsset* MenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSeriesTitleDataAsset* SeriesTitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratPatternVoiceDataAsset* PatternVoiceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratPatternSubtitlesDataAsset* PatternSubtitlesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBGMDataAsset* BGMData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSelectLabelSettingDataAsset* SelectorLabelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSSurfaceTypeSettingDataAsset* SurfaceTypeSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSHapticFeedbackSettingDataAsset* HapticFeedbackSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratChainPlaySoundDataAsset* ChainPlaySoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratGroupIdDataAsset* GroupIdData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratReplaceTransitionActionDataAsset* ReplaceTransitionActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSActionCameraDataAsset* ActionCameraDataDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterLocomotionSectionDataAsset* LocomotionSectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSChangeCharacterActionDataAsset* ChangeCharacterActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbEnumDataAsset* InteractAtbEnumAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratInteractTriggerEnumDataAsset* InteractTriggerEnumAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbDataAsset* InteractAtbDataAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSpaceAreaTypeDataAsset* SpaceAreaTypeAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSpaceAreaSettingDataAsset* SpaceAreaSettingAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineTypeDataAsset* FreeTimelineTypeDataAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectFigTransTypeDataAsset* EffectFigureTranformTypeDataAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratWindMotorDataAsset* WindMotorAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBuffCategoryDataAsset* BuffCategoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratShakeForceTypeDataAsset* ShakeForceTypeAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectLimitsDataAsset* EffectLimitsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* ObjectLimitGroupIDEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratObjectLimitDataAsset* ObjectLimitAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineTypeSettingDataAsset* FreeTimelineTypeSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratUIActionDataAsset* UIActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* EffectColorSetDataTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetDataTypeDataList DefaultEffectColorDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKoratSelectEffectColorComponent> SelectEffectColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* SelectEffectColorComponentBluePrintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBuffFormTypeDataList, FKoratEffectColorReplaceTypeSetting> OverrideReplaceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* EffectColorDataReplaceTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectColorTypeReplaceDataAsset* EffectColorTypeReplaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* EffectInteractNiagaraTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratInteractNiagaraDataAsset* EffectInteractNiagaraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserDefinedEnum* EffectInteractDecalTypeEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratInteractDecalDataAsset* EffectInteractDecalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratVelocityLineEffectsDataAsset* EffectVelocityLineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratVelocityLineEffectTypeDataAsset* EffectVelocityLineTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCustomVelocityLineEffectDataAsset* CustomEffectVelocityLineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEventSceneDataAsset* EventSceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEventSceneLocatorDataAsset* EventSceneLocatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEventSceneSubtitleSystemDataAsset* EventSceneSubtitleSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSKoratSystemDataAsset* KoratSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBattleDirectingBuffDataAsset* BattleDirectingBuffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleDirectingTaketurnWaitSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSSoundManager* SoundPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSEffectManager* EffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSSaveDataManager* SaveDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelinePlayerFactoryProxy* PlayerFactoryProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSAppNetworkWorker* AppNetworkWorker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSPlayerMatchNetworkManager* PlayerMatchNetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSParticleParameterDataAsset* ParticleParameterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratAttackCollisionPool* AttackCollisionPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSOperationGuideDataAsset* OperationGuideDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSRingMenuDataAsset* RingMenuDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMenuMissionLevelDataAsset* MenuMissionLevelDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMissionDataAsset* MissionDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMissionTrophyDataAsset* MissionTrophyDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSRewardDataAsset* RewardDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMythicalOrbDataAsset* MythicalOrbDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMissionFilterDataAsset* MissionFilterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMissionSortDataAsset* MissionSortDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDownLoadContentsDataAsset* DownLoadContentsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSRewardLotteryListDataAsset* RewardLotteryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSRankMatchRankDataAsset* RankMatchRankDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDestructionAttackParameterDataAsset* DestructionAttackParameterDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DestructionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratDestructionManager* DestructionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestructionFadeParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PostProcessManagerChameleonAgentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PostProcessManagerChameleonComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PostProcessManagerBPChameleonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSReplayDataUIManager* ReplayDataUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSReplayManager* ReplayUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratButtonGuideDataAsset* ButtonGuideDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratOperationGuideDataAsset* KoratOperationGuideTextDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditCommonDataAsset* DRMEditCommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditActionDataAsset* DRMEditActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditBaseTextDataAsset* DRMEditBaseTextData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditBlankTextDataAsset* DRMEditBlankTextData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditCameraDataAsset* DRMEditCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditCharacterDataAsset* DRMEditCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditEffectDataAsset* DRMEditEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditFacialDataAsset* DRMEditFacialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditLayerDataAsset* DRMEditLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditLocatorDataAsset* DRMEditLocatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditPictureDataAsset* DRMEditPictureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditSceneTransformDataAsset* DRMEditSceneTransformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditSentenceTextDataAsset* DRMEditSentenceTextData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditSituationDataAsset* DRMEditSituationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditSocketDataAsset* DRMEditSocketData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDRMEditWordTextDataAsset* DRMEditWordTextData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleNewCutEditorDataAsset* DramaticBattleNewCutEditorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorDataAsset* DramaticBattleCutEditorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorUIWindowDataAsset* DramaticBattleCutEditorUIWindowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorSceneViewDataAsset* DramaticBattleCutEditorSceneViewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorTimeLineDataAsset* DramaticBattleCutEditorTimeLineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectUIWindowDataAsset* DramaticBattleCutEditorInitialSelectUIWindowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectUIWindowDataAsset* DramaticBattleCutEditorInitialSelectUI2DWindowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorInitialSelectUIWindowDataAsset* DramaticBattleCutEditorInitialSelectUI3DWindowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratConversationDataAsset* ConversationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratOptionDataAsset* OptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBattleResultDataAsset* BattleResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratDramaticBattleTipsDataAsset* DramaticBattleTipsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratPlatformImageDataAsset* PlatformImageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBindingTagDataAsset* SequenceBindingTagSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSPowerImpactNGCharaDataAsset* PowerImpactNGCharaDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USSCharacterRaderChart> CharacterRaderChartClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSBattleDebugWidget> BattleDebugWidget;
    
    UKoratGameSingleton();

};


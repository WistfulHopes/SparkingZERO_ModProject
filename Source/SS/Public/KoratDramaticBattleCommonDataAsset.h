#pragma once
#include "CoreMinimal.h"
#include "ESSKeyInputType.h"
#include "EKoratCharacterEquipSettingSaveTarget.h"
#include "EKoratDramaticEditTextBalnkFilterCategory.h"
#include "ESSDramaticBattleSearchConditionDifficulty.h"
#include "ESSDramaticBattleSearchConditionExist.h"
#include "ESSDramaticBattleSearchConditionPlayCount.h"
#include "ESSWLibBattleDetailSearchMenuButtonType.h"
#include "ESSWLibBattleDetailSearchMenuPageType.h"
#include "ESSWLibBattleSortType.h"
#include "ESSWLibDetailSearchCharacterMenuButtonType.h"
#include "ESSWLibHomeCategoryButtonType.h"
#include "ESSWLibHomePeriodCategoryButtonType.h"
#include "ESSWLibReplayFilterType.h"
#include "ESSWLibReplaySortType.h"
#include "ESSWLibSearchMenuButtonType.h"
#include "ESSWLibSideButtonType.h"
#include "KoratDramaticBitFlags.h"
#include "KoratDramaticCommonTextures.h"
#include "MutualDataAsset.h"
#include "SSDialogTextData.h"
#include "SSWLibSideButtonTopElement.h"
#include "KoratDramaticBattleCommonDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratDramaticBattleCommonDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibSideButtonType, FText> WLibSideButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibHomeCategoryButtonType, FText> WLibHomeCategoryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibHomePeriodCategoryButtonType, FText> WLibHomePeriodCategoryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibSearchMenuButtonType, FText> WLibSearchMenuButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WLibWaitDialogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WLibSearchMenuTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WLibTagSearchMenuTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FText> WLibSearchButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSKeyInputType, FText> WLibSearchCharaSelectButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibBattleDetailSearchMenuButtonType, FText> WLibDetailSearchMenuLabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibBattleDetailSearchMenuPageType, FText> WLibDetailSearchMenuPageTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionPlayCount, FText> WLibDetailSearchConditionPlayCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionPlayCount, FText> WLibDetailSearchConditionPlayCountGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionDifficulty, FText> WLibDetailSearchConditionDifficultyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionDifficulty, FText> WLibDetailSearchConditionDifficultyGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionExist, FText> WLibDetailSearchConditionExistText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionExist, FText> WLibDetailSearchConditionExistTimeLimitGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionExist, FText> WLibDetailSearchConditionExistOutFieldGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionExist, FText> WLibDetailSearchConditionExistFormChangeAndCombineGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionExist, FText> WLibDetailSearchConditionExistSwitchGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleSearchConditionExist, FText> WLibDetailSearchConditionExistFlyGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WLibDetailSearchConditionNonSelectStageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WLibDetailSearchConditionNonSelectStageGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WLibDetailSearchConditionSelectStageGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WLibDetailSearchConditionNonSelectCharacterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibDetailSearchCharacterMenuButtonType, FText> WLibDetailSearchCharacterButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibDetailSearchCharacterMenuButtonType, FText> WLibDetailSearchCharacterButtonGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratCharacterEquipSettingSaveTarget, FText> WLibDetailSearchTeamPlayerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibBattleSortType, FText> WLibBattleSortButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibReplaySortType, FText> WLibReplaySortButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibReplayFilterType, FText> WLibReplayFilterButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWLibSideButtonTopElement> WLibSideButtonElementHomeMypage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWLibSideButtonTopElement> WLibSideButtonElementUserPosted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWLibSideButtonTopElement> WLibSideButtonElementSearchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibHomeCategoryButtonType> WLibHomeTopCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibHomePeriodCategoryButtonType> WLibHomePeriodCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibSearchMenuButtonType> WLibSearchMenuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibBattleDetailSearchMenuPageType> WLibDetailSearchPageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibBattleDetailSearchMenuButtonType> WLibDetailSearchButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibBattleDetailSearchMenuButtonType> WLibDetailSearchStatusList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSDramaticBattleSearchConditionDifficulty> WLibDetailSearchConditionDifficultyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleSearchConditionDifficulty WLibDetailSearchConditionDifficultyDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSDramaticBattleSearchConditionPlayCount> WLibDetailSearchConditionPlayCountList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSDramaticBattleSearchConditionExist> WLibDetailSearchConditionTimeLimitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSDramaticBattleSearchConditionExist> WLibDetailSearchConditionOutFieldList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSDramaticBattleSearchConditionExist> WLibDetailSearchConditionFormChangeAndCombineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSDramaticBattleSearchConditionExist> WLibDetailSearchConditionSwitchList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSDramaticBattleSearchConditionExist> WLibDetailSearchConditionFlyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibDetailSearchCharacterMenuButtonType> WLibDetailSearchCharacterButtonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibBattleSortType> WLibBattleSortList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibReplaySortType> WLibReplaySortList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibReplaySortType> WLibMyReplaySortList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibReplayFilterType> WLibReplayFilterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibNotExistFollowDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibNetworkErrorBackMainMenuDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibArrangeOriginOpenDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibReplayPostConfirmDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibReplayPostedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibReplayPostImpossibleDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibReplayDeleteConfirmDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibReplayDeletedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleDeleteConfirmDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleSearchNotExistConfirmDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleCopyCompleteDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleCreateNumLimitDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleReportCountShortageDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibTodayReportedBattleDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleReportPenaltyReportedRestrictedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleReportPenaltyWarningDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleReportPenaltyPeriodDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleReportPenaltyUnlimitedDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleReportDeceitPenaltyWarningDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData WLibBattleReportDeceitPenaltyDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData BlockedUserContentsNotifyDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData EditBattleSaveNumOverDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData NotFinishTutorialDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsedDebugWLibTestFollowUserNameAndIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DebugWLibTestFollowUserNameAndIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticCommonTextures DramaticCommonImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBitFlags DramaticFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultWordStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattletitleDefaultWordStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EditTitleDefaultWordStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EditTemplateCommonMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData CutEditorCannotExchangeCharacterDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData CutEditorCannotRestoreUnused2DCutChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData BattleSetupCannotRestoreUnusedContentsChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData BattleSetupCannotRestoreUnusedCharacterChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDialogTextData BattleSetupCannotRestorePurgeSlotOutItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratDramaticEditTextBalnkFilterCategory, FText> BaseTextBlankFilterCategoryTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratDramaticEditTextBalnkFilterCategory> BaseTextBlankCategoryList;
    
    UKoratDramaticBattleCommonDataAsset();

};


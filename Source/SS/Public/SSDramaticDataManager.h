#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EKoratActionAttackType.h"
#include "EKoratBattleDirectingAction.h"
#include "EKoratBattleDirectingCharacterStateType.h"
#include "EKoratDramaticDirectingTriggerListItem.h"
#include "EKoratDramaticDirectionrListItem.h"
#include "EKoratDramaticEditBeforTransition.h"
#include "EKoratDramaticEditCutUpdateState.h"
#include "EKoratDramaticEditState.h"
#include "EKoratMenuDramaticMode.h"
#include "EKortaDramticBattleCategory.h"
#include "KoratAiTypeDataList.h"
#include "KoratBattleDirectingBuffDataList.h"
#include "KoratCharacterItemDataList.h"
#include "KoratDramaticBattleCommonListData.h"
#include "KoratDramaticBattleExtraDataList.h"
#include "KoratDramaticBattleSaveDataRecord.h"
#include "KoratDramaticBattleTipsDataList.h"
#include "KoratDramaticCutDataRecord.h"
#include "KoratDramaticCutIDsData.h"
#include "KoratDramaticEditSaveDataRecord.h"
#include "KoratDramaticExtraSaveDataRecord.h"
#include "KoratDramaticGuestCharacterStruct.h"
#include "KoratDramaticReplayCommonListData.h"
#include "KoratDramaticTipsSaveDataRecord.h"
#include "KoratDramaticWLibStatus.h"
#include "KoratEditCharaDataStruct.h"
#include "KoratMapDataList.h"
#include "SSDramaticDataManager.generated.h"

class USSBattleReplaySaveGame;
class USSDramaticBattleDataRecordAsset;
class USSDramaticEditImageSaveData;
class USSEventSceneDEDataAsset;
class UTexture2D;
class UTexture2DDynamic;

UCLASS(Blueprintable)
class USSDramaticDataManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticEditSaveDataRecord> DramaticEditDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> DramaticEditImagesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDramaticBattleExtraDataList, FKoratDramaticExtraSaveDataRecord> DramaticExtraDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataRecordAsset* DramaticNowEditData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleExtraDataList NowPlayingExtraBattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratMenuDramaticMode NowMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEventSceneDEDataAsset* BattleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NowEditSceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NowEditCutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NowEditSceneCutIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticCutDataRecord NowEditCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowEditBattleIdNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticCutIDsData> ScenesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticCutDataRecord> CutScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticEditBeforTransition BeforTransitionEditStep;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, FString> DramaticWLibThumbnail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint64> DramaticWLibCurrentRequestThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleCommonListData> DramaticWLibDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCommonListData TempDramaticWLibData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticReplayCommonListData> DramaticWLibReplayDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticReplayCommonListData TempDramaticWLibReplayData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint64> DramaticWLibBattleIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> DramaticWLibReplayIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DramaticWLibFollowUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DramaticWLibFollowUserId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint64> MarkingBattleIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneDEDataAsset* TempEventSceneDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TempEventSceneDataSceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScenePreviewEditSceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticGuestCharacterStruct EditGuestCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticWLibStatus WLibStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDramaticEditImageSaveData*> CutThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticEditState NowEditState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratDramaticDirectionrListItem, FText> DirectingItemNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratDramaticDirectingTriggerListItem, FText> TriggerItemNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratActionAttackType, FText> AtackTypeItemNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleDirectingCharacterStateType, FText> CharacterStateItemNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBattleDirectingBuffDataList, FText> CharacterBuffItemNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratAiTypeDataList, FText> CharacterAiItemNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterItemDataList, FText> CharacterZItemItemNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleDirectingAction, FText> ActiveActionItemNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKortaDramticBattleCategory ListCategoryBeforeBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNowEditBattleTestPlayCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleSaveDataRecord PreEditData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleSaveDataRecord StartingEditData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowCheckCutThumbnailIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NowLoadingCutIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDramaticEditImageSaveData*> CheckThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowEditSceneCutNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> CutDefaultThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticCutIDsData> CutPreviewTestScenesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowEditGuestCharaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDramaticBattleTipsDataList, FKoratDramaticTipsSaveDataRecord> DramaticTipsDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NowEditBattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEditCharaDataStruct BeforeEditCharas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList BeforeEditMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataRecordAsset* defaultBattleDataRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticCutIDsData BeforeEditSceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture2DDynamic*> CachedCutThumbnailTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticEditCutUpdateState CutUpdateState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChangeCutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DeleteCutThumbnailSlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowUpdateEditBattleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCopyWlibBattle;
    
public:
    USSDramaticDataManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleReplaySaveGame* GetNowPlayingDramaticReplayData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSDramaticBattleDataRecordAsset* GetNowPlayingDramaticBattleData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetDramaticBattleTitleImagePtr(USSDramaticBattleDataRecordAsset* InBattleData) const;
    
};


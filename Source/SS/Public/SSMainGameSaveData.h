#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "KoratBGMDataList.h"
#include "KoratBattleCharacterRecord.h"
#include "KoratBattleMapRecord.h"
#include "KoratBattlePlayerRecord.h"
#include "KoratBattleTrainingItemDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "KoratDRMEditBaseTextDataList.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratDRMEditWordTextDataList.h"
#include "KoratDownLoadContentsDataList.h"
#include "KoratDramaticBattleExtraDataList.h"
#include "KoratDramaticBattleTipsDataList.h"
#include "KoratDramaticEditSaveDataRecord.h"
#include "KoratDramaticEditWholeSaveData.h"
#include "KoratDramaticExtraSaveDataRecord.h"
#include "KoratDramaticTipsSaveDataRecord.h"
#include "KoratDramaticWLibSaveData.h"
#include "KoratEditPartsImageDataList.h"
#include "KoratEditPartsTextDataList.h"
#include "KoratIconTitleDataList.h"
#include "KoratMapDataList.h"
#include "KoratMovieItemDataList.h"
#include "KoratPlayerCardBGDataList.h"
#include "KoratShopSalesItemDataList.h"
#include "KoratStockItemDataList.h"
#include "KoratTextTitleDataList.h"
#include "SSBGMSaveData.h"
#include "SSBattleBGMSaveData.h"
#include "SSBattleDirectionUserDataSaveData.h"
#include "SSBattleSettingUserDataSaveData.h"
#include "SSBattleSetupUserDataSaveData.h"
#include "SSBattleTrainingData.h"
#include "SSCharacterItemSaveData.h"
#include "SSCharacterSaveData.h"
#include "SSDownLoadContentsSaveData.h"
#include "SSDragonAdventureIFSaveData.h"
#include "SSEditPartsImageSaveData.h"
#include "SSEditPartsTextSaveData.h"
#include "SSGallerySaveData.h"
#include "SSIconTitleSaveData.h"
#include "SSMapSaveData.h"
#include "SSMissionModeUserDataListSaveData.h"
#include "SSMovieSaveData.h"
#include "SSMythicalOrbSaveData.h"
#include "SSNetworkData.h"
#include "SSNotificationSaveData.h"
#include "SSPlayerCardBGSaveData.h"
#include "SSPlayerStatusData.h"
#include "SSPointBoostData.h"
#include "SSShopItemSaveData.h"
#include "SSStockItemSaveData.h"
#include "SSTermsData.h"
#include "SSTextTitleSaveData.h"
#include "SSTournamentData.h"
#include "SSTutorialData.h"
#include "SSMainGameSaveData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class SS_API USSMainGameSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerStatusData PlayerStatusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayerRecord PlayerRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FKoratBattleCharacterRecord> CharacterRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapDataList, FKoratBattleMapRecord> MapRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPointBoostData PointBoostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSCharacterSaveData> CharacterDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapDataList, FSSMapSaveData> MapDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBGMDataList, FSSBattleBGMSaveData> BattleBGMDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBGMDataList, FSSBGMSaveData> BGMDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterItemDataList, FSSCharacterItemSaveData> CharacterItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratStockItemDataList, FSSStockItemSaveData> StockItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratShopSalesItemDataList, FSSShopItemSaveData> ShopItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMovieItemDataList, FSSMovieSaveData> MovieItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratTextTitleDataList, FSSTextTitleSaveData> TextTitleItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratIconTitleDataList, FSSIconTitleSaveData> IconTitleItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratEditPartsImageDataList, FSSEditPartsImageSaveData> EditPartsImageDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratEditPartsTextDataList, FSSEditPartsTextSaveData> EditPartsTextDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditPictureDataList, FSSEditPartsImageSaveData> DRMEditPictureDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditBaseTextDataList, FSSEditPartsTextSaveData> DRMEditBaseTextDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDRMEditWordTextDataList, FSSEditPartsTextSaveData> DRMEditWordTextDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratPlayerCardBGDataList, FSSPlayerCardBGSaveData> PlayerCardBGItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDownLoadContentsDataList, FSSDownLoadContentsSaveData> DownLoadContentsDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSettingUserDataSaveData BattleSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleDirectionUserDataSaveData BattleDirectionUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleSetupUserDataSaveData BattleSetupUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDragonAdventureIFSaveData AdventureIFData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticEditWholeSaveData DramaticEditWholeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticEditSaveDataRecord> DramaticEditDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> DramaticEditImagesSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDramaticBattleExtraDataList, FKoratDramaticExtraSaveDataRecord> DramaticExtraDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticWLibSaveData DramaticWLibData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratDramaticBattleTipsDataList, FKoratDramaticTipsSaveDataRecord> DramaticTipsDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMissionModeUserDataListSaveData MissionUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSGallerySaveData GalleryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTermsData TermsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTutorialData TutorialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMythicalOrbSaveData MythicalOrbData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBattleTrainingItemDataList, FSSBattleTrainingData> BattleTrainingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTournamentData TournamentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTournamentData TournamentOnileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSNotificationSaveData NotificationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSNetworkData NetworkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CheckFrameSamples;
    
    USSMainGameSaveData();

    UFUNCTION(BlueprintCallable)
    void InitTutorialMode();
    
};


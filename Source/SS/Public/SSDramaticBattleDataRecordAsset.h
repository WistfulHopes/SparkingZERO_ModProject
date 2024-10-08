#pragma once
#include "CoreMinimal.h"
#include "EKortaDramticBattleCategory.h"
#include "KoratBattleDirectingData.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "KoratDramaticAdventureIFOption.h"
#include "KoratDramaticBattleCharacter.h"
#include "KoratDramaticBattleTitle.h"
#include "KoratDramaticExtraOption.h"
#include "KoratDramaticGuestCharacterStruct.h"
#include "KoratDramaticThumbnail.h"
#include "KoratDramaticTimeSlices.h"
#include "KoratMapDataList.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleDataRecordAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USSDramaticBattleDataRecordAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticTimeSlices TimeSlices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleTitle BattleTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticThumbnail DramaticBattleThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKortaDramticBattleCategory BattleCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleCharacter> AlliesTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> BannedEquipItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleCharacter> EnemyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> GuestCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticGuestCharacterStruct> GuestCharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMapDataList> DramamaticMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleDirectingData BattleDirecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticExtraOption ExtraOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticAdventureIFOption AdventureIFOption;
    
    USSDramaticBattleDataRecordAsset();

    UFUNCTION(BlueprintCallable)
    void DisplayBattleDirectingInOutputlog();
    
};


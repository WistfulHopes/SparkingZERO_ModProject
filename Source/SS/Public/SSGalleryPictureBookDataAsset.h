#pragma once
#include "CoreMinimal.h"
#include "BattleSetupPlayerStarts.h"
#include "ESSGalleryPictureBookUIType.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "SSGalleryPictureBookGatheringCharaInfo.h"
#include "SSGalleryPictureBookDataAsset.generated.h"

class USSGalleryPictureBookGatheringDataAsset;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class USSGalleryPictureBookDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSSGalleryPictureBookGatheringCharaInfo> GatheringCharaArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, USSGalleryPictureBookGatheringDataAsset*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSGalleryPictureBookGatheringDataAsset*> OpeningDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> GatheringCueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> GatheringCueSheetUS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleSetupPlayerStarts CharacterStartPlaceP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleSetupPlayerStarts CharacterStartPlaceP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSGalleryPictureBookUIType, TSoftClassPtr<UObject>> UIAssetMap;
    
public:
    USSGalleryPictureBookDataAsset();

    UFUNCTION(BlueprintCallable)
    void MigrateData();
    
    UFUNCTION(BlueprintCallable)
    void AddGatheringData();
    
};


#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureIFChartDirectingSequencerType.h"
#include "ESSDragonAdventureIFChartIconType.h"
#include "KoratBGMDataList.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "Templates/SubclassOf.h"
#include "SSDragonAdventureIFChartDataAsset.generated.h"

class ASSDragonAdventureIFChartSelecterByPad;
class ASSDragonAdventureIFEventIconInfoActor;
class ULevelSequence;
class USSDragonAdventureIFChartCharaDataAsset;
class UTexture2D;
class UWorld;

UCLASS(Blueprintable)
class USSDragonAdventureIFChartDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> SubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, USSDragonAdventureIFChartCharaDataAsset*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASSDragonAdventureIFChartSelecterByPad> SelecterByPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDragonAdventureIFChartDirectingSequencerType, TSoftObjectPtr<ULevelSequence>> DirectingSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> CameraSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSDragonAdventureIFChartIconType, TSoftClassPtr<ASSDragonAdventureIFEventIconInfoActor>> IconActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGMDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> EditPartsItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> UIAssetArray;
    
    USSDragonAdventureIFChartDataAsset();

    UFUNCTION(BlueprintCallable)
    void MigrateData();
    
};


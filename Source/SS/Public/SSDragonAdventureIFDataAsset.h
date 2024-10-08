#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataList.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFDataAsset.generated.h"

class ULevelSequence;
class USSDragonAdventureIFCharacterDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class USSDragonAdventureIFDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, USSDragonAdventureIFCharacterDataAsset*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultOpenCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> CameraSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGMDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTimeFromEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> UIAssetArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> DbgOverWriteCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DbgIsOverWriteCharacter;
    
    USSDragonAdventureIFDataAsset();

    UFUNCTION(BlueprintCallable)
    void SetManaSource();
    
    UFUNCTION(BlueprintCallable)
    void MigrateData();
    
};


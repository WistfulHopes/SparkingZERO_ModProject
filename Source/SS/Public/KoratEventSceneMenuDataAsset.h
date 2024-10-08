#pragma once
#include "CoreMinimal.h"
#include "KoratEventSceneMenuSequenceDataRecord.h"
#include "KoratPlayerStartDataList.h"
#include "MutualDataAsset.h"
#include "KoratEventSceneMenuDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratEventSceneMenuDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerStartDataList> CharacterSpawnLocators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEventSceneMenuSequenceDataRecord SequenceDataTest00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEventSceneMenuSequenceDataRecord SequenceDataTest01;
    
public:
    UKoratEventSceneMenuDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterFigureDataList.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditCharacterDataAsset.generated.h"

class USSDRMEditCharacterDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditCharacterDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterFigureDataList DefaultFigure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterFigureDataList, USSDRMEditCharacterDataAsset*> PtrRecordsByDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditCharacterDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditCharacterDataAsset();

};


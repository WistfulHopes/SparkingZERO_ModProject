#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "KoratCharacterMLSDataAsset.generated.h"

class UKoratMLSDataAsset;

UCLASS(Blueprintable)
class UKoratCharacterMLSDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, UKoratMLSDataAsset*> PtrRecordsByDataList;
    
    UKoratCharacterMLSDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void ExportAnimationToCSV();
    
    UFUNCTION(BlueprintCallable)
    void AutoGenerateDataAsset();
    
    UFUNCTION(BlueprintCallable)
    void AutoAddElement();
    
};


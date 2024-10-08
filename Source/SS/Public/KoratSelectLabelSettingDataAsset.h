#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratSelectLabelSettingDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratSelectLabelSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratSelectLabelSettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratInteractAtbTypeDataList, FKoratSelectLabelSettingDataAssetRecord> RecordsByDataList;
    
public:
    UKoratSelectLabelSettingDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};


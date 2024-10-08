#pragma once
#include "CoreMinimal.h"
#include "KoratSpaceAreaSettingDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratSpaceAreaSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratSpaceAreaSettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratSpaceAreaSettingDataAssetRecord> Records;
    
public:
    UKoratSpaceAreaSettingDataAsset();

};


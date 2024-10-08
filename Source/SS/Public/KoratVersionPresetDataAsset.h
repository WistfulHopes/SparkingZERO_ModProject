#pragma once
#include "CoreMinimal.h"
#include "EVersionPresetID.h"
#include "KoratVersionPresetRecord.h"
#include "MutualDataAsset.h"
#include "KoratVersionPresetDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratVersionPresetDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVersionPresetID, FKoratVersionPresetRecord> Records;
    
public:
    UKoratVersionPresetDataAsset();

};


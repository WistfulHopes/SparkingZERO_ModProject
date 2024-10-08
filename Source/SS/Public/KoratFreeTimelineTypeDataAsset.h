#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineTypeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratFreeTimelineTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratFreeTimelineTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratFreeTimelineTypeDataAssetRecord> Records;
    
public:
    UKoratFreeTimelineTypeDataAsset();

};


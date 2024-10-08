#pragma once
#include "CoreMinimal.h"
#include "KoratMenuDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratMenuDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratMenuDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratMenuDataAssetRecord> Records;
    
public:
    UKoratMenuDataAsset();

};


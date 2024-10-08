#pragma once
#include "CoreMinimal.h"
#include "KoratUIActionDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratUIActionDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratUIActionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratUIActionDataAssetRecord> Records;
    
public:
    UKoratUIActionDataAsset();

};


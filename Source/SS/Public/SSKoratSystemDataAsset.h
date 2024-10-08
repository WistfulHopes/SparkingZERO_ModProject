#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSKoratSystemDataAssetRecord.h"
#include "SSKoratSystemDataAsset.generated.h"

UCLASS(Blueprintable)
class USSKoratSystemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSKoratSystemDataAssetRecord> Records;
    
public:
    USSKoratSystemDataAsset();

};


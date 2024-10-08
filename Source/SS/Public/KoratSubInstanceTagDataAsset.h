#pragma once
#include "CoreMinimal.h"
#include "KoratSubInstanceTagDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratSubInstanceTagDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratSubInstanceTagDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratSubInstanceTagDataAssetRecord> Records;
    
public:
    UKoratSubInstanceTagDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "KoratGroupIdDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratGroupIdDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratGroupIdDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratGroupIdDataAssetRecord> Records;
    
public:
    UKoratGroupIdDataAsset();

};


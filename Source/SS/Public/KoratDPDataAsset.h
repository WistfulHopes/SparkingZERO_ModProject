#pragma once
#include "CoreMinimal.h"
#include "KoratDPDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratDPDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratDPDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratDPDataAssetRecord> Records;
    
public:
    UKoratDPDataAsset();

};


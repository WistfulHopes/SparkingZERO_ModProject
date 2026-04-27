#pragma once
#include "CoreMinimal.h"
#include "KoratDPDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratDPDataAsset.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UKoratDPDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratDPDataAssetRecord> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageCurve;
    
public:
    UKoratDPDataAsset();

};


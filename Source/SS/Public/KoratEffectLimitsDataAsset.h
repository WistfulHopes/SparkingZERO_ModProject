#pragma once
#include "CoreMinimal.h"
#include "KoratEffectLimitsDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectLimitsDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectLimitsDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectLimitsDataAssetRecord> Records;
    
public:
    UKoratEffectLimitsDataAsset();

};


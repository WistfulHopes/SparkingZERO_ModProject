#pragma once
#include "CoreMinimal.h"
#include "KoratEffectEnvDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectEnvDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectEnvDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectEnvDataAssetRecord> Records;
    
public:
    UKoratEffectEnvDataAsset();

};


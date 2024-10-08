#pragma once
#include "CoreMinimal.h"
#include "KoratEffectMatParamNameDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectMatParamNameDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectMatParamNameDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TilingVTuningName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectMatParamNameDataAssetRecord> Records;
    
public:
    UKoratEffectMatParamNameDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};


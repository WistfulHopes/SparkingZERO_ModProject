#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSEffectFigureTransformDataRecord.h"
#include "SSEffectFigureTransformDataAsset.generated.h"

UCLASS(Blueprintable)
class USSEffectFigureTransformDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSEffectFigureTransformDataRecord> Records;
    
    USSEffectFigureTransformDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};


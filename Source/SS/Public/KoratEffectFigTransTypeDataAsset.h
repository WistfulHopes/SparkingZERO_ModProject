#pragma once
#include "CoreMinimal.h"
#include "KoratEffectFigureTransformTypeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectFigTransTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectFigTransTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectFigureTransformTypeDataAssetRecord> Records;
    
public:
    UKoratEffectFigTransTypeDataAsset();

    UFUNCTION(BlueprintCallable)
    void ExecuteTool();
    
};


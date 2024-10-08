#pragma once
#include "CoreMinimal.h"
#include "KoratEffectDrownOutDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectDrownOutDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectDrownOutDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectDrownOutDataAssetRecord> Records;
    
public:
    UKoratEffectDrownOutDataAsset();

};


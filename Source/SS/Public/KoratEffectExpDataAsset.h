#pragma once
#include "CoreMinimal.h"
#include "KoratEffectExpDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectExpDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectExpDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectExpDataAssetRecord> Records;
    
public:
    UKoratEffectExpDataAsset();

};


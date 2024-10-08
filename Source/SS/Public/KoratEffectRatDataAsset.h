#pragma once
#include "CoreMinimal.h"
#include "KoratEffectRatDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectRatDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectRatDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectRatDataAssetRecord> Records;
    
public:
    UKoratEffectRatDataAsset();

};


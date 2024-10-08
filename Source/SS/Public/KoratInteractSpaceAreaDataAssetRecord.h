#pragma once
#include "CoreMinimal.h"
#include "KoratInteractSpaceAreaDataAssetRecord.generated.h"

class UKoratEffectSpaceAreaDataAsset;

USTRUCT(BlueprintType)
struct FKoratInteractSpaceAreaDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UKoratEffectSpaceAreaDataAsset> EffectSpaceAreaDataAsset;
    
    SS_API FKoratInteractSpaceAreaDataAssetRecord();
};


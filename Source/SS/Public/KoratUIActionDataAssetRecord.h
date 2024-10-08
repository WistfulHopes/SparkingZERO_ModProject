#pragma once
#include "CoreMinimal.h"
#include "KoratUIActionDataAssetRecord.generated.h"

class USSUIActionDataAsset;

USTRUCT(BlueprintType)
struct FKoratUIActionDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSUIActionDataAsset* DataAsset;
    
    SS_API FKoratUIActionDataAssetRecord();
};


#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataAssetRecord.generated.h"

class USSActionDataAsset;

USTRUCT(BlueprintType)
struct FKoratActionDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSActionDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlNumId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    SS_API FKoratActionDataAssetRecord();
};


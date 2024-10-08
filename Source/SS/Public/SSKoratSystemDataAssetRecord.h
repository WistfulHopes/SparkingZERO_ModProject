#pragma once
#include "CoreMinimal.h"
#include "SSKoratSystemDataAssetRecord.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FSSKoratSystemDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> SubLevel;
    
    SS_API FSSKoratSystemDataAssetRecord();
};


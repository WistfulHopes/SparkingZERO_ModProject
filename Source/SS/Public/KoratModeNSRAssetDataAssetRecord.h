#pragma once
#include "CoreMinimal.h"
#include "KoratModeNSRAssetDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratModeNSRAssetDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> BlueprintClass;
    
    SS_API FKoratModeNSRAssetDataAssetRecord();
};


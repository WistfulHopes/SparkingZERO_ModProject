#pragma once
#include "CoreMinimal.h"
#include "SSWCTResourceDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSWCTResourceDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> Resource;
    
    SS_API FSSWCTResourceDataAssetRecord();
};


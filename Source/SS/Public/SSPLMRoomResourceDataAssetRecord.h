#pragma once
#include "CoreMinimal.h"
#include "SSPLMRoomResourceDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSPLMRoomResourceDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> Resource;
    
    SS_API FSSPLMRoomResourceDataAssetRecord();
};


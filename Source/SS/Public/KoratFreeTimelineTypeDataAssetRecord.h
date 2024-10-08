#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineTypeDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratFreeTimelineTypeDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TestValue;
    
    SS_API FKoratFreeTimelineTypeDataAssetRecord();
};


#pragma once
#include "CoreMinimal.h"
#include "SSViewedRecordSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSViewedRecordSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> ViewedReords;
    
    SS_API FSSViewedRecordSaveData();
};


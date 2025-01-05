#pragma once
#include "CoreMinimal.h"
#include "SSBtlMode010NotifyData.h"
#include "SSBtlMode010NotifySaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSBtlMode010NotifySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSSBtlMode010NotifyData> EventNotifyHistories;
    
    SS_API FSSBtlMode010NotifySaveData();
};


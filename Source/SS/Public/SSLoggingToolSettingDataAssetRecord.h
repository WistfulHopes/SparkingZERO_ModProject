#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "SSLoggingToolSettingDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSLoggingToolSettingDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> ActionDatas;
    
    SS_API FSSLoggingToolSettingDataAssetRecord();
};


#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineTypeSettingDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratFreeTimelineTypeSettingDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratFreeTimelineTypeSettingDataList();
};


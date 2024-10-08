#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineTypeSetting.h"
#include "KoratFreeTimelineTypeSettingRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratFreeTimelineTypeSettingRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineTypeSetting BattleSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineTypeSetting EventSetting;
    
    SS_API FKoratFreeTimelineTypeSettingRecord();
};


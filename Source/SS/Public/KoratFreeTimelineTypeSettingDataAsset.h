#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineTypeSetting.h"
#include "KoratFreeTimelineTypeSettingDataList.h"
#include "KoratFreeTimelineTypeSettingRecord.h"
#include "MutualDataAsset.h"
#include "KoratFreeTimelineTypeSettingDataAsset.generated.h"

class UUserDefinedEnum;

UCLASS(Blueprintable)
class UKoratFreeTimelineTypeSettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UUserDefinedEnum> FromUserEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratFreeTimelineTypeSettingRecord> Records;
    
public:
    UKoratFreeTimelineTypeSettingDataAsset();

    UFUNCTION(BlueprintCallable)
    bool GetSetting(const FKoratFreeTimelineTypeSettingDataList In, const bool InbUseEventSetting, FKoratFreeTimelineTypeSetting& Out);
    
};


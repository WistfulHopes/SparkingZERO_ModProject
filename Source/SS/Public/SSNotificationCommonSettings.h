#pragma once
#include "CoreMinimal.h"
#include "EKortaRewardType.h"
#include "ENotificationType.h"
#include "SSNotificationCommonSettings.generated.h"

class UTexture;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSSNotificationCommonSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENotificationType, TSoftObjectPtr<UTexture>> CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKortaRewardType, TSoftObjectPtr<UTexture2D>> ItemNotifyIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKortaRewardType, bool> ItemTypeNumVisibles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKortaRewardType, FText> ItemTypeHeaderTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonitoringDelayTime;
    
    SS_API FSSNotificationCommonSettings();
};


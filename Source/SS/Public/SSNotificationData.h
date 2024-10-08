#pragma once
#include "CoreMinimal.h"
#include "ENotificationTiming.h"
#include "KoratNotificationDataList.h"
#include "SSNotifyText.h"
#include "SSNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FSSNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratNotificationDataList NotificationDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> ReplaceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotificationTiming OverrideTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSSNotifyText> TitleReplaceTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSSNotifyText> BodyReplaceTexts;
    
    SS_API FSSNotificationData();
};


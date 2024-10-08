#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENotificationTiming.h"
#include "KoratNotificationDataList.h"
#include "SSCriticalNotificationData.h"
#include "SSItemNotificationData.h"
#include "SSNotificationBuffer.h"
#include "SSNotificationManager.generated.h"

class USSUiCommonNotifications;
class USSUiCriticalNotification;
class USSUiItemNotifications;
class UWorld;

UCLASS(Blueprintable)
class USSNotificationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiCommonNotifications* CommonNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiItemNotifications* ItemNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSUiCriticalNotification* CriticalNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ENotificationTiming, FSSNotificationBuffer> Notifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ENotificationTiming, FSSNotificationBuffer> NeedSaveNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSItemNotificationData> ItemNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSCriticalNotificationData> CriticalNoritications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    USSNotificationManager();

    UFUNCTION(BlueprintCallable)
    void RegisterNotification(FKoratNotificationDataList InDataList, TMap<FString, FText> InReplaceText);
    
};


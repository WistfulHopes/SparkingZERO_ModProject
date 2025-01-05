#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratDownLoadContentsDataList.h"
#include "SSDLCItemNotificationData.h"
#include "SSDownLoadContentsCheckProcess.generated.h"

class USSMenuGeneralDialog;

UCLASS(Blueprintable)
class SS_API USSDownLoadContentsCheckProcess : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSMenuGeneralDialog> MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDownLoadContentsDataList> DLCIdAcquisitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDownLoadContentsDataList> DLCIdExpirations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDLCItemNotificationData> DLCItemNotifications;
    
public:
    USSDownLoadContentsCheckProcess();

};


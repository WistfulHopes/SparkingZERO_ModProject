#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSNotificationCommonSettings.h"
#include "SSNotificationDataAssetRecord.h"
#include "SSNotificationDataAsset.generated.h"

UCLASS(Blueprintable)
class USSNotificationDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSNotificationCommonSettings CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSNotificationDataAssetRecord> Records;
    
    USSNotificationDataAsset();

};


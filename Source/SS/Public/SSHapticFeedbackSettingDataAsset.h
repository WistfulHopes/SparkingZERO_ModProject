#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSHapticFeedbackSettingData.h"
#include "SSHapticFeedbackSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API USSHapticFeedbackSettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSSHapticFeedbackSettingData> Records;
    
    USSHapticFeedbackSettingDataAsset();

};


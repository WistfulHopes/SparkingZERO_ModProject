#pragma once
#include "CoreMinimal.h"
#include "KoratMultiDeviceSettingDataGraphicsOptionSettings.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMultiDeviceSettingDataGraphicsOptionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ConsoleVariableSettings;
    
    FKoratMultiDeviceSettingDataGraphicsOptionSettings();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSDebugUIWindowSettingValues.generated.h"

USTRUCT(BlueprintType)
struct FSSDebugUIWindowSettingValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTitleBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 windowSize;
    
    SS_API FSSDebugUIWindowSettingValues();
};


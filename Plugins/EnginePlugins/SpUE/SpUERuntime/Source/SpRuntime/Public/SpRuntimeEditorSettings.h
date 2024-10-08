#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpComboBoxStringSettingItem.h"
#include "SpRuntimeEditorSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class SPRUNTIME_API USpRuntimeEditorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssertionOutputMessageLogEnable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssertionOutputMessageLogLimitOverWarningLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultWBPAnimationFPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpComboBoxStringSettingItem> ComboBoxStringItemArray;
    
    USpRuntimeEditorSettings();

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpComboBoxStringSettingItem.generated.h"

USTRUCT(BlueprintType)
struct SPRUNTIME_API FSpComboBoxStringSettingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StructTypeName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubjectVariableName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DataTableAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExposeToCinematics;
    
    FSpComboBoxStringSettingItem();
};


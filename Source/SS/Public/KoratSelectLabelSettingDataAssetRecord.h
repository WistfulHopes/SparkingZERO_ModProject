#pragma once
#include "CoreMinimal.h"
#include "KoratSelectLabelSettingDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratSelectLabelSettingDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LabelName;
    
    SS_API FKoratSelectLabelSettingDataAssetRecord();
};


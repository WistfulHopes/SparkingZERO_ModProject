#pragma once
#include "CoreMinimal.h"
#include "ESSStaffRollPartsType.h"
#include "SSStaffRollDataAssetRecord.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSStaffRollDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSStaffRollPartsType PartsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    SS_API FSSStaffRollDataAssetRecord();
};


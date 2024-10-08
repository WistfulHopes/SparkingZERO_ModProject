#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratSpaceAreaSettingDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratSpaceAreaSettingDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSpaceAreaTypeDataList SpaceAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList UseAttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
    SS_API FKoratSpaceAreaSettingDataAssetRecord();
};


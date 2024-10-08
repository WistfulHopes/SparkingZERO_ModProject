#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureIFChartMapDirectionType.h"
#include "SSDragonAdventureIFChartMapSubDirBlock.h"
#include "SSDragonAdventureIFChartMapDataAssetRecord.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFChartMapDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventBlockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThumbnailIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSDragonAdventureIFChartMapDirectionType, FName> MapDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSDragonAdventureIFChartMapDirectionType, FSSDragonAdventureIFChartMapSubDirBlock> MapSubDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Explanation;
    
    SS_API FSSDragonAdventureIFChartMapDataAssetRecord();
};


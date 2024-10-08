#pragma once
#include "CoreMinimal.h"
#include "SSWarpPoint.h"
#include "SSWarpTargetAreaSet.h"
#include "SSMapWarpAreaDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSMapWarpAreaDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWarpTargetAreaSet WarpTargetAreaSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWarpPoint> WarpRelationPoints;
    
    SS_API FSSMapWarpAreaDataAssetRecord();
};


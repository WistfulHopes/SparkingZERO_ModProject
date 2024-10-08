#pragma once
#include "CoreMinimal.h"
#include "SSLayeredBoxSafeArea.h"
#include "SSLayeredCylinderSafeArea.h"
#include "SSWarpDirectablePoint.h"
#include "SSWarpNearByWallArea.h"
#include "SSWarpTargetAreaSet.generated.h"

USTRUCT(BlueprintType)
struct FSSWarpTargetAreaSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWarpDirectablePoint> DirectablePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWarpDirectablePoint> AirDirectablePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWarpDirectablePoint> WallDirectablePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWarpDirectablePoint> WaterDirectablePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWarpDirectablePoint> SmallDirectablePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWarpNearByWallArea> NearByWallAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLayeredBoxSafeArea> WarpLayerdBoxSafeAreaLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLayeredCylinderSafeArea> WarpLayerdCylinderSafeAreaLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceStartPosInDeadlyChangeEntrance;
    
    SS_API FSSWarpTargetAreaSet();
};


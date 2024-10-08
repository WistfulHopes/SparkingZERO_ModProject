#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Chaos/ChaosEngineInterface.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratFreeTimelineHitInformation.generated.h"

class AActor;
class AKoratSpaceArea;

USTRUCT(BlueprintType)
struct FKoratFreeTimelineHitInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat HitAxisRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSpaceAreaTypeDataList SpaceAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AKoratSpaceArea> SpaceAreaActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> HitActor;
    
    SS_API FKoratFreeTimelineHitInformation();
};


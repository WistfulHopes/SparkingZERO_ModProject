#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSWarpPoint.h"
#include "MapPointHolder.generated.h"

UCLASS(Blueprintable)
class SS_API UMapPointHolder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWarpPoint> warpSysManagePoints;
    
    UMapPointHolder();

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KantanCartesianDatapoint.generated.h"

USTRUCT(BlueprintType)
struct FKantanCartesianDatapoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Coords;
    
    KANTANCHARTSDATASOURCE_API FKantanCartesianDatapoint();
};


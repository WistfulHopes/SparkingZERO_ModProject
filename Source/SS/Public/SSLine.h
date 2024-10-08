#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSLine.generated.h"

USTRUCT(BlueprintType)
struct FSSLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Point1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Point2;
    
    SS_API FSSLine();
};


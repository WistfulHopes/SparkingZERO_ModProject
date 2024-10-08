#pragma once
#include "CoreMinimal.h"
#include "EKoratInequalitySignType.h"
#include "SSIntInequality.generated.h"

USTRUCT(BlueprintType)
struct FSSIntInequality {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratInequalitySignType Inequality;
    
    SS_API FSSIntInequality();
};


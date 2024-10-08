#pragma once
#include "CoreMinimal.h"
#include "EKoratInequalitySignType.h"
#include "KoratCharacterItemInequality.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterItemInequality {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratInequalitySignType Inequality;
    
    SS_API FKoratCharacterItemInequality();
};


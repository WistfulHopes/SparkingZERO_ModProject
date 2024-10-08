#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterAccessoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterAccessoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurveValue;
    
    SS_API FKoratCharacterAccessoryInfo();
};


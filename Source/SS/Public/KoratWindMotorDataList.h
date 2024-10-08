#pragma once
#include "CoreMinimal.h"
#include "KoratWindMotorDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratWindMotorDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratWindMotorDataList();
};


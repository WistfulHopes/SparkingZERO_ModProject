#pragma once
#include "CoreMinimal.h"
#include "KoratShakeForceTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratShakeForceTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratShakeForceTypeDataList();
};


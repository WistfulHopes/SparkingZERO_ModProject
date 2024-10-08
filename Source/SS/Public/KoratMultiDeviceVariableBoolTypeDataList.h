#pragma once
#include "CoreMinimal.h"
#include "KoratMultiDeviceVariableBoolTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMultiDeviceVariableBoolTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMultiDeviceVariableBoolTypeDataList();
};


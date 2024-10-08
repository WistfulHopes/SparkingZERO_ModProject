#pragma once
#include "CoreMinimal.h"
#include "KoratMultiDeviceVariableFloatTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMultiDeviceVariableFloatTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMultiDeviceVariableFloatTypeDataList();
};


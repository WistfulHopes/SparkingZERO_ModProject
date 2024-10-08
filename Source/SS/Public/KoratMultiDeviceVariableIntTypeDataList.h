#pragma once
#include "CoreMinimal.h"
#include "KoratMultiDeviceVariableIntTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMultiDeviceVariableIntTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMultiDeviceVariableIntTypeDataList();
};


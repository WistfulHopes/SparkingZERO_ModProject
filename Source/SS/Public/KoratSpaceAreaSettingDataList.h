#pragma once
#include "CoreMinimal.h"
#include "KoratSpaceAreaSettingDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratSpaceAreaSettingDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratSpaceAreaSettingDataList();
};


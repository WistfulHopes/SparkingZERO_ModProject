#pragma once
#include "CoreMinimal.h"
#include "SSMissionUserDataTemp.h"
#include "SSMissionUserDataTempArray.generated.h"

USTRUCT(BlueprintType)
struct FSSMissionUserDataTempArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSMissionUserDataTemp> Datas;
    
    SS_API FSSMissionUserDataTempArray();
};


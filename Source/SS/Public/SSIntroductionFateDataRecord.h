#pragma once
#include "CoreMinimal.h"
#include "EFateExecutionOrderType.h"
#include "SSActionFateDataRecord.h"
#include "SSIntroductionFateDataRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSIntroductionFateDataRecord : public FSSActionFateDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFateExecutionOrderType OrderType;
    
    FSSIntroductionFateDataRecord();
};


#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "SSFateDataRecord.h"
#include "SSActionFateDataRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSActionFateDataRecord : public FSSFateDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ReplaceAction;
    
    FSSActionFateDataRecord();
};


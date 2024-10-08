#pragma once
#include "CoreMinimal.h"
#include "SSFateDataRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSFateDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> VoiceTexts;
    
    FSSFateDataRecord();
};


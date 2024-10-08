#pragma once
#include "CoreMinimal.h"
#include "KoratOperationGuideDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratOperationGuideDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> GuideText;
    
    SS_API FKoratOperationGuideDataRecord();
};


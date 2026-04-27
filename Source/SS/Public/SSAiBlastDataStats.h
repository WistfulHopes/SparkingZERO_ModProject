#pragma once
#include "CoreMinimal.h"
#include "KoratAiBlastTypeDataList.h"
#include "SSAiBlastDataStats.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiBlastDataStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratAiBlastTypeDataList> BlastTypes;
    
    FSSAiBlastDataStats();
};


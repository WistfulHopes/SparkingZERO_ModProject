#pragma once
#include "CoreMinimal.h"
#include "KoratAiTypeDataList.h"
#include "KoratBattleCpuData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleCpuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiTypeDataList CpuThinkingType;
    
    SS_API FKoratBattleCpuData();
};


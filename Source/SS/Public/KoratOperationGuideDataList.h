#pragma once
#include "CoreMinimal.h"
#include "KoratOperationGuideDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratOperationGuideDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratOperationGuideDataList();
};


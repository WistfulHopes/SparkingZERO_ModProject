#pragma once
#include "CoreMinimal.h"
#include "KoratBlastUltimateDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBlastUltimateDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBlastUltimateDataList();
};


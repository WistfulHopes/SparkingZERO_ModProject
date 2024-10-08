#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditSocketDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditSocketDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDRMEditSocketDataList();
};


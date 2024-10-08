#pragma once
#include "CoreMinimal.h"
#include "KoratMatchingCondPropDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMatchingCondPropDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMatchingCondPropDataList();
};


#pragma once
#include "CoreMinimal.h"
#include "KoratUIActionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratUIActionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratUIActionDataList();
};


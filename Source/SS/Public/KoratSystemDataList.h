#pragma once
#include "CoreMinimal.h"
#include "KoratSystemDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratSystemDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratSystemDataList();
};


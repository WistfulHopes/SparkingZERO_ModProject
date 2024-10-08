#pragma once
#include "CoreMinimal.h"
#include "KoratBuffData.h"
#include "KoratBuffDataArray.generated.h"

USTRUCT(BlueprintType)
struct FKoratBuffDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBuffData> BuffList;
    
    SS_API FKoratBuffDataArray();
};


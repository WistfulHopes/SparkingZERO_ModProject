#pragma once
#include "CoreMinimal.h"
#include "KoratSubInstanceTagDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratSubInstanceTagDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratSubInstanceTagDataList();
};


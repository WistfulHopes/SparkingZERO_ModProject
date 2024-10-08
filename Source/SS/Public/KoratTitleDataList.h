#pragma once
#include "CoreMinimal.h"
#include "KoratTitleDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratTitleDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratTitleDataList();
};


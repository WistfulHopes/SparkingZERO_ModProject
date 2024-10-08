#pragma once
#include "CoreMinimal.h"
#include "KoratSeriesTitleDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratSeriesTitleDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratSeriesTitleDataList();
};


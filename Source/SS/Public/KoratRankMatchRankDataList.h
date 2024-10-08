#pragma once
#include "CoreMinimal.h"
#include "KoratRankMatchRankDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratRankMatchRankDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratRankMatchRankDataList();
};


#pragma once
#include "CoreMinimal.h"
#include "KoratAttackHomingDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAttackHomingDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAttackHomingDataList();
};


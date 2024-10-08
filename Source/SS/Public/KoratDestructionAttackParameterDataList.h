#pragma once
#include "CoreMinimal.h"
#include "KoratDestructionAttackParameterDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDestructionAttackParameterDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDestructionAttackParameterDataList();
};


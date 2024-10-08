#pragma once
#include "CoreMinimal.h"
#include "KoratDestructionAttackParameter.h"
#include "KoratDestructionAttackParameterDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratDestructionAttackParameterDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDestructionAttackParameter DestructionAttackParameter;
    
    SS_API FKoratDestructionAttackParameterDataAssetRecord();
};


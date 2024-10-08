#pragma once
#include "CoreMinimal.h"
#include "KoratDestructionAttackParameterDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratDestructionAttackParameterDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratDestructionAttackParameterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDestructionAttackParameterDataAssetRecord> Records;
    
public:
    UKoratDestructionAttackParameterDataAsset();

};


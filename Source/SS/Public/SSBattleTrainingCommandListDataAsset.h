#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingCommandListDataAsset.generated.h"

class USSBattleTrainingCommandDataAsset;

UCLASS(Blueprintable)
class USSBattleTrainingCommandListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSBattleTrainingCommandDataAsset*> PtrRecords;
    
    USSBattleTrainingCommandListDataAsset();

};


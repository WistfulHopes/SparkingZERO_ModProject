#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingLinesListDataAsset.generated.h"

class USSBattleTrainingLinesDataAsset;

UCLASS(Blueprintable)
class USSBattleTrainingLinesListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSBattleTrainingLinesDataAsset*> PtrRecords;
    
    USSBattleTrainingLinesListDataAsset();

};


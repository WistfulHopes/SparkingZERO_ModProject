#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingLinesDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSBattleTrainingLinesDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DirectingSequencer;
    
    USSBattleTrainingLinesDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMontageLevelSequence.h"
#include "KoratCombinationDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratCombinationDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMontageLevelSequence> MontageLevelSequenceOneself;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMontageLevelSequence> MontageLevelSequenceOpponent;
    
    UKoratCombinationDataAsset();

};


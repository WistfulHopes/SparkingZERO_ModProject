#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSEffectHighSpeedMoveDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSEffectHighSpeedMoveDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceOut;
    
    USSEffectHighSpeedMoveDataAsset();

};


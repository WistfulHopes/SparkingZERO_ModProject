#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSFormChangeDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSFormChangeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceRemove;
    
    USSFormChangeDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSUIActionDataAsset.generated.h"

class UAnimMontage;
class ULevelSequence;

UCLASS(Blueprintable)
class USSUIActionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    USSUIActionDataAsset();

};


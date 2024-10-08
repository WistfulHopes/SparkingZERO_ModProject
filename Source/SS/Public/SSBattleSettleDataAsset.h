#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBattleSettleDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSBattleSettleDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> CameraSequence;
    
    USSBattleSettleDataAsset();

};


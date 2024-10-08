#pragma once
#include "CoreMinimal.h"
#include "KoratBattleOperationGuideData.h"
#include "MutualDataAsset.h"
#include "SSBattleOperationGuideDataAsset.generated.h"

UCLASS(Blueprintable)
class USSBattleOperationGuideDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleOperationGuideData BattleOperationGuideData;
    
    USSBattleOperationGuideDataAsset();

};


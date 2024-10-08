#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingItemListDataAsset.generated.h"

class USSBattleTrainingItemDataAsset;

UCLASS(Blueprintable)
class USSBattleTrainingItemListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSBattleTrainingItemDataAsset*> PtrRecords;
    
    USSBattleTrainingItemListDataAsset();

};


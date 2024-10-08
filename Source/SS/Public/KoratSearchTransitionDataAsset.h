#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSearchStatus.h"
#include "KoratSearchData.h"
#include "MutualDataAsset.h"
#include "KoratSearchTransitionDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratSearchTransitionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSearchStatus, FKoratSearchData> TransitionData;
    
    UKoratSearchTransitionDataAsset();

};


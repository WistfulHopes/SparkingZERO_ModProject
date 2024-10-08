#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSearchType.h"
#include "MutualDataAsset.h"
#include "KoratSearchDataAsset.generated.h"

class UKoratSearchTransitionDataAsset;
class ULevelSequence;

UCLASS(Blueprintable)
class UKoratSearchDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSearchTransitionDataAsset* NormalTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSearchType, TSoftObjectPtr<ULevelSequence>> SearchEffect;
    
    UKoratSearchDataAsset();

};


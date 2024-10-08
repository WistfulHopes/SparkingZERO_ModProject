#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSFreeTournamentResDataAssetRecord.h"
#include "SSFreeTournamentResDataAsset.generated.h"

UCLASS(Blueprintable)
class USSFreeTournamentResDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSFreeTournamentResDataAssetRecord> Records;
    
public:
    USSFreeTournamentResDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "SSFreeTournamentResDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSFreeTournamentResDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> Resources;
    
    SS_API FSSFreeTournamentResDataAssetRecord();
};


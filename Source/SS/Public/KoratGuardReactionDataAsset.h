#pragma once
#include "CoreMinimal.h"
#include "KoratGuardReactionDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratGuardReactionDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratGuardReactionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratGuardReactionDataAssetRecord> Records;
    
public:
    UKoratGuardReactionDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "KoratCombativesKeyDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratCombativesKeyDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratCombativesKeyDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCombativesKeyDataAssetRecord> Records;
    
public:
    UKoratCombativesKeyDataAsset();

};


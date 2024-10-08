#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterGroupDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratCharacterGroupDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratCharacterGroupDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCharacterGroupDataAssetRecord> Records;
    
public:
    UKoratCharacterGroupDataAsset();

};


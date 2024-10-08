#pragma once
#include "CoreMinimal.h"
#include "KoratAuraLevelDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratAuraLevelDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratAuraLevelDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratAuraLevelDataAssetRecord> Records;
    
public:
    UKoratAuraLevelDataAsset();

};


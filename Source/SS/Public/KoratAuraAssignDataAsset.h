#pragma once
#include "CoreMinimal.h"
#include "KoratAuraAssignDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratAuraAssignDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratAuraAssignDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratAuraAssignDataAssetRecord> Records;
    
public:
    UKoratAuraAssignDataAsset();

};


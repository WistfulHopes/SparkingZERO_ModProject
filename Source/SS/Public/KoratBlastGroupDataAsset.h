#pragma once
#include "CoreMinimal.h"
#include "KoratBlastGroupDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBlastGroupDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratBlastGroupDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBlastGroupDataAssetRecord> Records;
    
public:
    UKoratBlastGroupDataAsset();

};


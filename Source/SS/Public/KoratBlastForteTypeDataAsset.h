#pragma once
#include "CoreMinimal.h"
#include "KoratBlastForteTypeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBlastForteTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBlastForteTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBlastForteTypeDataAssetRecord> Records;
    
public:
    UKoratBlastForteTypeDataAsset();

};


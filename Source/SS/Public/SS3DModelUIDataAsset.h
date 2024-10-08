#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SS3DModelUIDataAssetRecord.h"
#include "SS3DModelUIDataAsset.generated.h"

UCLASS(Blueprintable)
class USS3DModelUIDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSS3DModelUIDataAssetRecord> Records;
    
public:
    USS3DModelUIDataAsset();

};


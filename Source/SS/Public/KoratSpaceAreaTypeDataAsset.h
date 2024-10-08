#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratSpaceAreaTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratSpaceAreaTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Records;
    
public:
    UKoratSpaceAreaTypeDataAsset();

};


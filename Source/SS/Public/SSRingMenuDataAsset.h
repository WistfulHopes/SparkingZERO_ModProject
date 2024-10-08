#pragma once
#include "CoreMinimal.h"
#include "KoratRingMenuDataArray.h"
#include "MutualDataAsset.h"
#include "SSRingMenuDataAsset.generated.h"

UCLASS(Blueprintable)
class USSRingMenuDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratRingMenuDataArray> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickThreshold;
    
    USSRingMenuDataAsset();

};


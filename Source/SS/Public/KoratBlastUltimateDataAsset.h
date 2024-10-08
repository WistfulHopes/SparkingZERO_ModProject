#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratBlastUltimateDataAsset.generated.h"

class UDEPRECATED_SSBlastUltimateParamDataAsset;

UCLASS(Blueprintable, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_KoratBlastUltimateDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(meta=(DeprecatedProperty))
    TMap<FName, UDEPRECATED_SSBlastUltimateParamDataAsset*> Records_DEPRECATED;
    
public:
    UDEPRECATED_KoratBlastUltimateDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBlastUltimateName(const FName& InBlastUltimateKey) const;
    
};


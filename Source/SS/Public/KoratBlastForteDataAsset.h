#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratBlastForteDataAsset.generated.h"

class UDEPRECATED_SSBlastForteParamDataAsset;

UCLASS(Blueprintable, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_KoratBlastForteDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(meta=(DeprecatedProperty))
    TMap<FName, UDEPRECATED_SSBlastForteParamDataAsset*> PtrRecords_DEPRECATED;
    
public:
    UDEPRECATED_KoratBlastForteDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBlastForteName(const FName& InBlastForteKey) const;
    
};


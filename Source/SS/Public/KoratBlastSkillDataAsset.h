#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratBlastSkillDataAsset.generated.h"

class UDEPRECATED_SSBlastSkillParamDataAsset;

UCLASS(Blueprintable, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_KoratBlastSkillDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(meta=(DeprecatedProperty))
    TMap<FName, UDEPRECATED_SSBlastSkillParamDataAsset*> Records_DEPRECATED;
    
public:
    UDEPRECATED_KoratBlastSkillDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBlastSkillName(const FName& InBlastSkillKey) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSParticleCategoryPattern.h"
#include "SSParticleCategoryPatternDataAsset.generated.h"

UCLASS(Blueprintable)
class USSParticleCategoryPatternDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSSParticleCategoryPattern> Records;
    
public:
    USSParticleCategoryPatternDataAsset();

};


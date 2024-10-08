#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMaterialBranchList.h"
#include "SSOutlinePrameter.h"
#include "SSParticleBranchList.h"
#include "SSEffectColorDataAsset.generated.h"

class UKoratEffectAuraDataAsset;
class UKoratEffectShaderColorDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class USSEffectColorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UKoratEffectShaderColorDataAsset> InstanceParamColorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UKoratEffectAuraDataAsset> AuraParamAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSOutlinePrameter OutlineParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UKoratEffectShaderColorDataAsset> StencilColorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSParticleBranchList> ParticleBranchLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMaterialBranchList> MaterialBranchLists;
    
    USSEffectColorDataAsset();

protected:
    UFUNCTION(BlueprintCallable)
    void ParticleBranchPickup();
    
};


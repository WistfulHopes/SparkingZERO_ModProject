#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratMPCDataAsset.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UKoratMPCDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> StageDitherMaterialParameterCollection;
    
    UKoratMPCDataAsset();

};


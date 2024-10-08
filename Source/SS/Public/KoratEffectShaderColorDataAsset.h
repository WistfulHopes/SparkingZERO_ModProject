#pragma once
#include "CoreMinimal.h"
#include "KoratInstanceParameterColor.h"
#include "MutualDataAsset.h"
#include "KoratEffectShaderColorDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratEffectShaderColorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratInstanceParameterColor> InstanceParameterArray;
    
    UKoratEffectShaderColorDataAsset();

};


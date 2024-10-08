#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSActionCameraParameterData.h"
#include "SSActionCameraDataAsset.generated.h"

UCLASS(Blueprintable)
class USSActionCameraDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSActionCameraParameterData Parameter;
    
    USSActionCameraDataAsset();

};

